#pragma once

#include "lily29.h"

#include "quantum.h"

#ifdef RGBLIGHT_ENABLE
//rgb led driver
#include "ws2812.h"
#endif

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

#ifndef FLIP_HALF
#define LAYOUT( \
	L00, L01, L02, L03, L04, L05,     \
	L10, L11, L12, L13, L14, L15,     \
	L20, L21, L22, L23, L24, L25,     \
	L30, L31, L32, L33, L34, L35, L45,\
	               L41, L42, L43, L44 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05 },  \
		{ L10, L11, L12, L13, L14, L15 },  \
		{ L20, L21, L22, L23, L24, L25 },  \
		{ L30, L31, L32, L33, L34, L35 },  \
		{ KC_NO, L41, L42, L43, L44, L45 } \
	}
#else
// Keymap with right side flipped
// (TRRS jack on both halves are to the right)
#define LAYOUT( \
	L00, L01, L02, L03, L04, L05,     \
	L10, L11, L12, L13, L14, L15,     \
	L20, L21, L22, L23, L24, L25,     \
	L30, L31, L32, L33, L34, L35, L45,\
	               L41, L42, L43, L44 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05 },  \
		{ L10, L11, L12, L13, L14, L15 },  \
		{ L20, L21, L22, L23, L24, L25 },  \
		{ L30, L31, L32, L33, L34, L35 },  \
		{ KC_NO, L41, L42, L43, L44, L45 } \
	}
#endif
