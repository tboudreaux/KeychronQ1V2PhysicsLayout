/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers{
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
    _PHYSGREEK
};


#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

#define GK_A    UC(0x03B1) // Alpha
#define GK_B    UC(0x03B2) // Beta
#define GK_G    UC(0x03B3) // Gamma
#define GK_D    UC(0x03B4) // Delta
#define GK_E    UC(0x03B5) // Epsilon
#define GK_Z    UC(0x03B6) // Zeta
#define GK_H    UC(0x03B7) // Eta
#define GK_TH   UC(0x03B8) // Theta
#define GK_I    UC(0x03B9) // Iota
#define GK_K    UC(0x03BA) // Kappa
#define GK_L    UC(0x03BB) // Lambda
#define GK_M    UC(0x03BC) // Mu
#define GK_N    UC(0x03BD) // Nu
#define GK_X    UC(0x03BE) // Xi
#define GK_O    UC(0x03BF) // Omicron
#define GK_P    UC(0x03C0) // Pi
#define GK_R    UC(0x03C1) // Rho
#define GK_S    UC(0x03C3) // Sigma
#define GK_T    UC(0x03C4) // Tau
#define GK_U    UC(0x03C5) // Upsilon
#define GK_F    UC(0x03C6) // Phi (Using F key alias)
#define GK_C    UC(0x03C7) // Chi (Using C key alias)
#define GK_PS   UC(0x03C8) // Psi
#define GK_W    UC(0x03C9) // Omega
#define GK_Q    UC(0x03D9) // Koppa (Using Q key alias)
#define KC_INT  UC(0x222B) // integral
#define KC_BUL  UC(0x23A1) // upper left bracket
#define KC_BUR  UC(0x23A4) // upper right bracket
#define KC_BLL  UC(0x23A3) // lower left bracket
#define KC_BLR  UC(0x23A6) // lower right bracket
#define KC_OINT UC(0x222E) // closed contour integral 
#define KC_SUM  UC(0x2211) // summation
#define KC_ELM  UC(0x2208) // element of
#define KC_PM   UC(0x00B1) // plus-minus sign
#define KC_INTR UC(0x2229) // intersection

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             MO(_PHYSGREEK),
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD,  MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_ansi_82(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,            RM_TOGG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LCMD,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_ansi_82(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,            RM_TOGG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),
    [_PHYSGREEK] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  KC_INT,   KC_OINT,  _______,  _______,  _______,  _______,  KC_ELM,   KC_INTR,  KC_BUL,   KC_BUR,   KC_PM,      KC_SUM,   _______,            _______,
        _______,  GK_Q,     GK_W,     GK_E,     GK_R,     GK_TH,     GK_PS,   GK_U,     GK_I,     GK_O,     GK_P,     KC_BLL,     KC_BLR,   _______,            _______,
        _______,  GK_A,     GK_S,     GK_D,     GK_F,     GK_G,     GK_H,     GK_I,     GK_K,     GK_L,     _______,  _______,              _______,            _______,
        _______,            GK_Z,     GK_X,     GK_C,     GK_T,     GK_B,     GK_N,     GK_M,     _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = { ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = { ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [_PHYSGREEK] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif // ENCODER_MAP_ENABLE
