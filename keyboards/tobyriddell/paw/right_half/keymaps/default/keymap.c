// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      *                             ┌───┬───┬───┬───┬───┐
      *                             │ Y │ U │ I │ O │ P │
      *                             ├───┼───┼───┼───┼───┤
      *                             │ H │ J │ K │ L │ ; │
      *                             ├───┼───┼───┼───┼───┤
      *                             │ N │ M │ , │ . │ / │
      *                             └───┴───┴───┴───┴───┘
      *                               ┌───┐
      *                           ┌───┤Alt│
      *                       ┌───┤   ├───┘
      *                       │Ent├───┘
      *                       └───┘
      */
    [0] = LAYOUT(
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_ENT,  KC_SPC,  KC_RALT
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}
