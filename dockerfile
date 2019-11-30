FROM ubuntu

COPY hello.c /hello/hello.c
RUN apt-get update && apt-get -y install gcc
RUN gcc /hello/hello.c -o /hello/hello
ENTRYPOINT [ "/hello/hello" ]