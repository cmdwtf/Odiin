# Odiin

> An attempt at emulating NFC 14443-A devices on the Nordic Semiconductors nRF52840 SoC platform.

## Description

Odiin is a learning project as I explore the nRF52840 platform, as well as the nRF5 SDK as a whole. It's goal is to attempt to emulate different types of common NFC-A tags, to be a bit of a swiss army knife in that sense. I'm starting with the NTAG21X tags, as I actually have a few of them on hand, and it's easy to verify the behavior between actual tags and the emulated one. I'm using the fantastic [NFC Tools](https://apps.apple.com/us/app/nfc-tools/id1252962749) from [wak dev](https://www.wakdev.com/), as it's been able to give my device all sorts of workouts -- including some packets that I'm still not quite sure what to do with! It also displays a good amount of raw data when it does read, so I'm able to diagnose what I'm doing right and wrong. wak dev, if you're reading this, a full communication log, bit by bit would be a fantastic addon that I'd happily buy pro (again) for!

The order in which I'm adding features is going to be mostly random depending on what I feel like working on. Feel free to open an issue if you've got an idea, question or comment!

## Key Features

|Feature|Status|Notes|
|:-|:-:|:-|
|NFC Forum Type 2 Tag Emulation|*Partial*|Implementing a happy path as I go. Lots of functions left to handle.|
|NTag21X Emulation|*Partial*|As above, just working on "making it work" first.|
|USB Mass Storage Emulation|✔|Connect via USB, and edit files on the SD Card!|
|Tag File loading/saving|❌ (Planned)|Soon™!|
|NDEF Payload Format|❌ (Planned)|Less Soon™!|
|NFC Forum Type 1/3/4/5 Tag Emulation|🎄|*Maybe!*|
|Bootloader for easy USB Firmware Updates|✔*|See note below.

🎄 *Magic Christmas Land Wishlist* - I hope to take a look at them one day, if it's possible with the hardware.
\* Bootloader isn't in the repo yet, but it's based on a slightly modified [adafruit/Adafruit_nRF52_Bootloader](https://github.com/adafruit/Adafruit_nRF52_Bootloader). Currently, the NFCT hardware [isn't working](https://github.com/adafruit/Adafruit_nRF52_Bootloader/issues/150) when booting through the bootloader, so I'm skipping it for now until I figure that bug out. Once I do, it'll be uploaded as well, as either part of this project or a separate project.


## Current Hardware

Currently Odiin is being developed on a [nRF52840 M.2 Developer Kit](https://store.makerdiary.com/products/nrf52840-m2-developer-kit) by makerdiary. Their hardware has so far been wonderful and a great way to dive into the nRF52 family of System on a Chips.

Debugging and logging: I'm just using a [USB to TTL](https://amzn.to/2OSYcJb) (affiliate link) cable for now, so I can maintain the connection through device reboots. This is really entirely optional, and any 3.3v TTL adapter would work.

Display: I'm using a 320x240 pixel LCD, driven by an ILI9341. Particularly, I'm using this [HiLetgo 2.2" Display](https://www.amazon.com/gp/product/B01CZL6QIQ/ref=as_li_tl?ie=UTF8&tag=cmd0ed-20&camp=1789&creative=9325&linkCode=as2&creativeASIN=B01CZL6QIQ&linkId=e4fa58ed89551ceb71b44a4eca0320d2) (affiliate link). I'm planning to have the display code abstracted enough that I should be able to swap in different display drivers should I decide to support different ones in the future.

Input: I picked up a small [5-way tactile switch breakout](https://amzn.to/3hy9GxS) (affiliate link) that has a very 'joystick style' feel to it. The breakout I got has two extra buttons that I'm trying not to use at the moment, because the breakout is a little large for what I want.I may end up designing my own PCB for the switch, because I want it to fit nicely with whatever hardware I end up using and fitting into a case. The switches themselves seem to be produced by a number of manufacturers, and are available at all my favorite components distributors (💖DigiKey).

## Build Environment

A vast majority of the code in this repository is designed to be cross compiled from any platform. This section will discuss some of the tools you'll need on your path. With the exception of perhaps Python depending on how you install it, you'll need to add all these tools to your path manually, or use full paths.

 I'm currently targeting an ARM device, and making use of the [GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads) 9-2020-Q2 on Windows. Look in `BuildSettings.mk`, and set your paths in there accordingly. If you're using VS Code, you may want to update the path to your install in `.vscode/c_cpp_properties.json` as well, as it's used for the C++ plugin to generate error squigglies. You may very well have luck building with other tools or on other platforms, but at this point in the project life-cycle, that's an exercise left to the reader.

I'm using Visual Studio Code as my primary editor, and have provided a .vscode folder with tasks I'm performing often to build/flash/etc. There's also a `.code-workspace` file, though that's just more for continence than anything.

The vscode tasks (and building in general) use the GNU `make` to run. You'll need `make` on your path (I'm using the latest from [chocolatey](https://chocolatey.org/packages/make)). As well, you'll need the [nRF5x-Command-Line-Tools for Win32](https://www.nordicsemi.com/Software-and-Tools/Development-Tools/nRF-Command-Line-Tools/Download#infotabs).

You'll need `python` 3, and a few tools to finish building and flash. Where you install Python from is not important as long as it's on your path (and probably your Scripts directory, too.) In either user space or in a venv, you'll want to `pip install` at least `pyocd`, `intelhex`, and maybe `adafruit-nrfutil` if you're tinkering with the bootloader.

##### Make sure to `git submodule update --init --recursive` after checking out this repo, or using `--recurse-submodules` when you clone!

## Contributing

Contributions are absolutely welcome. In this early state, the project is majorly in flux. Things are mostly added ad-hoc and without planning right now, as this has been mostly a learning exercise as much as it has been to share.

That said, everyone is more than welcome to report issues, make suggestions, or if it fancies you to fork and make a PR, go for it! Even if it's just for a typo. If you're looking for discussions to start: I'm very open to look at project organization

## Acknowledgments & Licenses

If you'd like license this project or a part of it's code for a specific purpose or under specific terms, please get in touch and let's see what we can work out!

### Third-Party Licensed Software

- [M.2 DevKit SDK](https://github.com/makerdiary/nrf52840-m2-devkit): MIT © 2020 makerdiary
- [nRF5 SDK](https://developer.nordicsemi.com/): 5-Clause Nordic © 2010-2017 Nordic Semiconductor ASA
- [littlefs](https://github.com/ARMmbed/littlefs): BSD-3-Clause License © 2017 ARM Limited
- [FatFs](http://elm-chan.org/fsw/ff/00index_e.html): Custom-1-Clause License © 20xx ChaN (See LICENSE.txt in vendor/fatfs for details)
- [ILI9341 Colors](https://github.com/adafruit/Adafruit_ILI9341): MIT © ? Limor Fried/Ladyada for Adafruit Industries.
- [lvgl](https://github.com/lvgl/lvgl): MIT © 2020 LVGL LLC

*If you've noticed I'm using a piece of code that isn't mentioned here, please make a PR to add it. I want everyone to get the credit they deserve!*

#### Icons/Images
- [Material Icons](https://material.io/): Apache 2.0 © ? Google

#### Fonts

- [Font Awesome](https://github.com/FortAwesome/Font-Awesome): SIL OFL 1.1 / CC BY 4.0
- [Metropolis](https://github.com/chrismsimpson/Metropolis): Unlicense, by Chris Simpson
