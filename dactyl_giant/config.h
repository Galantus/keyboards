/*
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

//#include "config_common.h"

#define F_CPU 200000000
#define MATRIX_IO_DELAY 1
/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 14
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { GP15,GP14,GP13,GP12,GP11,GP10,GP9}
#define MATRIX_COL_PINS { GP16,GP17,GP18,GP19,GP20,GP21,GP22}
#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN GP0

#define SPLIT_HAND_PIN GP28

#define BOOTMAGIC_LITE_ROW_RIGHT 7
#define BOOTMAGIC_LITE_COLUMN_RIGHT 6

#define SPLIT_USB_TIMEOUT 3500
#define SPLIT_USB_POLL 1
