# Power Overwhelmiing

> An attempt at emulating NFC 14443-A devices on the Nordic Semiconductors nRF52840 SoC platform.

## Description

PowerOverwhelmiing is a learning project as I explore the nRF52840 platform, as well as the nRF5 SDK as a whole. It's goal is to attempt to emulate different types of common NFC-A tags, to be a bit of a swiss army knife in that sense. I'm starting with the NTAG21X tags, as I actually have a few of them on hand, and it's easy to verify the behavior between actual tags and the emulated one. I'm using the fantastic [NFC Tools](https://apps.apple.com/us/app/nfc-tools/id1252962749) from [wak dev](https://www.wakdev.com/), as it's been able to give my device all sorts of workouts -- including some packets that I'm still not quite sure what to do with! It also displays a good amount of raw data when it does read, so I'm able to diagnose what I'm doing right and wrong. wak dev, if you're reading this, a full communication log, bit by bit would be a fantastic addon that I'd happily buy pro (again) for!

The order in which I'm adding features is going to be mostly random depending on what I feel like working on. Feel free to open an issue if you've got an idea, question or comment!

## Key Features

|Feature|Status|
|:-|:-:|
|NFC Fourm Type 2 Tag Emulation|*Partial*|
|NTag21X Emulation|*Partial*|
|Tag File loading/saving|❌ (Planned)|
|NDEF Payload Format|❌ (Planned)|
|NFC Fourm Type 1/3/4/5 Tag Emulation|🎄|
|Bootloader for easy USB Firmware Updates|✔*|

🎄 *Magic Christmas Land Wishlist* - I hope to take a look at them one day, if it's possible with the hardware.  
\* Bootloader isn't in the repo yet, but it's based on a slightly modified [adafruit/Adafruit_nRF52_Bootloader](https://github.com/adafruit/Adafruit_nRF52_Bootloader)


## Current Hardware

Currently POmiing is being developed on a [nRF52840 M.2 Developer Kit](https://store.makerdiary.com/products/nrf52840-m2-developer-kit) by makerdiary. Their hardware has so far been wonderful and a great way to dive into the nRF52 family of System on a Chips.

For debugging and logging, I'm just using a [USB to TTL](https://www.sparkfun.com/products/12977) device for now, so I can maintain the connection through device reboots.

## Build Environment

A vast majority of the code in this repository is designed to be cross compiled from any platform. This section will discuss some of the tools you'll need on your path. With the exception of perhaps Python depending on how you install it, you'll need to add all these tools to your path manually, or use full paths.

 I'm currently targeting an ARM device, and making use of the [GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads) 9-2020-Q2 on Windows. Look in `BuildSettings.mk`, and set your paths in there accordingly. If you're using VS Code, you may want to update the path to your install in `.vscode/c_cpp_properties.json` as well, as it's used for the C++ plugin to generate error squigglies. You may very well have luck building with other tools or on other platforms, but at this point in the project life-cycle, that's an exercise left to the reader.

I'm using Visual Studio Code as my primary editor, and have provided a .vscode folder with tasks I'm performing often to build/flash/etc. Those tasks use the GNU `make` to run. You'll need `make` on your path (I'm using the latest from [chocolatey](https://chocolatey.org/packages/make)), as well as the [nRF5x-Command-Line-Tools for Win32](https://www.nordicsemi.com/Software-and-Tools/Development-Tools/nRF-Command-Line-Tools/Download#infotabs).

You'll need `python` 3, and a few tools to finish building and flash. Where you install Python from is not important as long as it's on your path (and probably your Scripts directory, too.) In either user space or in a venv, you'll want to `pip install` at least `pyocd`, `intelhex`, and maybe `adafruit-nrfutil` if you're tinkering with the bootloader.

###### Make sure to `git submodule update --init` after checking out this repo!

## Contributing

Contributions are absolutely welcome. In this early state, the project is majorly in flux. Things are mostly added ad-hoc and without planning right now, as this has been mostly a learning exercise as much as it has been to share.

That said, everyone is more than welcome to report issues, make suggestions, or if it fancies you to fork and make a PR, go for it! Even if it's just for a typo.

## Acknowledgments & License

Individual files (especially in the nRF5 SDK that I've turned into a sub-module) are often directly licensed in their own files.

Several bits in this project are directly from the [makerdiary M.2 Developer Kit SDK](https://github.com/makerdiary/nrf52840-m2-devkit), which was licensed under the MIT license. See the LICENSE file in it's folder.

If you'd like license this project or a part of it's code for a specific purpose or under specific terms, please get in touch!
