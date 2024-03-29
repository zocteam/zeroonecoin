
Debian
====================
This directory contains files used to package zerooned/zeroone-qt
for Debian-based Linux systems. If you compile zerooned/zeroone-qt yourself, there are some useful files here.

## zeroone: URI support ##


zeroone-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install zeroone-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your zeroone-qt binary to `/usr/bin`
and the `../../share/pixmaps/zeroone128.png` to `/usr/share/pixmaps`

zeroone-qt.protocol (KDE)

