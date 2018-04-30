#######################################################################
#                                                                     #
#    This is a development container, not meant for production use    #
#                                                                     #
#######################################################################

FROM ubuntu:14.04

RUN apt-get update
RUN apt install -y software-properties-common
RUN add-apt-repository ppa:bitcoin/bitcoin
RUN apt-get update
RUN apt-get upgrade -y
RUN apt install -y git build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-program-options-dev libboost-test-dev libboost-thread-dev libdb4.8-dev libdb4.8++-dev fileschanged inotify-tools

COPY dockerentry.sh /
RUN chmod +x /dockerentry.sh
RUN mkdir /source
WORKDIR /source

EXPOSE 10000
CMD bash /dockerentry.sh 