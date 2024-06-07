#include QMK_KEYBOARD_H

enum custom_layers {
  _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_akouz_7k(
  KC_A, KC_S, KC_D, KC_SPC, KC_K, KC_L, KC_SCLN
  )
};

led_config_t g_led_config = { {
  {0, 1, 2, 3, 4, 5, 6}
}, {
  {0, 0}, {38, 0}, {75, 0}, {112, 0}, {149, 0}, {187, 0}, {224, 0}
}, {
  4, 4, 4, 4, 4, 4, 4
} };