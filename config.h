/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2020 Ben Roesner (keycapsss.com)

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

/* Select hand configuration */
//#define MASTER_LEFT
#define MASTER_RIGHT
//#define EE_HANDS

#define TAPPING_TOGGLE 2
#define PIMORONI_TRACKBALL_ENABLE

#define PIMORONI_TRACKBALL_CLICK

//#define POINTING_DEVICE_ROTATION_90         //(Optional) Rotates the X and Y data by 90 degrees.
#define POINTING_DEVICE_ROTATION_180         //(Optional) Rotates the X and Y data by 180 degrees.
//#define POINTING_DEVICE_ROTATION_270         //(Optional) Rotates the X and Y data by 270 degrees.
//#define POINTING_DEVICE_INVERT_X         //(Optional) Inverts the X axis report.
//#define POINTING_DEVICE_INVERT_Y         //(Optional) Inverts the Y axis report.
#define PIMORONI_TRACKBALL_INTERVAL_MS 8 //change update rate for trackball, from testing update rate seems to be limited to around 250. Updating more frequently will slow down the keyboard.
#define PIMORONI_TRACKBALL_SCALE 5 //5 is default, I personally prefer 3 which feels a little smoother.
//#define PIMORONI_TRACKBALL_DEBOUNCE_CYCLES 20 //number of cycles to stop motion after clicking. 20 x 8 (INTERVAL) so 160ms.
//#define PIMORONI_TRACKBALL_ERROR_COUNT 10 //stops trying to read from the pimoroni after this many faults.
#define TAPPING_TOOGLE 2
#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 6 // number of steps to cycle through the hue by
#define RGBLIGHT_SAT_STEP 6 // number of steps to increment the saturation by
#define RGBLIGHT_VAL_STEP 6 // number of steps to increment the brightness by
#define RGBLIGHT_SLEEP //  the RGB lighting will be switched off when the host goes to sleep
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
//#define SPLIT_USB_DETECT
//#define NO_USB_STARTUP_CHECK
