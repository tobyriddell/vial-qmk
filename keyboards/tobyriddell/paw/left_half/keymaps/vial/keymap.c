// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │
      * ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │
      * ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │
      * └───┴───┴───┴───┴───┘
      *               ┌───┐
      *               │GUI├───┐
      *               └───┤   ├───┐
      *                   └───┤Bsp│
      *                       └───┘
      */
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, 
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G, 
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LGUI, KC_SPC, KC_LSFT
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}
