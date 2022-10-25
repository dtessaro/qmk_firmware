#include QMK_KEYBOARD_H

enum layer_number {
  
  _DEFAULT = 0,
  
  _ALTIUM,
  _PREMIERE,
  _MINECRAFT, 
  _BFME, 

  _NUMPAD
};


enum custom_keycodes {
    M_TGH = SAFE_RANGE,
    M_TGEA,
 M_TGM,
    M_MOVE,
    M_DRC,
 M_MinDiv
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* ,-----------------------------------------.             
 * |      |      |      |      |      |      |                
 * |------+------+------+------+------+------|                  
 * |      |      |      |      |      |      |                 
 * |------+------+------+------+------+------|                  
 * |      |      |      |      |      |      |-------.  
 * |------+------+------+------+------+------|       |  
 * |      |      |      |      |      |      |-------|   
 * `-----------------------------------------/       /  
 *                   |      |      |      | /       /  
 *                   `----------------------------'    
 
 [_NAME] = LAYOUT( \
  _______,          _______,          XXXXXXX,          XXXXXXX,          XXXXXXX,          _______,                         \
  _______,          _______,          XXXXXXX,          XXXXXXX,          XXXXXXX,          _______,                         \
  _______,          _______,          XXXXXXX,          XXXXXXX,          XXXXXXX,          _______,                         \
  _______,          _______,          XXXXXXX,          XXXXXXX,          XXXXXXX,          _______,          XXXXXXX,       \
                                                        _______,          _______,          _______,          XXXXXXX        \
),
*/



/*
  _                               
 | |                              
 | |     __ _ _   _  ___ _ __ ___ 
 | |    / _` | | | |/ _ \ '__/ __|
 | |___| (_| | |_| |  __/ |  \__ \
 |______\__,_|\__, |\___|_|  |___/
               __/ |              
              |___/               */
              


/* ,-----------------------------------------.             
 * |Layer#| ESC  |PrePRO|Altium|      |      |          
 * |------+------+------+------+------+------|              
 * |  TAB | CANC |      |      |      |      |      
 * |------+------+------+------+------+------|        
 * | SHIFT| L BT |NUMPAD|      |      |      |-------.  
 * |------+------+------+------+------+------|       |   
 * | CTRL | ALT  |MineCR| BFME |      |      |-------| 
 * `-----------------------------------------/       /   
 *                   | Cut  | Copy | Paste| /       /     
 *                   `----------------------------'      
 */

[_DEFAULT] = LAYOUT( \
  TO(_DEFAULT),    KC_ESC,      TO(_PREMIERE),       TO(_ALTIUM),   XXXXXXX,        XXXXXXX,                  \
  KC_TAB,          KC_DEL,      XXXXXXX,           XXXXXXX,          XXXXXXX,        XXXXXXX,                  \
  KC_LSFT,         KC_BTN1,     TO(_NUMPAD),       XXXXXXX,          XXXXXXX,        XXXXXXX,                  \
  KC_LCTL,         KC_LOPT,     TO(_MINECRAFT),    TO(_BFME),        XXXXXXX,        XXXXXXX,        XXXXXXX,  \
                                                   LCTL(KC_X),       LCTL(KC_C),     LCTL(KC_V),     XXXXXXX   \
),

/*         _ _   _                 
     /\   | | | (_)                
    /  \  | | |_ _ _   _ _ __ ___  
   / /\ \ | | __| | | | | '_ ` _ \ 
  / ____ \| | |_| | |_| | | | | | |
 /_/    \_\_|\__|_|\__,_|_| |_| |_|
*/                                   
 
/* ,-----------------------------------------.             
 * |      |      | TGM  |TGE[A]| TGH  |      |        
 * |------+------+------+------+------+------|          
 * |      |      | DRC  |Layers| Move |      |         
 * |------+------+------+------+------+------|        
 * |      |      |      |      |      |      |-------.  
 * |------+------+------+------+------+------|       |   
 * |      |      |      |      |Ctrl+W|      |-------|  
 * `-----------------------------------------/       /    
 *                   |      |      |      | /       /  
 *                   `----------------------------'    
 */
[_ALTIUM] = LAYOUT( \
  _______,          _______,          XXXXXXX,          M_TGEA,           M_TGH,               _______,                            \
  _______,          _______,          M_DRC,            KC_L,             M_MOVE,              _______,                            \
  _______,          _______,          XXXXXXX,          XXXXXXX,          XXXXXXX,             _______,                            \
  _______,          _______,          XXXXXXX,          XXXXXXX,          LCTL(KC_W),          _______,          XXXXXXX,          \
                                                        _______,          _______,             _______,          _______           \
),


/*
  ____                     _                 ____            
 |  _ \ _ __ ___ _ __ ___ (_) ___ _ __ ___  |  _ \ _ __ ___  
 | |_) | '__/ _ \ '_ ` _ \| |/ _ \ '__/ _ \ | |_) | '__/ _ \ 
 |  __/| | |  __/ | | | | | |  __/ | |  __/ |  __/| | | (_) |
 |_|   |_|  \___|_| |_| |_|_|\___|_|  \___| |_|   |_|  \___/ 
*/                                                                                              
                                   

/*
 * ,-----------------------------------------.             
 * |      |      |      |      |      |      |                
 * |------+------+------+------+------+------|                  
 * |      |      |  Q   |  W   |      |      |                 
 * |------+------+------+------+------+------|                  
 * |      |      |  A   |      |      |      |-------.  
 * |------+------+------+------+------+------|       |  
 * |      |      |   Z  |  C   |  V   |      |-------|   
 * `-----------------------------------------/ SPACE /  
 *                   |      |      |      | /       /  
 *                   `----------------------------'    
 */
 [_PREMIERE] = LAYOUT( \
  _______,          _______,          XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX,                            \
  _______,          _______,          KC_Q,             KC_W,             XXXXXXX,          XXXXXXX,                            \
  _______,          _______,          KC_A,             XXXXXXX,          KC_G,             XXXXXXX,                            \
  _______,          _______,          KC_Z,             KC_C,             KC_V,             XXXXXXX,          XXXXXXX,          \
                                                        _______,          _______,          _______,          KC_SPC            \
),

/*
  __  __ _                            __ _   
 |  \/  (_)                          / _| |  
 | \  / |_ _ __   ___  ___ _ __ __ _| |_| |_ 
 | |\/| | | '_ \ / _ \/ __| '__/ _` |  _| __|
 | |  | | | | | |  __/ (__| | | (_| | | | |_ 
 |_|  |_|_|_| |_|\___|\___|_|  \__,_|_|  \__|
*/


/* Minecraft
 * ,-----------------------------------------.             
 * |      |      |   1  |   2  |  3   |      |                
 * |------+------+------+------+------+------|                  
 * |      |      |   Q  |   W  |  E   |      |                 
 * |------+------+------+------+------+------|                  
 * |      |      |   A  |   S  |  D   |      |-------.  
 * |------+------+------+------+------+------| lock  |  
 * |      |      |   Z  |   X  |  C   |      |-------|   
 * `-----------------------------------------/       /  
 *                   |      |      |        / SPACE /  
 *                   `----------------------------'    
 */
 [_MINECRAFT] = LAYOUT( \
  _______,          _______,          KC_1,          KC_2,             KC_3,             _______,                            \
  _______,          _______,          KC_Q,          KC_W,             KC_E,             _______,                            \
  _______,          _______,          KC_A,          KC_S,             KC_D,             _______,                            \
  _______,          _______,          KC_Z,          KC_X,             KC_C,             _______,          KC_LOCK,          \
                                                     _______,          _______,          _______,          KC_SPC            \
),



/*
  ____        _   _   _         __             __  __ _     _     _ _        ______           _   _     
 |  _ \      | | | | | |       / _|           |  \/  (_)   | |   | | |      |  ____|         | | | |    
 | |_) | __ _| |_| |_| | ___  | |_ ___  _ __  | \  / |_  __| | __| | | ___  | |__   __ _ _ __| |_| |__  
 |  _ < / _` | __| __| |/ _ \ |  _/ _ \| '__| | |\/| | |/ _` |/ _` | |/ _ \ |  __| / _` | '__| __| '_ \ 
 | |_) | (_| | |_| |_| |  __/ | || (_) | |    | |  | | | (_| | (_| | |  __/ | |___| (_| | |  | |_| | | |
 |____/ \__,_|\__|\__|_|\___| |_| \___/|_|    |_|  |_|_|\__,_|\__,_|_|\___| |______\__,_|_|   \__|_| |_|
*/


/* Battle for Middle Earth
 * ,-----------------------------------------.             
 * |      |      |   1  |   2  |  3   |      |                 
 * |------+------+------+------+------+------|                  
 * |      |      |   Q  |  UP  |      |      |                 
 * |------+------+------+------+------+------|                  
 * |      |      | LEFT |  DW  | RHT  |      |-------.  
 * |------+------+------+------+------+------|   H   |  
 * |      |      |      |      |      |      |-------|   
 * `-----------------------------------------/       /  
 *                   |      |      |        /       /  
 *                   `----------------------------'    
 */
 [_BFME] = LAYOUT( \
  _______,          _______,          KC_1,             KC_2,             KC_3,             _______,                     \
  _______,          _______,          KC_Q,             KC_UP,            _______,          _______,                     \
  _______,          _______,          KC_LEFT,          KC_DOWN,          KC_RGHT,          _______,                     \
  _______,          _______,          _______,          _______,          _______,          _______,          KC_H,      \
                                                        _______,          _______,          _______,          _______    \
),



/*
  _   _                   _____        _____  
 | \ | |                 |  __ \ /\   |  __ \ 
 |  \| |_   _ _ __ ___   | |__) /  \  | |  | |
 | . ` | | | | '_ ` _ \  |  ___/ /\ \ | |  | |
 | |\  | |_| | | | | | | | |  / ____ \| |__| |
 |_| \_|\__,_|_| |_| |_| |_| /_/    \_\_____/ 
                                              
*/


/* NUMPAD
 * ,-----------------------------------------.             
 * |       |      |      |   7  |   8  |   9  |          
 * |------+------+------+------+------+------|              
 * |      |      |      |   4  |   5  |   6  |      
 * |------+------+------+------+------+------|        
 * |      |      |      |   1  |   2  |   3  |-------.  
 * |------+------+------+------+------+------|   .   |   
 * |      |      |      |   -  |   0  |  + * |-------| 
 * `-----------------------------------------/       /   ++++++++++++
 *                   |  /   |  (   |   )  | /Enter  /     
 *                   `----------------------------'     
 */
[_NUMPAD] = LAYOUT( \
  _______,  _______,  _______,  KC_P7,      KC_P8,    KC_P9,                \
  _______,  _______,  _______,  KC_P4,      KC_P5,    KC_P6,              \
  _______,  _______,  _______,  KC_P1,      KC_P2,    KC_P3,                \
  _______,  _______,  _______,  KC_PMNS,    KC_P0,    KC_RBRC,   KC_COMM,   \
                           KC_NLCK,   KC_LBRC,   KC_RBRC,    KC_ENT       \
)
  
};





