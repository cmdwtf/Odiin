PROJECT				:= odiin
TARGETS				:= nrf52840_xxaa
FIRMWARE_DIRECTORY	:= _firmware
OUTPUT_DIRECTORY 	:= _build

VENDOR_ROOT ?= vendor
SOURCE_DIR := src

# Amount of RAM to dedicate to the heap.
# lvgl suggets at least 16K, and examples
# for nRF52 have shipped with 8K.
HEAP_SIZE_BYTES := 32768

$(OUTPUT_DIRECTORY)/nrf52840_xxaa.out: \
  LINKER_SCRIPT  := $(SOURCE_DIR)/link/nrf52.ld

########################################################
## Application Files
########################################################

SRC_FILES += \
  $(wildcard $(SOURCE_DIR)/*.c*) \
  $(wildcard $(SOURCE_DIR)/app/*.c*) \
  $(wildcard $(SOURCE_DIR)/display/*.c*) \
  $(wildcard $(SOURCE_DIR)/display/fonts/*.c*) \
  $(wildcard $(SOURCE_DIR)/display/screen_ui/*.c*) \
  $(wildcard $(SOURCE_DIR)/files/*.c*) \
  $(wildcard $(SOURCE_DIR)/global/*.c*) \
  $(wildcard $(SOURCE_DIR)/input/*.c*) \
  $(wildcard $(SOURCE_DIR)/nfc_tag_emulation/*.c*) \
  $(wildcard $(SOURCE_DIR)/nfc_tag_emulation/nfrx_extensions/*.c*) \
  $(wildcard $(SOURCE_DIR)/platform/*.c*) \
  $(wildcard $(SOURCE_DIR)/tests/*.c*) \
  $(wildcard $(SOURCE_DIR)/usb/*.c*) \

INC_FOLDERS += \
  $(SOURCE_DIR) \
  $(SOURCE_DIR)/config \

########################################################
## Vendor: nRF5 SDK & Board SDK Files
########################################################

SDK_ROOT := $(VENDOR_ROOT)/nRF5_SDK
BOARD_SDK_ROOT ?= $(VENDOR_ROOT)/board

SRC_FILES += \
  $(SDK_ROOT)/components/boards/boards.c \
  $(SDK_ROOT)/components/drivers_nrf/nrf_soc_nosd/nrf_nvic.c \
  $(SDK_ROOT)/components/drivers_nrf/nrf_soc_nosd/nrf_soc.c \
  $(SDK_ROOT)/components/libraries/atomic/nrf_atomic.c \
  $(SDK_ROOT)/components/libraries/atomic/nrf_atomic.c \
  $(SDK_ROOT)/components/libraries/atomic_fifo/nrf_atfifo.c \
  $(SDK_ROOT)/components/libraries/balloc/nrf_balloc.c \
  $(SDK_ROOT)/components/libraries/block_dev/empty/nrf_block_dev_empty.c \
  $(SDK_ROOT)/components/libraries/block_dev/qspi/nrf_block_dev_qspi.c \
  $(SDK_ROOT)/components/libraries/block_dev/qspi/nrf_serial_flash_params.c \
  $(SDK_ROOT)/components/libraries/block_dev/ram/nrf_block_dev_ram.c \
  $(SDK_ROOT)/components/libraries/block_dev/sdc/nrf_block_dev_sdc.c \
  $(SDK_ROOT)/components/libraries/bsp/bsp.c \
  $(SDK_ROOT)/components/libraries/button/app_button.c \
  $(SDK_ROOT)/components/libraries/fifo/app_fifo.c \
  $(SDK_ROOT)/components/libraries/gfx/nrf_gfx.c \
  $(SDK_ROOT)/components/libraries/hardfault/hardfault_implementation.c \
  $(SDK_ROOT)/components/libraries/hardfault/nrf52/handler/hardfault_handler_gcc.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_rtt.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_serial.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_uart.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_default_backends.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_frontend.c \
  $(SDK_ROOT)/components/libraries/log/src/nrf_log_str_formatter.c \
  $(SDK_ROOT)/components/libraries/memobj/nrf_memobj.c \
  $(SDK_ROOT)/components/libraries/ringbuf/nrf_ringbuf.c \
  $(SDK_ROOT)/components/libraries/scheduler/app_scheduler.c \
  $(SDK_ROOT)/components/libraries/sdcard/app_sdcard.c \
  $(SDK_ROOT)/components/libraries/sortlist/nrf_sortlist.c \
  $(SDK_ROOT)/components/libraries/strerror/nrf_strerror.c \
  $(SDK_ROOT)/components/libraries/timer/app_timer.c \
  $(SDK_ROOT)/components/libraries/uart/app_uart_fifo.c \
  $(SDK_ROOT)/components/libraries/usbd/app_usbd.c \
  $(SDK_ROOT)/components/libraries/usbd/app_usbd_core.c \
  $(SDK_ROOT)/components/libraries/usbd/app_usbd_string_desc.c \
  $(SDK_ROOT)/components/libraries/usbd/class/msc/app_usbd_msc.c \
  $(SDK_ROOT)/components/libraries/util/app_error.c \
  $(SDK_ROOT)/components/libraries/util/app_error_weak.c \
  $(SDK_ROOT)/components/libraries/util/app_util_platform.c \
  $(SDK_ROOT)/components/libraries/util/nrf_assert.c \
  $(SDK_ROOT)/components/nfc/ndef/generic/message/nfc_ndef_msg.c \
  $(SDK_ROOT)/components/nfc/ndef/generic/record/nfc_ndef_record.c \
  $(SDK_ROOT)/components/nfc/ndef/uri/nfc_uri_msg.c \
  $(SDK_ROOT)/components/nfc/ndef/uri/nfc_uri_rec.c \
  $(SDK_ROOT)/components/nfc/platform/nfc_platform.c \
  $(SDK_ROOT)/external/fprintf/nrf_fprintf.c \
  $(SDK_ROOT)/external/fprintf/nrf_fprintf_format.c \
  $(SDK_ROOT)/external/utf_converter/utf.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_clock.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_power.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_spi.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_uart.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_clock.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_gpiote.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_nfct.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_power.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_qspi.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_spi.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_spim.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_systick.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_timer.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_uart.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_uarte.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_usbd.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/prs/nrfx_prs.c \
  $(SDK_ROOT)/modules/nrfx/mdk/gcc_startup_nrf52840.S \
  $(SDK_ROOT)/modules/nrfx/mdk/system_nrf52840.c \
  $(SDK_ROOT)/modules/nrfx/soc/nrfx_atomic.c \
  $(SDK_ROOT)/modules/nrfx/soc/nrfx_atomic.c \

INC_FOLDERS += \
  $(BOARD_SDK_ROOT)/config \
  $(SDK_ROOT)/components/boards \
  $(SDK_ROOT)/components/drivers_nrf/nrf_soc_nosd \
  $(SDK_ROOT)/components/libraries/atomic \
  $(SDK_ROOT)/components/libraries/atomic_fifo \
  $(SDK_ROOT)/components/libraries/balloc \
  $(SDK_ROOT)/components/libraries/block_dev \
  $(SDK_ROOT)/components/libraries/block_dev/empty \
  $(SDK_ROOT)/components/libraries/block_dev/qspi \
  $(SDK_ROOT)/components/libraries/block_dev/ram \
  $(SDK_ROOT)/components/libraries/block_dev/sdc \
  $(SDK_ROOT)/components/libraries/bsp \
  $(SDK_ROOT)/components/libraries/button \
  $(SDK_ROOT)/components/libraries/delay \
  $(SDK_ROOT)/components/libraries/experimental_section_vars \
  $(SDK_ROOT)/components/libraries/fifo \
  $(SDK_ROOT)/components/libraries/fifo \
  $(SDK_ROOT)/components/libraries/gfx \
  $(SDK_ROOT)/components/libraries/hardfault \
  $(SDK_ROOT)/components/libraries/hardfault/nrf52 \
  $(SDK_ROOT)/components/libraries/log \
  $(SDK_ROOT)/components/libraries/log/src \
  $(SDK_ROOT)/components/libraries/memobj \
  $(SDK_ROOT)/components/libraries/mutex \
  $(SDK_ROOT)/components/libraries/ringbuf \
  $(SDK_ROOT)/components/libraries/sdcard \
  $(SDK_ROOT)/components/libraries/sortlist \
  $(SDK_ROOT)/components/libraries/strerror \
  $(SDK_ROOT)/components/libraries/timer \
  $(SDK_ROOT)/components/libraries/uart \
  $(SDK_ROOT)/components/libraries/usbd \
  $(SDK_ROOT)/components/libraries/usbd/class/msc \
  $(SDK_ROOT)/components/libraries/util \
  $(SDK_ROOT)/components/nfc/ndef/generic/message \
  $(SDK_ROOT)/components/nfc/ndef/generic/record \
  $(SDK_ROOT)/components/nfc/ndef/uri \
  $(SDK_ROOT)/components/nfc/platform \
  $(SDK_ROOT)/components/nfc/t2t_lib \
  $(SDK_ROOT)/components/toolchain/cmsis/include \
  $(SDK_ROOT)/external/fprintf \
  $(SDK_ROOT)/external/protothreads \
  $(SDK_ROOT)/external/protothreads/pt-1.4 \
  $(SDK_ROOT)/external/thedotfactory_fonts \
  $(SDK_ROOT)/external/utf_converter \
  $(SDK_ROOT)/integration/nrfx \
  $(SDK_ROOT)/integration/nrfx/legacy \
  $(SDK_ROOT)/modules/nrfx \
  $(SDK_ROOT)/modules/nrfx/drivers/include \
  $(SDK_ROOT)/modules/nrfx/hal \
  $(SDK_ROOT)/modules/nrfx/mdk \

########################################################
## Vendor: lvgl
########################################################

LVGL_BASE_DIR := $(VENDOR_ROOT)/lvgl
LVGL_DIR := $(LVGL_BASE_DIR)/lvgl
LVGL_SRC_DIR := $(LVGL_DIR)/src

SRC_FILES += \
  $(wildcard $(LVGL_SRC_DIR)/*.c) \
  $(wildcard $(LVGL_SRC_DIR)/lv_core/*.c) \
  $(wildcard $(LVGL_SRC_DIR)/lv_draw/*.c) \
  $(wildcard $(LVGL_SRC_DIR)/lv_font/*.c) \
  $(wildcard $(LVGL_SRC_DIR)/lv_gpu/*.c) \
  $(wildcard $(LVGL_SRC_DIR)/lv_hal/*.c) \
  $(wildcard $(LVGL_SRC_DIR)/lv_misc/*.c) \
  $(wildcard $(LVGL_SRC_DIR)/lv_themes/*.c) \
  $(wildcard $(LVGL_SRC_DIR)/lv_widgets/*.c) \

INC_FOLDERS += \
   $(LVGL_BASE_DIR) \
   $(LVGL_DIR) \

########################################################
## Other Vendor Files
########################################################

SRC_FILES += \
  $(wildcard $(VENDOR_ROOT)/display/*.c) \
  $(wildcard $(VENDOR_ROOT)/fatfs/port/*.c) \
  $(wildcard $(VENDOR_ROOT)/fatfs/source/ff.c) \
  $(wildcard $(VENDOR_ROOT)/fatfs/source/ffunicode.c) \
  $(wildcard $(VENDOR_ROOT)/littlefs/*.c) \
  $(wildcard $(VENDOR_ROOT)/littlefs/bd/*.c) \

INC_FOLDERS += \
   $(VENDOR_ROOT)/cie1931 \
   $(VENDOR_ROOT)/display \
   $(VENDOR_ROOT)/fatfs/source \
   $(VENDOR_ROOT)/fatfs/port \
   $(VENDOR_ROOT)/littlefs \

########################################################
## Library Files
########################################################

# Libraries common to all targets
#LIB_FILES += \
#  $(SDK_ROOT)/components/nfc/t2t_lib/nfc_t2t_lib_gcc.a \


########################################################
## Compiler Flags
########################################################

# Debug flags
MAX_DEBUG_INFO = -g3
DEBUG_DEFINES = -DDEBUG -DDEBUG_NRF
#DEBUG_DEFINES =

# Optimization flags
OPT = -O3 $(MAX_DEBUG_INFO)
# Uncomment the line below to enable link time optimization
#OPT += -flto


# C flags common to all targets
CFLAGS += $(OPT)
CFLAGS += -DAPP_TIMER_V2
CFLAGS += -DAPP_TIMER_V2_RTC1_ENABLED
CFLAGS += -DBOARD_CUSTOM
CFLAGS += -DCONFIG_GPIO_AS_PINRESET
CFLAGS += $(DEBUG_DEFINES)
CFLAGS += -DFLOAT_ABI_HARD
CFLAGS += -DNRF52840_M2
CFLAGS += -DNRF52840_XXAA
CFLAGS += -mcpu=cortex-m4
CFLAGS += -mthumb -mabi=aapcs
CFLAGS += -Wall -Werror
CFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
# keep every function in a separate section, this allows linker to discard unused ones
CFLAGS += -ffunction-sections -fdata-sections -fno-strict-aliasing
CFLAGS += -fno-builtin -fshort-enums

# C++ flags common to all targets
CXXFLAGS += $(OPT)

# We are using C++, but no RTTI is needed (and doesn't work anyways!)
CXXFLAGS += -fno-rtti -std=c++17

# Assembler flags common to all targets
ASMFLAGS += $(MAX_DEBUG_INFO)
ASMFLAGS += -DAPP_TIMER_V2
ASMFLAGS += -DAPP_TIMER_V2_RTC1_ENABLED
ASMFLAGS += -DBOARD_CUSTOM
ASMFLAGS += -DCONFIG_GPIO_AS_PINRESET
ASMFLAGS += $(DEBUG_DEFINES)
ASMFLAGS += -DFLOAT_ABI_HARD
ASMFLAGS += -DNRF52840_M2
ASMFLAGS += -DNRF52840_XXAA
ASMFLAGS += -mcpu=cortex-m4
ASMFLAGS += -mthumb -mabi=aapcs
ASMFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16

# Linker flags
LDFLAGS += $(OPT)
LDFLAGS += -mthumb -mabi=aapcs -L$(SDK_ROOT)/modules/nrfx/mdk -T$(LINKER_SCRIPT)
LDFLAGS += -mcpu=cortex-m4
LDFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
# let linker dump unused sections
LDFLAGS += -Wl,--gc-sections
# use newlib in nano version
LDFLAGS += --specs=nano.specs

nrf52840_xxaa: CFLAGS += -D__HEAP_SIZE=$(HEAP_SIZE_BYTES)
nrf52840_xxaa: CFLAGS += -D__STACK_SIZE=$(HEAP_SIZE_BYTES)
nrf52840_xxaa: ASMFLAGS += -D__HEAP_SIZE=$(HEAP_SIZE_BYTES)
nrf52840_xxaa: ASMFLAGS += -D__STACK_SIZE=$(HEAP_SIZE_BYTES)

# Add standard libraries at the very end of the linker input, after all objects
# that may need symbols provided by these libraries.
LIB_FILES += -lc -lnosys -lm -lstdc++

.PHONY: default help

# Default target - first one defined
default: nrf52840_xxaa

# Print all targets that can be built
help:
	@echo following targets are available:
	@echo		nrf52840_xxaa
	@echo		sdk_config - starting external tool for editing sdk_config.h (requires java)
	@echo		flash      - flashing binary

include BuildSettings.mk

TEMPLATE_PATH := $(SDK_ROOT)/components/toolchain/gcc
include $(TEMPLATE_PATH)/Makefile.common

$(foreach target, $(TARGETS), $(call define_target, $(target)))

.PHONY: flash merge flash_mbr flash_all erase release

# Flash the program
flash: default
	@echo Flashing: $(OUTPUT_DIRECTORY)/nrf52840_xxaa.hex
	pyocd flash -t nrf52840 $(OUTPUT_DIRECTORY)/nrf52840_xxaa.hex

# Flash MBR
flash_mbr:
	@echo Flashing: mbr_nrf52_2.4.1_mbr.hex
	pyocd flash -t nrf52840 $(SDK_ROOT)/components/softdevice/mbr/hex/mbr_nrf52_2.4.1_mbr.hex

# Merge the MBR and application
merge: default
	@echo Merging: $(OUTPUT_DIRECTORY)/nrf52840_xxaa_mbr.hex
	mergehex -m $(SDK_ROOT)/components/softdevice/mbr/hex/mbr_nrf52_2.4.1_mbr.hex $(OUTPUT_DIRECTORY)/nrf52840_xxaa.hex -o $(OUTPUT_DIRECTORY)/nrf52840_xxaa_mbr.hex

# Flash MBR and application
flash_all: merge
	@echo Flashing: $(OUTPUT_DIRECTORY)/nrf52840_xxaa_mbr.hex
	pyocd flash -t nrf52840 $(OUTPUT_DIRECTORY)/nrf52840_xxaa_mbr.hex

# Erase the chip
erase:
	pyocd erase -t nrf52840 --chip

# Release the built firmware, copying it to the $(FIRMWARE_DIRECTORY)
release: merge
	@if not exist "$(FIRMWARE_DIRECTORY)" mkdir "$(FIRMWARE_DIRECTORY)"
	@echo Creating UF2 format file from produced hex...
	python $(BOARD_SDK_ROOT)/tools/uf2conv.py -c -f 0xada52840 -o $(FIRMWARE_DIRECTORY)/$(PROJECT).uf2 $(OUTPUT_DIRECTORY)/nrf52840_xxaa.hex
	@echo Copying: $(OUTPUT_DIRECTORY)/nrf52840_xxaa_mbr.hex to $(FIRMWARE_DIRECTORY) directory.
	copy /B /Y $(OUTPUT_DIRECTORY)\nrf52840_xxaa_mbr.hex $(FIRMWARE_DIRECTORY)\$(PROJECT)_mbr.hex
	@echo.
	@echo Use $(FIRMWARE_DIRECTORY)/$(PROJECT).uf2 to flash via UF2 like standard keeping the bootloader,
	@echo or $(FIRMWARE_DIRECTORY)/nrf52840_xxaa_mbr.hex to use basic bootloader (removes custom bootloader!)

SDK_CONFIG_FILE := $(PROJECT)/config/sdk_config.h
CMSIS_CONFIG_TOOL := $(SDK_ROOT)/external_tools/cmsisconfig/CMSIS_Configuration_Wizard.jar
sdk_config:
	java -jar $(CMSIS_CONFIG_TOOL) $(SDK_CONFIG_FILE)
