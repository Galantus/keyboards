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
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_MPLY, KC_NO, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_MUTE, KC_NO, KC_MPRV, KC_MSTP, KC_MNXT, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO
    ),

	[6] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, M(1),
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS, KC_NO,
        KC_BSPACE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NUMLOCK, KC_NO, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_COMMA, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_EQUAL, KC_KP_ENTER,
        KC_LCTRL, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPACE, KC_NO, KC_KP_0, KC_NO, KC_NO, KC_KP_DOT, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO
    ),

	[7] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO
    ),

	[8] = LAYOUT(
        KC_APPLICATION, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCREEN,
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQUAL, KC_NO, M(1),
        KC_TAB, KC_QUOTE, KC_COMMA, KC_DOT, KC_P, KC_Y, KC_PGUP, KC_HOME, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLASH,
        KC_BSPACE, KC_A, KC_O, KC_E, KC_U, KC_I, KC_PGDOWN, KC_END, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINUS,
        KC_LSHIFT, KC_SCOLON, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSHIFT,
        KC_LCTRL, KC_LGUI, KC_LBRACKET, KC_RBRACKET, KC_LALT, KC_SPACE, MO(9), KC_RALT, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT,
        KC_ENTER, KC_ESCAPE, TG(0), KC_DELETE, KC_INSERT, KC_NO, KC_NO, TD(2)
    ),

	[9] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO 
    )
};

#include "dynamic_keymap.h"
#include "vial.h"

#ifdef VIAL_TAP_DANCE_ENABLE

// Seed the exported Vial tap dances only when all three slots are empty.
// Existing user-defined Vial tap dances are preserved.
void keyboard_post_init_user(void) {
#ifdef VIAL_COMBO_ENABLE
    // Import combos only when no Vial combo slot has been configured.
    bool combos_empty = true;
    for (uint8_t i = 0; i < VIAL_COMBO_ENTRIES; ++i) {
        vial_combo_entry_t current;
        if (dynamic_keymap_get_combo(i, &current) != 0) {
            combos_empty = false;
            break;
        }
        for (uint8_t key = 0; key < 4; ++key) {
            if (current.input[key] != KC_NO) {
                combos_empty = false;
            }
        }
        if (current.output != KC_NO) {
            combos_empty = false;
        }
        if (!combos_empty) {
            break;
        }
    }
    if (combos_empty) {
        const vial_combo_entry_t defaults[] = {
        {{KC_RALT, KC_7, KC_NO, KC_NO}, DYN_REC_START1},
        {{KC_RALT, KC_HOME, KC_NO, KC_NO}, DYN_REC_STOP},
        {{KC_RALT, KC_END, KC_NO, KC_NO}, DYN_MACRO_PLAY1},
        {{KC_LALT, KC_6, KC_NO, KC_NO}, DYN_REC_START2},
        {{KC_LALT, KC_PGUP, KC_NO, KC_NO}, DYN_REC_STOP},
        {{KC_LALT, KC_PGDOWN, KC_NO, KC_NO}, DYN_MACRO_PLAY2},
        {{KC_LALT, KC_LSHIFT, KC_NO, KC_NO}, M(2)},
        {{KC_ENTER, TD(2), KC_NO, KC_NO}, TG(8)},
        {{KC_LALT, KC_APPLICATION, KC_NO, KC_NO}, QK_BOOT},
        {{KC_RALT, KC_PSCREEN, KC_NO, KC_NO}, QK_BOOT},
        {{KC_ESCAPE, KC_APPLICATION, KC_NO, KC_NO}, QK_REBOOT},
        };
        for (uint8_t i = 0; i < sizeof(defaults) / sizeof(defaults[0]); ++i) {
            dynamic_keymap_set_combo(i, &defaults[i]);
        }
    }
#endif

    const vial_tap_dance_entry_t defaults[] = {
        {KC_NO, MO(5), TG(4), MO(8), 200},
        {TG(6), KC_NO, TG(7), KC_NO, 200},
        {KC_COPY, KC_NO, KC_PSTE, KC_NO, 200},
    };

    for (uint8_t i = 0; i < 3; ++i) {
        vial_tap_dance_entry_t current;
        if (dynamic_keymap_get_tap_dance(i, &current) != 0 ||
            current.on_tap != KC_NO || current.on_hold != KC_NO ||
            current.on_double_tap != KC_NO || current.on_tap_hold != KC_NO) {
            return;
        }
    }

    for (uint8_t i = 0; i < 3; ++i) {
        dynamic_keymap_set_tap_dance(i, &defaults[i]);
    }
}
