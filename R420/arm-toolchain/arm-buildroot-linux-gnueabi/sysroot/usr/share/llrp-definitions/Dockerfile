FROM ubuntu:18.04

ARG ARTIFACTORY_USER=""
ARG ARTIFACTORY_TOKEN=""

# Update and Install system dependencies
RUN apt-get -y update &&\
    apt-get -y upgrade &&\
    apt-get install -y \
        software-properties-common \
        wget \
        unzip \
        ant \
        gettext-base

# Setup Apache Maven
ENV MAVEN_VERSION 3.5.4
RUN wget www-us.apache.org/dist/maven/maven-3/${MAVEN_VERSION}/binaries/apache-maven-${MAVEN_VERSION}-bin.tar.gz &&\
	tar -xvzf apache-maven-${MAVEN_VERSION}-bin.tar.gz &&\
	mv apache-maven-${MAVEN_VERSION} /opt/maven

# Update $PATH with Maven path
ENV M2_HOME /opt/maven
ENV PATH="${M2_HOME}/bin:${PATH}"

# Set work directory
WORKDIR /mnt/work

# Create account, UID must match file in the host's bind mount dir
ARG UID
RUN echo "user:x:$UID:$UID::/mnt/home:/bin/bash" >> /etc/passwd && \
	echo "user:x:$UID:user" >> /etc/group

# Prep directories in the image so that running later we have
# permissions to write to them as volumes
RUN mkdir -p /mnt/home && chown user:user /mnt/home &&\
    mkdir -p /mnt/home/.m2 && chown user:user /mnt/home/.m2

# Create maven settings file
ADD . /mnt/work
RUN mkdir -p /mnt/home/.m2 && envsubst < settings.xml > /mnt/home/.m2/settings.xml
