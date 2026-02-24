/* Copyright 2023 Brian Low
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

#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100
#define TAP_CODE_DELAY 10

// Drop all OSMs after a time (in ms)
#define ONESHOT_TIMEOUT 2500

// For certain keys, make tap-holds emit hold if another key is pressed quickly
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// Trigger Caps Word on double tapping thumb shift
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
