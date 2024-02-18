FROM ubuntu:22.04

RUN apt-get -y update; \
    apt-get -y install valgrind; \
    apt-get -y install g++; \
    apt-get -y install make; \
    apt-get -y install cmake; \
    apt-get -y install libgtest-dev; \
    mkdir -p /usr/src/

WORKDIR /usr/src/

COPY ./src /usr/src/
COPY ./src/docker_valgrind/start.sh /usr/src

USER root

ENTRYPOINT ["/bin/bash", "start.sh"]

