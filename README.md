![ZeroOne](doc/splash.png)

01coin Community v0.13.0
==================================

[Bitcointalk ANN thread](https://bitcointalk.org/index.php?topic=3457534.0)

[Discord Community](https://discord.gg/ad6MFkU)

What is the 01coin Community?
----------------

01coin is an innovative, cryptographically-secured digital asset ledger based on blockchain technology. Developed in part from the core code behind Dash, 01coin includes many innovative enhancements. 01coin aims to become the most community-centric project in all of crypto. Born out of its own ashes when the original development team mysteriously disappeared one month after the coin launched, it is now completely managed and operated by the community. This includes a large and dedicated team of community moderators always ready and willing to help new users. It also includes a strong principle of community governance: no decision will be made unilaterally by a single individual or by an oligarchy of the few. Every step forward for 01coin will be determined by community votes and masternode governance. As such, we don’t know yet exactly what 01coin will look like a year from now, but we do know it will look exactly like the coin you want it to be.



License
-------

The 01coin core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is meant to be stable. Development is normally done in separate branches.
[Tags](https://github.com/zocteam/zeroonecoin/tags) are created to indicate new official,
stable release versions of the 01coin core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](src/test/README.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/qa) of the RPC interface, written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/qa) are installed) with: `qa/pull-tester/rpc-tests.py`

The Travis CI system makes sure that every pull request is built for Windows, Linux, and OS X, and that unit/sanity tests are run automatically.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.
