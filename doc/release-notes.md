# 01coin version 0.12.3.6

Release is now available from:

  <https://github.com/zocteam/zeroonecoin/releases>

This is a mandatory upgrade release.

Please report bugs using the issue tracker at github:

  <https://github.com/zocteam/zeroonecoin/issues>


## Upgrading and downgrading

### How to Upgrade

If you are running an older version, shut it down. Wait until it has completely shut down (which might take a few minutes for older versions), then copy over zeroone-qt.exe (on Windows) or /Applications/ZeroOne-Qt (on Mac) or zeroone/zeroone-qt (on Linux).

### Downgrade warning

Downgrade to a version < 0.12.3.6

Because release 0.12.3.6 is a mandatory upgrade release, downgrading to an earlier version is not supported.


## Notable changes

- Node sw supports only protocol 70211
- ZOC SLIP44 CoinType 399, HD(m/44'/399'/0'/0/0)
- Sharky-miner-blocks are burnt, block reward not shared w/MN and w/no tx processed will become unmatured/unpsent/burned
- Several cleanups and optimizations to speedup and unfreeze mnsync asset stages
- All users, exchanges, masternode owners and miners should upgrade as soon as possible


### 0.12.3.6 Change log

See detailed [set of changes](https://github.com/zocteam/zeroonecoin/compare/v0.12.3.5...zocteam:v0.12.3.6).


## Credits

Thanks to everyone who directly contributed to this release, as well as everyone who submitted issues and reviewed pull requests. Particular thanks for this release is owed to camenlx for spearheading this release.
