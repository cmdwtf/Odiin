# Odiin

> An attempt at emulating NFC 14443-A devices on the Nordic Semiconductors nRF52840 SoC platform.

## Description

Odiin is a learning project as I explore the nRF52840 platform, as well as the nRF5 SDK as a whole. It's goal is to attempt to emulate different types of common NFC-A tags, to be a bit of a swiss army knife in that sense. I'm starting with the NTAG21X tags, as I actually have a few of them on hand, and it's easy to verify the behavior between actual tags and the emulated one. I'm using the fantastic [NFC Tools](https://apps.apple.com/us/app/nfc-tools/id1252962749) from [wak dev](https://www.wakdev.com/), as it's been able to give my device all sorts of workouts -- including some packets that I'm still not quite sure what to do with! It also displays a good amount of raw data when it does read, so I'm able to diagnose what I'm doing right and wrong. wak dev, if you're reading this, a full communication log, bit by bit would be a fantastic addon that I'd happily buy pro (again) for!

The order in which I'm adding features is going to be mostly random depending on what I feel like working on. Feel free to open an issue if you've got an idea, question or comment! Also, some of the links below are affiliate links. That means if you click through them and end up buying something, I make a few pennies and it doesn't cost you anything!

## Key Features

|Feature|Status|Notes|
|:-|:-:|:-|
|NFC Forum Type 2 Tag Emulation|✔*Partial*|Implementing a happy path as I go. Lots of functions left to handle.|
|NTag21X Emulation|✔*Partial*|As above, just working on "making it work" first.|
|USB Mass Storage Emulation|✔|Connect via USB, and edit files on the SD Card!|
|Tag File loading/saving|✔*Partial*\*|~~Soon™!~~ See note below.|
|NDEF Payload Format|❌ (Planned)|Less Soon™!|
|NFC Forum Type 1/3/4/5 Tag Emulation|🎄|*Maybe!*|
|Bootloader for easy USB Firmware Updates|✔|UF2 Style Bootloader|

🎄 *Magic Christmas Land Wishlist* - I hope to take a look at them one day, if it's possible with the hardware.
\* Right now it just loads up tags of a specific size. There will be issues if the file isn't the expected size, or the expected format. It's on the list to handle this a little better, there's just a few laundry list items that are above it.

## What's it look like in action?

Okay, this project is still in the very early stages, but if you want to get a quick look of it working, check out this [video I put on YouTube](https://youtu.be/bRNZewXajJM)!

[![Sometimes it takes a little lightning to make magic.](http://img.youtube.com/vi/bRNZewXajJM/0.jpg)](http://www.youtube.com/watch?v=bRNZewXajJM "Odiin in very rough action!")

## Current Hardware

Currently Odiin is being developed on a [Pitaya Go](https://makerdiary.com/products/pitaya-go) by makerdiary. It's a nRF52840 based IoT development board that has an incredible amount of bells and whistles packed into a stick that's just a bit larger than a stick of gum.

To flash, I'm using a makerdiary's [Pitaya-Link](https://makerdiary.com/products/pitaya-link). It's a CMSIS-DAP/DAPLink based flash/debug probe, and is pretty wonderful given the feature set and price point. Ideally I won't need to keep using it as I finish fleshing out the bootloader, but it's definitely needed while I'm debugging.

Debugging and logging: I'm still ocasionally using a [USB to TTL](https://amzn.to/2OSYcJb) cable for now, so I can maintain the connection through device reboots. This is really entirely optional, and any 3.3v TTL adapter would work. As well, as I'm using the Pitaya-Link, I'm able to use the VCP it presents as well. Though, it doesn't seem to like higher baud rates for now.

Display: I'm using a 320x240 pixel LCD, driven by an ILI9341. Particularly, I'm using this [HiLetgo 2.2" Display](https://amzn.to/343kaSs). The display code is decently abstracted (not perfect, mind you), that I should be able to swap in another display or driver and get going with only a little effort. It also provides an SD card slot for storage!

Storage: Since the display has an SD Card slot, I'm using [these Kootion Micro SDHC Cards](https://amzn.to/3iMW0Qm) and [these low profile adapters](https://amzn.to/3kR3EuU) to slot them in. I'd like a lower profile adapter, or something I could more permanently affix to it, but these will do.

I/O: My input is all going to be mounted on the Biifröst Bridge PCB. I'm currently using the E-Switch JS1400 as a 5-way navigation switch (Digi-Key EG5857-ND), and a pair of E-Switch TL9100 (Digi-Key EG5501CT-ND). I've also got a spot for an ARGB LED (APA102) on the board (Digi-Key 1528-1436-ND). If you're building this yourself, you can probably get away just fine with one of the breakout switches I talk about in the older hardware section below!

### Biifröst Bridge

The Biifröst is my current solution to binding the dev kit to the screen and input. Ideally I'll design a real PCB incorporating more of the base elements, but for the time being it was a cheap and effective way to create something that should fit compactly into a case.

The PCB design is incorporated into this project as a submodule in the `hardware` folder, or you can take a look at it's repository here: [BiiFrost](https://github.com/nitz/Biifrost).

## Previous Hardware

Previously Odiin was being developed on a [nRF52840 M.2 Developer Kit](https://store.makerdiary.com/products/nrf52840-m2-developer-kit) by makerdiary. Their hardware has been wonderful was and a great way to dive into the nRF52 family of System on a Chips.

Many of the bits above in 'Current Hardware' were relevant to the development on the M.2 kit, as I was adding them ad-hoc as I was developing. One thing of note was the input switches I was using was this small [5-way tactile switch breakout](https://amzn.to/3hy9GxS) that has a very 'joystick style' feel to it. The breakout was a bit larger than I wanted to use with my goal of fitting Odiin into a case of sorts, so I ended up dropping it when I designed the Biifröst Bridge PCB.

## Build Environment

A vast majority of the code in this repository is designed to be cross compiled from any platform. This section will discuss some of the tools you'll need on your path. With the exception of perhaps Python depending on how you install it, you'll need to add all these tools to your path manually, or use full paths.

 I'm currently targeting an ARM device, and making use of the [GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads) 9-2020-Q2 on Windows. Look in `BuildSettings.mk`, and set your paths in there accordingly. Currently, the bootloader requires that the toolchain is on your path, so you'll need it there or will have to edit the bootloader makefile to account for it. If you're using VS Code, you may want to update the path to your install in `.vscode/c_cpp_properties.json` as well, as it's used for the C++ plugin to generate error squiggles. You may very well have luck building with other tools or on other platforms, but at this point in the project life-cycle, that's an exercise left to the reader.

I'm using Visual Studio Code as my primary editor, and have provided a .vscode folder with tasks I'm performing often to build/flash/etc. There's also a `.code-workspace` file, though that's just more for continence than anything.

The vscode tasks (and building in general) use the GNU `make` to run. You'll need `make` on your path (I'm using the latest from [chocolatey](https://chocolatey.org/packages/make)). As well, you'll need the [nRF5x-Command-Line-Tools for Win32](https://www.nordicsemi.com/Software-and-Tools/Development-Tools/nRF-Command-Line-Tools/Download#infotabs).

You'll need `python` 3, and a few tools to finish building and flash. Where you install Python from is not important as long as it's on your path (and probably your Scripts directory, too.) In either user space or in a venv, you'll want to `pip install` at least `pyocd`, `intelhex`, and `adafruit-nrfutil` for building the bootloader.

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
- [lvgl](https://github.com/lvgl/lvgl): MIT © 2020 LVGL LLC
- [TinyFSM](https://github.com/digint/tinyfsm): MIT © 2012-2018 Axel Burri
- [libcwalk](https://github.com/likle/cwalk): MIT © 2020 Leonard Iklé

*If you've noticed I'm using a piece of code that isn't mentioned here, please make a PR/issue to add it. I want everyone to get the credit they deserve!*

#### Icons/Images
- [Material Icons](https://material.io/): Apache 2.0 © ? Google

#### Fonts

- [Font Awesome](https://github.com/FortAwesome/Font-Awesome): SIL OFL 1.1 / CC BY 4.0
- [Metropolis](https://github.com/chrismsimpson/Metropolis): Unlicense, by Chris Simpson
