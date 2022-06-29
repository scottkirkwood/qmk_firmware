#!/usr/bin/zsh
set -v
qmk compile -kb crkbd --keymap scottkirkwood
sudo dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash ~/qmk_firmware/crkbd_rev1_scottkirkwood.hex
sudo dfu-programmer atmega32u4 reset
