#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_APPLICATION, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCREEN,
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_RBRACKET, KC_BSLASH, M(1),
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_PGUP, KC_HOME, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET,
        KC_BSPACE, KC_A, KC_S, KC_D, KC_F, KC_G, KC_PGDOWN, KC_END, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE,
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT,
        KC_LCTRL, KC_LGUI, KC_MINUS, KC_EQUAL, KC_LALT, KC_SPACE, MO(1), KC_RALT, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT,
        KC_ENTER, KC_ESCAPE, TD(0), KC_DELETE, KC_INSERT, TD(1), KC_APPLICATION, TD(2)
    ),

    [1] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO,
        KC_NO, LSFT(KC_QUOTE), LSFT(KC_W), LSFT(KC_E), LSFT(KC_Q), KC_E, KC_NO, KC_NO, LSFT(KC_7), M(3), KC_MINUS, KC_EQUAL, LSFT(KC_5), KC_NO,
        KC_BSPACE, LSFT(KC_1), KC_QUOTE, LSFT(KC_RBRACKET), KC_RBRACKET, LSFT(KC_3), KC_NO, LSFT(KC_COMMA), LSFT(KC_BSLASH), LSFT(KC_Z), LSFT(KC_9), LSFT(KC_0), LSFT(KC_LBRACKET), KC_NO,
        KC_LSHIFT, LSFT(KC_6), KC_BSLASH, LSFT(KC_8), KC_LBRACKET, LSFT(KC_GRAVE), LSFT(KC_GRAVE), LSFT(KC_4), LSFT(KC_MINUS), LSFT(KC_EQUAL), LSFT(KC_2), KC_RSHIFT,
        KC_LCTRL, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPACE, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_ENTER, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),

    [2] = LAYOUT(
        KC_APPLICATION, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCREEN,
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, M(1),
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_PGUP, KC_HOME, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET,
        KC_BSPACE, KC_A, KC_S, KC_D, KC_F, KC_G, KC_PGDOWN, KC_END, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE,
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT,
        KC_LCTRL, KC_LGUI, KC_LBRACKET, KC_RBRACKET, KC_LALT, KC_SPACE, KC_NO, KC_RALT, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT,
        KC_ENTER, KC_ESCAPE, KC_TRNS, KC_DELETE, KC_INSERT, TD(1), KC_APPLICATION, TD(2)
    ),

    [3] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO,
        KC_NO, LSFT(KC_MINUS), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), KC_NO,
        KC_BSPACE, LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), KC_NO,
        KC_LSHIFT, LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_NO), LSFT(KC_2), KC_RSHIFT,
        KC_LCTRL, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPACE, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_ENTER, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO
    ),

	[4] = LAYOUT(
        KC_NO, KC_NO, KC_ACL1, KC_ACL0, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO
    ),

	[5] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
	_______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,                            		        _______,_______,_______,_______,                                 _______,_______,_______,_______
),

	[6] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
	_______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,                            		        _______,_______,_______,_______,                                 _______,_______,_______,_______
),

	[7] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
	_______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,                            		        _______,_______,_______,_______,                                 _______,_______,_______,_______
),

	[8] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
	_______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,                            		        _______,_______,_______,_______,                                 _______,_______,_______,_______
),

	[9] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
	_______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                                 _______,_______,_______,_______,_______,_______,                            		        _______,_______,_______,_______,                                 _______,_______,_______,_______
)
};