layer_state_t layer_state_set_user(layer_state_t state) {

  return state;//update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if off
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
 const char *read_timelog(void);




bool oled_task_user(void) {
 
 oled_write_P(PSTR("Layer: "), false);
 
//MAX 21 chars
    switch (get_highest_layer(layer_state)) {
     case _DEFAULT:
            oled_write_P(PSTR("\nSELECT LAYER #\n"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("\nNUMPAD\n"), false);
            break;
        case _ALTIUM:
            oled_write_P(PSTR("\nAltium\n"), false);
            break;
        case _PREMIERE:
            oled_write_P(PSTR("\nPremierePro\n"), false);
            break;
        case _MINECRAFT:
            oled_write_P(PSTR("\nMinecraft\n"), false);
            break;
        case _BFME:
            oled_write_P(PSTR("\nLord of the Rings\n"), false);
            break;

        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    } 
 
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    //oled_write_ln(read_layer_state(), false);
    //oled_write_ln(read_keylog(), false);
    //oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //led_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
  return false;

}
#endif // OLED_ENABLE


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    
 switch (keycode) {
  case M_TGH:
   if (record->event.pressed)
    SEND_STRING("t" SS_DELAY(100) "g" SS_DELAY(100) "h");
      break;
  case M_TGEA:
      if (record->event.pressed){
     if(keyboard_report->mods & MOD_BIT (KC_LSFT))
      SEND_STRING("t" SS_DELAY(100) "g" SS_DELAY(100) "e" SS_DELAY(1000) "t" SS_DELAY(100) "g" SS_DELAY(100) "a");
      else
         SEND_STRING("t" SS_DELAY(100) "g" SS_DELAY(100) "a");
      }
      break;

  case M_TGM:
   if (record->event.pressed)
    SEND_STRING("t" SS_DELAY(100) "g" SS_DELAY(100) "m");
      break;
  case M_MOVE: // Altium
   if (record->event.pressed)
    SEND_STRING("e" SS_DELAY(100) "m" SS_DELAY(100) "m");
      break;
  case M_DRC:
   if (record->event.pressed)
    SEND_STRING("d" SS_DELAY(100) "r" SS_DELAY(100) "c");
      break;
  case M_MinDiv:
   if (record->event.pressed){}
    

  //SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(50) "google chrome" SS_DELAY(50) SS_TAP(X_ENTER) SS_DELAY(500) "minecraft.fandom.com/wiki/Minecraft_Wiki" SS_TAP(X_ENTER)); 
 }  
  
  if (record->event.pressed) {
 #ifdef OLED_ENABLE
     set_keylog(keycode, record);
 #endif
    // set_timelog();
  }
  
  return true;
}


void keyboard_pre_init_user(void) {
 //   setPinOutput(LED0);  // initialize B0 for LED
  // setPinOutput(LED1); 
}

/* MACRO DEFINITION
 case M_TGH: 
     if (record->event.pressed) { // when keycode QMKBEST is pressed
         SEND_STRING(TGH);
     } 
  else {}// when keycode QMKBEST is released
     break;

*/