#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.           
 * | ESC  |   1  |   2  |   3  |   4  |   5  |           
 * |------+------+------+------+------+------|           
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |           
 * |------+------+------+------+------+------|           
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.   
 * |------+------+------+------+------+------|   [   |   
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|   
 * `-----------------------------------------/       /   
 *                   | LAlt | LGUI |LOWER | /Space  /    
 *                   |      |      |      |/       /     
 *                   `----------------------------'      
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,          
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,          
  KC_LCTRL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,          
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC, 
                        KC_LALT, KC_LGUI, MO(_ADJUST), KC_SPC 
),

/* ADJUST
 * ,-----------------------------------------.          
 * |      |      |      |      |      |      |          
 * |------+------+------+------+------+------|          
 * |      |      |      |      |      |      |          
 * |------+------+------+------+------+------|          
 * |      |      |      |      |      |      |-------.  
 * |------+------+------+------+------+------|       |  
 * |      |      |      |      |      |      |-------|  
 * `-----------------------------------------/       /  
 *                   | LAlt | LGUI |LOWER | /Space  /   
 *                   |      |      |      |/       /    
 *                   `----------------------------'     
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______
  )
};

//layer_state_t layer_state_set_user(layer_state_t state) {
//  return update_tri_layer_state(state, _ADJUST);
//}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
