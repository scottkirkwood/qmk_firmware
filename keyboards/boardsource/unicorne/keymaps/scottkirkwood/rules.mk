# RGBLIGHT_ENABLE     = yes
RGB_MATRIX_ENABLE  = yes
COMBO_ENABLE = yes
SPLIT_KEYBOARD = yes

# Enabling link-time optimization saves about 3 kilobytes.
# https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/
EXTRAFLAGS += -flto

#SRC += oneshot.c
