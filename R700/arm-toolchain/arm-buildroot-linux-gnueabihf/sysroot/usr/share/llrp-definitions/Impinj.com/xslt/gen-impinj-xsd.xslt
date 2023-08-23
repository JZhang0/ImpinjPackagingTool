<?xml version="1.0"?>
<xsl:stylesheet version="2.0"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:xs="http://www.w3.org/2001/XMLSchema"
                xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
                xmlns:mappings="http://llrp.org/temp/mappings"
                xmlns:exslt="http://exslt.org/common"
                xmlns:h="http://www.w3.org/1999/xhtml"
                xmlns:llrpdef="http://www.llrp.org/ltk/schema/core/encoding/binary/1.0"
                exclude-result-prefixes=""
>
  <xsl:output method="xml"
              indent="yes"
              encoding="utf-8"
              omit-xml-declaration="no"/>

  <!-- these should probably be passed in from a command line -->
  <xsl:variable name="llrpNamespace">http://www.llrp.org/ltk/schema/core/encoding/xml/1.0</xsl:variable>
  <xsl:variable name="llrpSchemaLoc">http://www.llrp.org/ltk/schema/core/encoding/xml/1.0/llrp.xsd</xsl:variable>
  <xsl:variable name="llrpDefNamespace">http://www.llrp.org/ltk/schema/core/encoding/binary/1.0</xsl:variable>
  <xsl:variable name="llrpDefSchemaLoc">http://www.llrp.org/ltk/schema/core/encoding/binary/1.0/llrpdef.xsd</xsl:variable>

  <!-- these are handy to have in variables -->
  <xsl:variable name="vendorURI">
    <xsl:value-of select="//llrpdef:llrpdef/llrpdef:namespaceDefinition/@URI"/>
  </xsl:variable>
  <xsl:variable name="vendorPrefix">
    <xsl:value-of select="//llrpdef:llrpdef/llrpdef:namespaceDefinition/@prefix"/>
  </xsl:variable>
  <xsl:variable name="vendorName">
    <xsl:value-of select="//llrpdef:llrpdef/llrpdef:vendorDefinition/@name"/>
  </xsl:variable>

  <!-- Space is so hard in xslt that I have to make a template so I can mess with it -->
  <xsl:template name="blankSpace">
    <xsl:text>
