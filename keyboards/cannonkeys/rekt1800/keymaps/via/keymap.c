/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT_all(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_DEL, KC_INS, KC_PGUP, KC_PGDN,
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_BSPC, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUBS, KC_ENT, KC_P4,   KC_P5,   KC_P6, KC_PPLS,
		KC_LSFT, KC_NUHS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_P1,   KC_P2,   KC_P3,   KC_PENT,
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(_FN1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT
    ),

    [_FN1] = LAYOUT_all(
        QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		BL_BRTG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
		BL_UP,  BL_DOWN,BL_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS
    ),

    [_FN2] = LAYOUT_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS
    )
};

enum backlight_keycodes { BL_CHANGE_MODE = QK_KB_0, BL_BREATHING_PULSE};

typedef enum BL_MODE { BL_MODE_OFF, BL_SOLID, BL_BREATHE, BL_REACTIVE, BL_MODE_COUNT} BL_MODE;

typedef union {
  uint32_t raw;
  struct {
    BL_MODE bl_mode;
  };
} keyboard_config_t;

static keyboard_config_t keyboard_config;

void keyboard_post_init_kb() {
    keyboard_config.raw = eeconfig_read_kb();
    if (keyboard_config.bl_mode < BL_MODE_OFF || keyboard_config.bl_mode > BL_REACTIVE ) {
        keyboard_config.bl_mode = BL_SOLID;
    }
    eeconfig_update_kb(keyboard_config.raw);
}

static void change_bl_mode(enum BL_MODE bl_mode) {
    switch (bl_mode) {
        default:
        case BL_MODE_OFF:
            backlight_disable_breathing();
            backlight_disable();
            break;
        case BL_SOLID:
            backlight_enable();
            backlight_disable_breathing();
            break;

        case BL_BREATHE:
            backlight_enable();
            backlight_enable_breathing();
            break;

        case BL_REACTIVE:
            backlight_enable();
            backlight_disable_breathing();
            break;
    }
    keyboard_config.bl_mode = bl_mode;
    eeconfig_update_kb(keyboard_config.raw);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    enum BL_MODE backlight_mode = keyboard_config.bl_mode;
    static enum BL_MODE last_bl_mode = BL_SOLID;
    switch (keycode) {
        case BL_TOGG:
            if(record->event.pressed) {
                if(is_backlight_enabled()) {
                    last_bl_mode = backlight_mode;
                    change_bl_mode(BL_MODE_OFF);
                } else {
                    if(backlight_mode == BL_MODE_OFF) {
                        last_bl_mode = BL_SOLID;
                    }
                    change_bl_mode(last_bl_mode);
                }
            }
            return false;
        case BL_CHANGE_MODE:
            if (record->event.pressed) {
                backlight_mode = (backlight_mode + 1) % BL_MODE_COUNT;
                change_bl_mode(backlight_mode);
            }
            return false;
        case BL_BREATHING_PULSE:
            breathing_pulse();
            return false;
        default:
            if (backlight_mode == BL_REACTIVE) {
                if (record->event.pressed) {
                    backlight_set(get_backlight_level());
                }
                else {
                    breathing_pulse();
                }
            }
            return true; // Process all other keycodes normally
    }
}
