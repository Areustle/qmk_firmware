/* Copyright 2019 hineybush
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

// Defines the keycodes used by our macros in process_record_user

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* #define LAYOUT_split_bksp_275_rspace( \
    k000, k001, k002, k003, k004, k005, k403,  k006, k007, k008, k009, k010, k011, k012, k013, k014, \
    k100, k101, k102, k103, k104, k105,        k106, k107, k108, k109, k110, k111, k112, k113, k114, \
    k200, k201, k202, k203, k204, k205,        k206, k207, k208, k209, k210, k211, k212,       k214, \
    k300, k301, k302, k303, k304, k305,        k306, k307, k308, k309, k310, k311, k312, k313,       \
    k400,       k402,       k404, k405,        k406,             K409,      k410,       k411, k412, k413        \
) \ */
    [_BASE] = LAYOUT_split_bksp_275_rspace(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,    KC_EQL,     KC_GRAVE,   KC_BSPC,     KC_DEL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,    KC_RBRC,    KC_BSLS,                 KC_PGUP,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,    KC_ENT,                              KC_PGDN,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,    KC_RSFT,                KC_UP,
    KC_LCTL,          KC_LALT,          KC_SPC,  MO(_FN),          KC_SPC,  KC_RALT,            KC_RGUI,                           KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_FN] = LAYOUT_split_bksp_275_rspace(
    KC_TRNS, RGB_TOG, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_BRTG, BL_TOGG, BL_INC,  BL_DEC,  KC_TRNS, KC_TRNS, KC_INS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_HOME,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_END,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
    )
};


