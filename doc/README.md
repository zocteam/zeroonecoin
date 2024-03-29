ZeroOne Core 0.12.3
=====================

This is the official reference wallet for ZeroOne digital currency and comprises the backbone of the ZeroOne peer-to-peer network. You can [download ZeroOne Core](https://github.com/zocteam/zeroonecoin/releases) or [build it yourself](#building) using the guides below.

Running
---------------------
The following are some helpful notes on how to run ZeroOne on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/zeroone-qt` (GUI) or
- `bin/zerooned` (headless)

### Windows

Unpack the files into a directory, and then run zeroone-qt.exe.

### OS X

Drag ZeroOne-Qt to your applications folder, and then run ZeroOne-Qt.

### Need Help?

* Ask for help on [ZeroOne Discord](https://discord.gg/PShrdBM)

Building
---------------------
The following are developer notes on how to build ZeroOne Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The ZeroOne Core repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- Source Code Documentation ***TODO***
- Translation Process ***n/a***
- Translation Strings Policy ***n/a***
- [Travis CI](travis-ci.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on [ZeroOne Discord](https://discord.gg/PShrdBM)

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
