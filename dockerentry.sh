#!/bin/sh

if [ ! -d "autom4te.cache" ]; then
  echo "making a clean build"
  ./autogen.sh
  ./configure
else
  echo "to make a clean build delete autom4te.cache"
fi
sleep 10


while :
do
  make
  echo "build complete, will start now"
  src/zerooned -printtoconsole &
  echo "starting to watch for changes"
  inotifywait -e modify -e move -e create -e delete src -r > /dev/null 2>&1
  kill $(pidof zerooned) > /dev/null 2>&1
  echo "detected change, will rebuild now" 
done