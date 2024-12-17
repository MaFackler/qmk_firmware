#define _____ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_60_iso(KC_GRV  , KC_1    , KC_2    , KC_3   , KC_4    , KC_5  , KC_6   , KC_7     , KC_8 , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC ,
                        KC_TAB  , KC_Q    , KC_W    , KC_E   , KC_R    , KC_T  , KC_Y   , KC_U     , KC_I , KC_O    , KC_P    , KC_LBRC , KC_RBRC ,
                        KC_ESC  , KC_A    , KC_S    , KC_D   , KC_F    , KC_G  , KC_H   , KC_J     , KC_K , KC_L    , KC_SCLN , KC_QUOT , KC_NUHS , KC_ENT  ,
                        KC_LSFT , KC_NUBS , KC_Z    , KC_X   , KC_C    , KC_V  , KC_B   , KC_N     , KC_M , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT ,
                        KC_LCTL , KC_LGUI , KC_LALT , KC_SPC  /* ---- SPACE ------------------------------------*/  , KC_RALT , MO(1)   , KC_APP  , KC_RCTL),

	[1] = LAYOUT_60_iso(_____ , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _____ ,
                        _____ , KC_HOME , KC_UP   , KC_END  , _____   , _____   , _____   , _____   , _____   , _____  , _____  , _____  , TG(2)  ,
                        _____ , KC_LEFT , KC_DOWN , KC_RGHT , _____   , _____   , _____   , _____   , _____   , _____  , _____  , _____  , _____  , _____ ,
                        _____ , BL_TOGG , BL_ON  , BL_STEP  , BL_BRTG , RGB_VAI , RGB_VAD , RGB_SPI , RGB_SPD , KC_DEL , _____  , _____  , _____  ,
                        _____ , _____   , _____   , _____   , _____   , KC_TRNS , _____   , _____),

	[2] = LAYOUT_60_iso(KC_GRV  , KC_1    , KC_2    , KC_3   , KC_4    , KC_5  , KC_6   , KC_7     , KC_8 , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC ,
                        KC_TAB  , KC_Q    , KC_W    , KC_E   , KC_R    , KC_T  , KC_Y   , KC_U     , KC_I , KC_O    , KC_P    , KC_UP   , TG(2) ,
                        KC_ESC  , KC_A    , KC_S    , KC_D   , KC_F    , KC_G  , KC_H   , KC_J     , KC_K , KC_L    , KC_LEFT , KC_DOWN , KC_RIGHT , KC_ENT  ,
                        KC_LSFT , KC_NUBS , KC_Z    , KC_X   , KC_C    , KC_V  , KC_B   , KC_N     , KC_M , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT ,
                        KC_LCTL , KC_LGUI , KC_LALT , KC_SPC  /* ---- SPACE ------------------------------------*/  , KC_RALT , MO(1)   , KC_APP  , KC_RCTL) ,
};