</xsl:text>
  </xsl:template>

  <xsl:template name="repeatAttribute">
    <xsl:choose>
      <xsl:when test="./@repeat='1'">
        <!--Nothing to do since this is default for xs-->
      </xsl:when>
      <xsl:when test="./@repeat='0-1'">
        <xsl:attribute name="minOccurs">0</xsl:attribute>
      </xsl:when>
      <xsl:when test="./@repeat='0-N'">
        <xsl:attribute name="minOccurs">0</xsl:attribute>
        <xsl:attribute name="maxOccurs">unbounded</xsl:attribute>
      </xsl:when>
      <xsl:when test="./@repeat='1-N'">
        <xsl:attribute name="maxOccurs">unbounded</xsl:attribute>
      </xsl:when>
      <xsl:otherwise>
        ERROR --unhandled repeat option -- <xsl:value-of select="./@repeat"/>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:template>

  <xsl:template name="typeAttribute">
    <xsl:variable name="typeName"
                  select="./@type"/>
    <xsl:attribute name="type">
      <xsl:choose>
        <!-- This is worth a note.  If we find the type defined in this file, we'll put it within 
          this namespace.  otherwise, we call it LLRP -->
        <xsl:when test="/llrpdef:llrpdef/llrpdef:parameterDefinition/@name=$typeName">
          <xsl:text>llrp:</xsl:text>
          <xsl:value-of select="./@type"/>
        </xsl:when>
        <xsl:when test="/llrpdef:llrpdef/llrpdef:messageDefinition/@name=$typeName">
          <xsl:text>llrp:</xsl:text>
          <xsl:value-of select="./@type"/>
        </xsl:when>
        <xsl:when test="/llrpdef:llrpdef/llrpdef:enumerationDefinition/@name=$typeName">
          <xsl:text>llrp:</xsl:text>
          <xsl:value-of select="./@type"/>
        </xsl:when>
        <xsl:when test="/llrpdef:llrpdef/llrpdef:customParameterDefinition/@name=$typeName">
          <xsl:value-of select="/llrpdef:llrpdef/llrpdef:customParameterDefinition[@name=$typeName]/@namespace"/>
          <xsl:text>:</xsl:text>
          <xsl:value-of select="./@type"/>
        </xsl:when>
        <xsl:when test="/llrpdef:llrpdef/llrpdef:customChoiceDefinition/@name=$typeName">
          <xsl:value-of select="/llrpdef:llrpdef/llrpdef:customChoiceDefinition[@name=$typeName]/@namespace"/>
          <xsl:text>:</xsl:text>
          <xsl:value-of select="./@type"/>
        </xsl:when>
        <xsl:when test="/llrpdef:llrpdef/llrpdef:customEnumerationDefinition/@name=$typeName">
          <xsl:value-of select="/llrpdef:llrpdef/llrpdef:customEnumerationDefinition[@name=$typeName]/@namespace"/>
          <xsl:text>:</xsl:text>
          <xsl:value-of select="./@type"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:text>llrp:</xsl:text>
          <xsl:value-of select="./@type"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:attribute>
  </xsl:template>

  <xsl:template name="subElements">
    <xsl:for-each select="./*">
      <xsl:choose>
        <xsl:when test="name(.)='annotation'">
          <xsl:call-template name="annotationElement"/>
        </xsl:when>
        <xsl:when test="name(.)='field'">
          <xsl:call-template name="fieldElement"/>
        </xsl:when>
        <xsl:when test="name(.)='reserved'">
          <xsl:call-template name="reservedElement"/>
        </xsl:when>
        <xsl:when test="name(.)='parameter'">
          <xsl:call-template name="parameterElement"/>
        </xsl:when>
        <xsl:when test="name(.)='choice'">
          <xsl:call-template name="choiceElement"/>
        </xsl:when>
        <xsl:when test="name(.)='allowedIn'">
          <xsl:call-template name="allowedInElement"/>
        </xsl:when>
        <xsl:otherwise>
          --ERR-<xsl:value-of select ="name(.)"/>---
        </xsl:otherwise>
      </xsl:choose>
    </xsl:for-each>
  </xsl:template>

  <!-- allowed in element templates don't need to do anything for the xslt -->
  <xsl:template name="allowedInElement">
    <!--nothing to do here-->
  </xsl:template>

  <!-- when a choice definition needs to be dumped to the output here's the template-->
  <xsl:template name="choiceElement">
    <xsl:variable name="typeName"
                  select="./@type"/>
    <xsl:element name="xs:choice">
      <xsl:call-template name="repeatAttribute"/>
      <xsl:for-each select="/llrpdef:llrpdef/llrpdef:customChoiceDefinition[@name=$typeName]/llrpdef:parameter">
        <xsl:element name="xs:element">
          <xsl:attribute name="name">
            <xsl:value-of select="./@type"/>
          </xsl:attribute>
          <xsl:call-template name="typeAttribute"/>
        </xsl:element>
      </xsl:for-each>
    </xsl:element>
  </xsl:template>

  <!-- when a parameter definition needs to be dumped to the output, here's the template that formats its -->
  <xsl:template name="parameterElement">
    <xsl:element name="xs:element">
      <xsl:attribute name="name">
        <xsl:value-of select="./@type"/>
      </xsl:attribute>
      <xsl:call-template name="typeAttribute"/>
      <xsl:call-template name="repeatAttribute"/>
    </xsl:element>
  </xsl:template>

  <!-- a field definition is dumped by this template -->
  <xsl:template name="fieldElement">
    <xsl:element name="xs:element">
      <xsl:attribute name="name">
        <xsl:value-of select="./@name"/>
      </xsl:attribute>
      <xsl:variable name="format">
        <xsl:value-of select="./@type"/>:<xsl:value-of select="./@format"/>
      </xsl:variable>
      <xsl:attribute name="type">
        <xsl:choose>
          <xsl:when test="./@enumeration != 'null'">
            <xsl:choose>
              <xsl:when test="../@namespace">
                <xsl:value-of select="../@namespace"/>
              </xsl:when>
              <xsl:otherwise>
                <xsl:text>llrp</xsl:text>
              </xsl:otherwise>
            </xsl:choose>
            <xsl:text>:</xsl:text>
            <xsl:value-of select="./@enumeration"/>
          </xsl:when>
          <xsl:when test="$format='u1:'">
            <xsl:text>xs:boolean</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u1v:Hex'">
            <xsl:text>llrp:bitVector</xsl:text>
          </xsl:when>

          <xsl:when test="$format='u2:'">
            <xsl:text>llrp:twoBit</xsl:text>
          </xsl:when>

          <xsl:when test="$format='u8:'">
            <xsl:text>xs:unsignedByte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u8:Hex'">
            <xsl:text>llrp:hexByte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u8:Dec'">
            <xsl:text>xs:unsignedByte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u8v:'">
            <xsl:text>llrp:listOfUnsignedByte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u8v:Hex'">
            <xsl:text>xs:hexBinary</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u8v:Dec'">
            <xsl:text>llrp:listOfUnsignedByte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u8v:UTF8'">
            <xsl:text>xs:string</xsl:text>
          </xsl:when>

          <xsl:when test="$format='s8:'">
            <xsl:text>xs:byte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s8:Hex'">
            <xsl:text>llrp:hexByte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s8:Dec'">
            <xsl:text>xs:byte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s8v:'">
            <xsl:text>llrp:listOfByte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s8v:Hex'">
            <xsl:text>xs:hexBinary</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s8v:Dec'">
            <xsl:text>llrp:listOfByte</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s8v:UTF8'">
            <xsl:text>xs:string</xsl:text>
          </xsl:when>

          <xsl:when test="$format='u16:'">
            <xsl:text>xs:unsignedShort</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u16:Hex'">
            <xsl:text>llrp:hexWord</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u16:Dec'">
            <xsl:text>xs:unsignedShort</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u16v:'">
            <xsl:text>llrp:listOfUnsignedShort</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u16v:Hex'">
            <xsl:text>llrp:listOfHexWord</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u16v:Dec'">
            <xsl:text>llrp:listOfUnsignedShort</xsl:text>
          </xsl:when>

          <xsl:when test="$format='s16:'">
            <xsl:text>xs:short</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s16:Hex'">
            <xsl:text>llrp:hexWord</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s16:Dec'">
            <xsl:text>xs:short</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s16v:'">
            <xsl:text>llrp:listOfSignedShort</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s16v:Hex'">
            <xsl:text>llrp:listOfHexWord</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s16v:Dec'">
            <xsl:text>llrp:listOfSignedShort</xsl:text>
          </xsl:when>

          <xsl:when test="$format='u32:'">
            <xsl:text>xs:unsignedInt</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u32:Hex'">
            <xsl:text>llrp:hexDWord</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u32:Dec'">
            <xsl:text>xs:unsignedInt</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u32v:'">
            <xsl:text>llrp:listOfUnsignedInt</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u32v:Hex'">
            <xsl:text>llrp:listOfHexDWord</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u32v:Dec'">
            <xsl:text>llrp:listOfUnsignedInt</xsl:text>
          </xsl:when>

          <xsl:when test="$format='s32:'">
            <xsl:text>xs:int</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s32:Hex'">
            <xsl:text>llrp:hexDWord</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s32:Dec'">
            <xsl:text>xs:int</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s32v:'">
            <xsl:text>llrp:listOfSignedInt</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s32v:Hex'">
            <xsl:text>llrp:listOfHexWord</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s32v:Dec'">
            <xsl:text>llrp:listOfSignedInt</xsl:text>
          </xsl:when>

          <xsl:when test="$format='u64:'">
            <xsl:text>xs:unsignedLong</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u64:Datetime'">
            <xsl:text>xs:dateTime</xsl:text>
          </xsl:when>
          <xsl:when test="$format='s64:'">
            <xsl:text>xs:long</xsl:text>
          </xsl:when>

          <xsl:when test="$format='u96:'">
            <xsl:text>xs:hexBinary</xsl:text>
          </xsl:when>
          <xsl:when test="$format='u96:Hex'">
            <xsl:text>xs:hexBinary</xsl:text>
          </xsl:when>
          <xsl:when test="$format='utf8v:'">
            <xsl:text>xs:string</xsl:text>
          </xsl:when>
          <xsl:when test="$format='utf8v:UTF8'">
            <xsl:text>xs:string</xsl:text>
          </xsl:when>
          <xsl:when test="$format='bytesToEnd:Hex'">
            <xsl:text>xs:hexBinary</xsl:text>
          </xsl:when>
          <xsl:otherwise>
            ERROR --unhandled format -- <xsl:value-of select="$format"/>
          </xsl:otherwise>
        </xsl:choose>
      </xsl:attribute>
    </xsl:element>
  </xsl:template>

  <!-- no need to dump reserved definitions in the schema, but this is the placeholder -->
  <xsl:template name="reservedElement">
    <!-- <xsl:comment>reserved <xsl:value-of select="./@bitCount"/> bits </xsl:comment> -->
  </xsl:template>

  <!-- TODO we should add the commends to the xslt -->
  <xsl:template name="annotationElement">
  </xsl:template>

  <!-- custom parameters are dumped by this template -->
  <xsl:template name="customParameterDefinition">
    <xsl:element name="xs:complexType">
      <xsl:attribute name="name">
        <xsl:value-of select="./@name"/>
      </xsl:attribute>
      <xsl:element name="xs:sequence">
        <xsl:call-template name="subElements"/>
      </xsl:element>
      <xsl:element name="xs:attributeGroup">
        <xsl:attribute name="ref">llrp:paramAttrs</xsl:attribute>
      </xsl:element>
    </xsl:element>

    <!-- custom messages are dumped by this template -->
  </xsl:template>
  <xsl:template name="customMessageDefinition">
    <xsl:element name="xs:complexType">
      <xsl:attribute name="name">
        <xsl:value-of select="./@name"/>
      </xsl:attribute>
      <xsl:element name="xs:sequence">
        <xsl:call-template name="subElements"/>
      </xsl:element>
      <xsl:element name="xs:attributeGroup">
        <xsl:attribute name="ref">llrp:headerAttrs</xsl:attribute>
      </xsl:element>
    </xsl:element>
  </xsl:template>

  <!-- Enumeration simpleType definitions -->
  <xsl:template name="customEnumerationDefinition">
    <xsl:element name="xs:simpleType">
      <xsl:attribute name="name">
        <xsl:value-of select="./@name"/>
      </xsl:attribute>
      <xsl:element name="xs:restriction">
        <xsl:attribute name="base">
          <xsl:text>xs:string</xsl:text>
        </xsl:attribute>
        <xsl:for-each select="./llrpdef:entry">
          <xsl:element name="xs:enumeration">
            <xsl:attribute name="value">
              <xsl:value-of select="./@name"/>
            </xsl:attribute>
          </xsl:element>
        </xsl:for-each>
      </xsl:element>
    </xsl:element>
  </xsl:template>

  <!-- the root template that runs the XSLT -->
  <xsl:template match="/">
    <xsl:comment>
      <xsl:text>
    - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    -                                                                           -
    -                 IMPINJ CONFIDENTIAL AND PROPRIETARY                       -
    -                                                                           -
    - This source code is the sole property of Impinj, Inc.  Reproduction or    -
    - utilization of this source code in whole or in part is forbidden without  -
    - the prior written consent of Impinj, Inc.                                 -
    -                                                                           -
    - (c) Copyright Impinj, Inc. 2007,2009. All rights reserved.                -
    -                                                                           -
    - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
      </xsl:text>
    </xsl:comment>
    <xsl:call-template name="blankSpace"/>

    <xsl:element name="xs:schema">
      <xsl:namespace name="{$vendorPrefix}"
                     select="$vendorURI"/>
      <xsl:namespace name="llrp"
                     select="$llrpNamespace"/>
      <xsl:namespace name=""
                     select="'http://www/w3.org/2001/XMLSchema'"/>
      <xsl:attribute name="targetNamespace">
        <xsl:copy-of select="$vendorURI"/>
      </xsl:attribute>
      <xsl:attribute name="elementFormDefault">qualified</xsl:attribute>

      <!-- if we are not building the llrp.xsd import it for reference -->
      <xsl:choose>
        <xsl:when test="$vendorURI=$llrpNamespace"/>
        <xsl:otherwise>
          <xsl:element name = "xs:import">
            <xsl:attribute name="namespace"
                           select="$llrpNamespace"/>
            <xsl:attribute name="schemaLocation"
                           select="$llrpSchemaLoc"/>
          </xsl:element>
        </xsl:otherwise>
      </xsl:choose>

      <xsl:element name = "xs:import">
        <xsl:attribute name="namespace"
                       select="$llrpDefNamespace"/>
        <xsl:attribute name="schemaLocation"
                       select="$llrpDefSchemaLoc"/>
      </xsl:element>
      <xsl:call-template name="blankSpace"/>
      <xsl:call-template name="blankSpace"/>
      <!-- Declaration of messages -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:messageDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:element name="xs:element">
          <xsl:attribute name="name">
            <xsl:value-of select="@name"/>
          </xsl:attribute>
          <xsl:attribute name="type">
            <xsl:value-of select="$vendorPrefix"/>:<xsl:value-of select="@name"/>
          </xsl:attribute>
        </xsl:element>
      </xsl:for-each>
      <xsl:call-template name="blankSpace"/>
      <xsl:call-template name="blankSpace"/>
      <!-- Declaration of custom messages -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:customMessageDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:element name="xs:element">
          <xsl:attribute name="name">
            <xsl:value-of select="@name"/>
          </xsl:attribute>
          <xsl:attribute name="type">
            <xsl:value-of select="$vendorPrefix"/>:<xsl:value-of select="@name"/>
          </xsl:attribute>
        </xsl:element>
      </xsl:for-each>
      <xsl:call-template name="blankSpace"/>
      <xsl:call-template name="blankSpace"/>
      <!-- Declaration of parameters -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:parameterDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:element name="xs:element">
          <xsl:attribute name="name">
            <xsl:value-of select="@name"/>
          </xsl:attribute>
          <xsl:attribute name="type">
            <xsl:value-of select="$vendorPrefix"/>:<xsl:value-of select="@name"/>
          </xsl:attribute>
        </xsl:element>
      </xsl:for-each>
      <xsl:call-template name="blankSpace"/>
      <xsl:call-template name="blankSpace"/>
      <!-- Declaration of custom parameters -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:customParameterDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:element name="xs:element">
          <xsl:attribute name="name">
            <xsl:value-of select="@name"/>
          </xsl:attribute>
          <xsl:attribute name="type">
            <xsl:value-of select="$vendorPrefix"/>:<xsl:value-of select="@name"/>
          </xsl:attribute>
        </xsl:element>
      </xsl:for-each>
      <xsl:call-template name="blankSpace"/>
      <xsl:call-template name="blankSpace"/>
      <!-- Definition of Messages -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:messageDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:call-template name="customMessageDefinition"/>
        <xsl:call-template name="blankSpace"/>
      </xsl:for-each>
      <xsl:call-template name="blankSpace"/>
      <xsl:call-template name="blankSpace"/>
      <!-- Definition of Custom Messages -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:customMessageDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:call-template name="customMessageDefinition"/>
        <xsl:call-template name="blankSpace"/>
      </xsl:for-each>
      <xsl:call-template name="blankSpace"/>
      <xsl:call-template name="blankSpace"/>
      <!-- Definition of Parameters -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:parameterDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:call-template name="customParameterDefinition"/>
        <xsl:call-template name="blankSpace"/>
      </xsl:for-each>
      <xsl:call-template name="blankSpace"/>
      <xsl:call-template name="blankSpace"/>
      <!-- Definition of Custom Parameters -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:customParameterDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:call-template name="customParameterDefinition"/>
        <xsl:call-template name="blankSpace"/>
      </xsl:for-each>
      <xsl:call-template name="blankSpace"/>
      <xsl:call-template name="blankSpace"/>
      <!-- Definition of Enumerations -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:enumerationDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:call-template name="customEnumerationDefinition"/>
        <xsl:call-template name="blankSpace"/>
      </xsl:for-each>
      <!-- Definition of Custom Enumerations -->
      <xsl:for-each select="//llrpdef:llrpdef/llrpdef:customEnumerationDefinition">
        <xsl:call-template name="blankSpace"/>
        <xsl:call-template name="customEnumerationDefinition"/>
        <xsl:call-template name="blankSpace"/>
      </xsl:for-each>
    </xsl:element>
  </xsl:template>
</xsl:stylesheet>
