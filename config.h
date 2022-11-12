/* Copyright 2020 doodboard
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5678
#define PRODUCT_ID      0x1234
#define DEVICE_VER      0x0001
#define MANUFACTURER    GUYU
#define PRODUCT         GUYU

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B3, B1, F7, F6, F5, F4 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B6 }
#define ENCODERS_PAD_A_RIGHT { B2 }
#define ENCODERS_PAD_B_RIGHT { B6 }
#define ENCODER_RESOLUTION 2

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 300000
#endif

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT
#define OLED_FONT_END 127

/* media key slowdown for windows */
#define TAP_CODE_DELAY 10

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define USE_SERIAL
#define SELECT_SOFT_SERIAL_SPEED 1
#define SOFT_SERIAL_PIN D2

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
