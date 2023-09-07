/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

//Vial Keyboard UID
#define VIAL_KEYBOARD_UID {0xCB, 0xDE, 0x1E, 0x06, 0xFD, 0x19, 0x48, 0xE7}

/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 2

/* Mouse Key Options */
#define MOUSEKEY_INTERVAL 15
#define MOUSEKEY_DELAY 20
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_MAX_SPEED 3
#define MOUSEKEY_WHEEL_DELAY 0