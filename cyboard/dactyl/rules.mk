# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# Build Options
WS2812_DRIVER = vendor
SERIAL_DRIVER = vendor

# UNICODE_COMMON = yes                        # ONLY one unicode feature is supported
# UNICODE_ENABLE = yes
AUDIO_SUPPORTED = no                          # Audio is not supported
BACKLIGHT_ENABLE = no                         # Enable keyboard backlight functionality
#BOOTMAGIC_ENABLE = yes                        # Enable Bootmagic Lite
COMBO_ENABLE = no
COMMAND_ENABLE = no                           # Commands for debug and configuration
CONSOLE_ENABLE = no                           # Console for debug
DEBOUNCE_TYPE = asym_eager_defer_pk
EE_HANDS = no                                 # Can use the both halves as master but harder to flash
EXTRAKEY_ENABLE = yes                         # Audio control and System control
KEY_LOCK_ENABLE = yes
KEY_OVERRIDE_ENABLE = no
LEADER_ENABLE = yes
LTO_ENABLE = no                               # Less framesize for flashing
MOUSEKEY_ENABLE = yes                         # Mouse keys
MOUSE_ENABLE = yes
NKRO_DEFAULT_ON = yes                            # USB Nkey Rollover
NO_USB_STARTUP_CHECK = yes                    # https://github.com/qmk/qmk_firmware/issues/19593#issuecomment-1387476045
OS_DETECTION_ENABLE = yes
QMK_SETTINGS = yes
REPEAT_KEY_ENABLE = yes
RGBLIGHT_SUPPORTED = no                       # RGB underglow is supported, but not enabled by default
RGB_MATRIX_DRIVER = ws2812                    # RGB matrix driver support
RGB_MATRIX_ENABLE = yes                       # Enable keyboard RGB matrix (do not use together with RGBLIGHT_ENABLE)
RGB_MATRIX_SUPPORTED = yes                    # RGB matrix is supported and enabled by default
SEND_STRING_ENABLE = yes
SLEEP_LED_ENABLE = no                         # Breathing sleep LED during USB suspend
SPLIT_KEYBOARD = yes
TAP_DANCE_ENABLE = no
#UNICODEMAP_ENABLE = yes                     # NOT WORK AT ALL
#VIALRGB_ENABLE = yes
VIA_ENABLE = yes
