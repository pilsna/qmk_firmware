// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
#include "print.h"
#include "keymap_danish_mac_iso.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /* Layer 0: Letters
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │ Å │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A_│ S_│ D2│ F2│ G │       │ H │ J1│ K1│ L_│ Æ_│ Ø │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C_│ V_│ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │CMD├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤EN ├───┘
      *                   └───┤Bsp│   │L1_├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                            ,-----------------------------------------------------.
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    DK_ARNG,
  //|--------+--------+--------+--------+--------+--------|                            |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                              KC_H,    KC_J,    KC_K,    KC_L,    DK_AE,   DK_OSTR,
  //|--------+--------+--------+--------+--------+--------|                            |--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                              KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|          |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD, KC_SPC, KC_BSPC,              LT(1, KC_ESC), KC_ENT, KC_RALT
                                      //`--------------------------'          `--------------------------'
    ),
      /* Layer 1: Arrows and numbers
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ < │ ( │ UP│ ) │ > │       │ ? │ 7 │ 8 │ 9 │ + │ ´ │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ [ │LEF│DOW│RIG│ ] │       │ ! │ 4 │ 5 │ 6 │ $ │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ # │ { │ | │ } │ @ │       │ 0 │ 1 │ 2 │ 3 │ ¨ │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │CMD├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤Ent├───┘
      *                   └───┤Bsp│   │L0 ├───┘
      *                       └───┘   └───┘
      */
[1] = LAYOUT_split_3x6_3(
        _______, DK_LABK, DK_LPRN, KC_UP,   DK_RPRN, DK_RABK,           DK_QUES, KC_7, KC_8, KC_9, DK_PLUS, DK_ACUT,
        _______, DK_LBRC, KC_LEFT, KC_DOWN, KC_RGHT, DK_RBRC,           DK_EXLM, KC_4, KC_5, KC_6, KC_NUBS, DK_QUOT,
        _______, DK_HASH, DK_LCBR, DK_PIPE, DK_RCBR,  DK_AT,            KC_0,  KC_1, KC_2, KC_3, DK_DIAE, _______,
                              _______, _______, _______,                      TO(0), _______, _______),
      /* Layer 2: Fn keys and system settings
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ F1│ F2│ F3│ F4│   │       │SLE│BRD│BRU│VOD│VOU│MUT│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ F5│ F6│ F7│ F8│   │       │   │Win│   │MUT│   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ F9│F10│F11│F12│   │       │   │   │   │   │   │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │CMD├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │L0 ├───┘
      *                       └───┘   └───┘
      */
[2] = LAYOUT_split_3x6_3(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO,         KC_SLEP, KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, KC_MUTE,
        _______, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO,         KC_NO, C(KC_DOWN), KC_NO, KC_MUTE, KC_NO, KC_NO,
        _______, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, _______,
                              _______, _______, _______,     TO(0), _______, _______)
};

enum combo_events {
  // NR_EMAIL,
  TAB_Q_ESC,
  JK_L1,
  DF_L2,
  CV_L2_T,
  AS_LALT,
  LAE_RCMD,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

// const uint16_t PROGMEM email_combo[] = {KC_N, KC_R, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_TAB, KC_Q, COMBO_END};
const uint16_t PROGMEM layer1_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM layer2_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM layer2_temp_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM lalt_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM rcmd_combo[] = {KC_L, DK_AE, COMBO_END};

combo_t key_combos[] = {
  // [NR_EMAIL] = COMBO_ACTION(email_combo),
  [TAB_Q_ESC] = COMBO(esc_combo, KC_ESC),
  [JK_L1] = COMBO(layer1_combo, TO(1)),
  [DF_L2] = COMBO(layer2_combo, TO(2)),
  [CV_L2_T] = COMBO(layer2_temp_combo, MO(2)),
  [AS_LALT] = COMBO(lalt_combo, KC_LOPT),
  [LAE_RCMD] = COMBO(rcmd_combo, KC_RCMD),
};
/* COMBO_ACTION(x) is same as COMBO(x, KC_NO) */
/*
void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case NR_EMAIL:
      if (pressed) {
        SEND_STRING("a@b.dk");
      }
      break;
  }
}
*/

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return true;
}
*/
