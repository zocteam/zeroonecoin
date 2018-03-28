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

RUN mkdir ~/.zeroonecore
RUN echo "addnode=128.199.62.128\naddnode=159.65.24.219\naddnode=188.166.91.38\naddnode=174.138.10.244\naddnode=128.199.62.128\naddnode=103.69.195.185:58848\naddnode=13.56.174.183:10000\naddnode=13.59.197.120:10000\naddnode=144.202.17.171:10000\naddnode=174.138.10.244:10000\naddnode=185.224.249.58:45325\naddnode=213.183.51.7:10000\naddnode=45.32.6.178:34558\naddnode=62.77.153.115:10000" > ~/.zeroonecore/zeroone.conf

COPY dockerentry.sh /
RUN chmod +x /dockerentry.sh
RUN mkdir /source
WORKDIR /source

EXPOSE 10000
CMD bash /dockerentry.sh 