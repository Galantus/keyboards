/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#define VIAL_KEYBOARD_UID {0xCC, 0x3B, 0xEB, 0xFB, 0x3C, 0x82, 0x85, 0x74}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define DYNAMIC_KEYMAP_MACRO_COUNT 50

#define USE_SERIAL
#define SPLIT_USB_DETECT

#define SPLIT_HAND_PIN GP28
#define SOFT_SERIAL_PIN GP1

// fix for device detection after cold boot
// https://github.com/qmk/qmk_firmware/issues/18511#issuecomment-1264604610
// https://github.com/qmk/qmk_firmware/issues/8990#issuecomment-851055637
//#undef SPLIT_USB_DETECT
//https://www.reddit.com/r/ErgoMechKeyboards/comments/11qevf9/comment/jc5y8ux/?context=3
//#define USB_VBUS_PIN GP1

#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

// MATRIX_SCAN_INTERVAL is not a supported Vial-QMK option (removed no-op).
#define USB_POLLING_INTERVAL_MS 1

// Defaults imported from vial_layout.vil (QMK Settings).
// These take effect when Vial/QMK settings are initialized or reset;
// existing saved settings are not overwritten.
#define COMBO_TERM 200
#define TAPPING_TERM 200
// Vial-QMK automatically sets TAPPING_TERM_PER_KEY when Tap Dance is enabled.
// Do not redefine it here (builddefs/build_vial.mk supplies -DTAPPING_TERM_PER_KEY).
#define AUTO_SHIFT_TIMEOUT 175
#define ONESHOT_TAP_TOGGLE 5
#define ONESHOT_TIMEOUT 5000
#define MOUSEKEY_DELAY 1
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_MOVE_DELTA 5
#define MOUSEKEY_MAX_SPEED 10
#define MOUSEKEY_TIME_TO_MAX 20
#define MOUSEKEY_WHEEL_DELAY 10
#define MOUSEKEY_WHEEL_INTERVAL 80
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
#define TAP_CODE_DELAY 0
#define TAP_HOLD_CAPS_DELAY 80
#define TAPPING_TOGGLE 5
