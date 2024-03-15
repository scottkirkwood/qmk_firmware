SERIAL_DRIVER = vendor
AUDIO_DRIVER = pwm_hardware
POINTING_DEVICE_DRIVER = analog_joystick

BOOTMAGIC_ENABLE = yes
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality

# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
RGB_MATRIX_ENABLE = yes
COMBO_ENABLE = yes
SPLIT_KEYBOARD = yes
MOUSEKEY_ENABLE = yes       # Mouse keys
CAPS_WORD_ENABLE = yes      # CAPITALISE_WORD

# Need to turn off the pointing device, move keeps moving
POINTING_DEVICE_ENABLE = no

EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = yes      # Breathing sleep LED during USB suspend
RGBLIGHT_ENABLE = no       # Enable keyboard RGB underglow

VIA_ENABLE = yes
VIAL_ENABLE = yes
# Enabling link-time optimization saves about 3 kilobytes.
# https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/
EXTRAFLAGS += -flto

#SRC += oneshot.
