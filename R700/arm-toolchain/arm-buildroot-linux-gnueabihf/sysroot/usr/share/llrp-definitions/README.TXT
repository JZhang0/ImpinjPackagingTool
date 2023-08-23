
OVERVIEW OF THE LLRP Tool Kit Definitions Files
Last updated 28 July 2011


INTRODUCTION
============
The LLRPdef archive contains the definition files to
describe the packet format of the LLRP implementation
and to any custom extensions included in the archive.

The term "extension" refers to CUSTOM_MESSAGE and
CustomParameter definitions.

These definitions are used for automatated code generation by 
the LTK and other projects.

LIST OF FILES
=============

Core/
    Directory containing core protocol definitions, i.e.
    those defined by the LLRP Specification proper.

Core/llrp-1x0-def.xml
    Describes the binary protocol.
    This file MUST and DOES conform to ../llrpdef.xsd

Core/llrp-1x0.xsd
    An XML Schema description of the LLRP core protocol.
    It is used by XML editors and validators to be
    sure XML text files make sense.

llrpdef.xsd
    An XML Schema that describes the valid contents
    of the */*-def.xml files. This file is used by
    code generators to ensure that the def.xml files
    are valid llrp protocol descriptions

README.TXT
    This file that you are reading.

*.{com,edu,org}/
*.{com,edu,org}/*-def.xml
*.{com,edu,org}/*.xsd
    As organizations define and publish their extensions,
    they may add definition files.
    These *-def.xml files MUST conform to ../llrpdef.xsd.

