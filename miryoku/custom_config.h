// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#pragma once

// Blank key
#define ___ &none

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_NUM, RET),  U_LT(U_SYM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// Extra layer
#define MIRYOKU_LAYER_EXTRA \
&kp W,              &kp R,              &kp K,              &kp COMMA,           &kp Q,               &kp RBKT,           &kp S,              &kp Z,              &kp SQT,           &kp A,              \
U_MT(LGUI, P),      U_MT(LALT, D),      U_MT(LCTRL, Y),     U_MT(LSHFT, N),      &kp L,               &kp B,              U_MT(LSHFT, F),     U_MT(LCTRL, J),     U_MT(LALT, T),     U_MT(LGUI, C),     \
U_LT(U_BUTTON, LBKT), U_MT(RALT, G),    &kp H,              &kp V,               &kp U,               &kp M,              &kp E,              &kp QMARK,          U_MT(RALT, FSLH),  &kp PIPE,           \
U_NP,              U_NP,                U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE),  U_LT(U_MOUSE, TAB),  U_LT(U_NUM, RET),   U_LT(U_SYM, BSPC),  U_LT(U_FUN, DEL),   U_NP,              U_NP

// Symbols layer
// Many symbols changed places to fit some of my preferences
#define MIRYOKU_LAYER_SYM \
&kp PIPE,          &kp EXCL,          &kp QMARK,         &kp DLLR,          &kp PLUS,          &none,              &to U_BASE,          &to U_EXTRA,         &none,              &bootloader,        \
&kp CARET,         &kp AMPS,          &kp GRAVE,         &kp PRCNT,         &kp MINUS,         &none,              &kp LSHFT,          &kp LCTRL,          &kp LALT,           &kp LGUI,           \
&kp HASH,          &kp TILDE,         &kp ASTRK,         &kp UNDER,         &kp AT,            &none,              &to U_SYM,           &to U_MOUSE,         &kp RALT,           &none,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp EQUAL,         &none,              &none,              &none,              U_NP,               U_NP

// Numbers layer
// Minor changes in accordance with the symbols layer edits
#define MIRYOKU_LAYER_NUM \
&kp ASTRK,         &kp N7,            &kp N8,            &kp N9,            &kp PLUS,          &none,              &to U_BASE,          &to U_EXTRA,         &none,              &bootloader,        \
&kp FSLH,          &kp N4,            &kp N5,            &kp N6,            &kp MINUS,         &none,              &kp LSHFT,          &kp LCTRL,          &kp LALT,           &kp LGUI,           \
&kp DOT,           &kp N1,            &kp N2,            &kp N3,            &kp CARET,         &none,              &to U_NUM,           &to U_NAV,           &kp RALT,           &none,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp EQUAL,         &none,              &none,              &none,              U_NP,               U_NP

#ifdef MIRYOKU_KEYBOARD_XIAO_BLE
#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp LT   K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp GT \
&kp SEMI K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp COLON \
&kp LBRC K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RBRC \
                   K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp BSLH K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp GT \
&kp LBKT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp COLON \
&kp RBKT  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RBRC \
                   K32  K33  K34       K35  K36  K37
#endif
