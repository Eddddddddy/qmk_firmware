#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03,           \
	K10, K11, K12, K13,           \
	K20, K21, K22, K23,           \
	K30, K31, K32, K33,           \
	                    K44,      \
	                         K55  \
) { \
	{ K00,   K01,   K02,   K03,   KC_NO, KC_NO }, \
	{ K10,   K11,   K12,   K13,   KC_NO, KC_NO }, \
	{ K20,   K21,   K22,   K23,   KC_NO, KC_NO }, \
	{ K30,   K31,   K32,   K33,   KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, K44,   KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K55 }  \
}

#endif