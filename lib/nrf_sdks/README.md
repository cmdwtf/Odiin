## Install the nRF5 SDK

Download the SDK file [nRF5_SDK_16.0.0_98a08e2](https://www.nordicsemi.com/Software-and-Tools/Software/nRF5-SDK/Download#infotabs) from [www.nordicsemi.com](https://www.nordicsemi.com). Note that the current version is `16.0.0`.

Extract the zip file to the `nrf_sdks` directory. This should give you the following folder structure:

``` sh
./nrf52840-m2-devkit/
├── LICENSE
├── README.md
├── boards
├── config
├── docs
├── examples
├── firmware
├── mkdocs.yml
├── nrf_sdks
│   ├── README.md
│   └── nRF5_SDK_16.0.0_98a08e2
└── tools
```

To use the nRF5 SDK you first need to set the toolchain path in `makefile.windows` or `makefile.posix` depending on platform you are using. That is, the `.posix` should be edited if your are working on either Linux or macOS. These files are located in:

``` sh
<nRF5 SDK>/components/toolchain/gcc
```

Open the file in a text editor ([Visual Studio Code](https://code.visualstudio.com/) is recommended), and make sure that the `GNU_INSTALL_ROOT` variable is pointing to your GNU Arm Embedded Toolchain install directory.

``` sh
GNU_INSTALL_ROOT ?= {your-toolchain-path}/gcc-arm-none-eabi-7-2018-q2-update/bin/
GNU_VERSION ?= 7.3.1
GNU_PREFIX ?= arm-none-eabi
```