// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


// ============================================================
// Layer List
// 기존 Miryoku 10개 레이어 + 게임용 CUSTOM_NUM 레이어
// ============================================================

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,       "Base") \
MIRYOKU_X(EXTRA,      "Extra") \
MIRYOKU_X(TAP,        "Tap") \
MIRYOKU_X(BUTTON,     "Button") \
MIRYOKU_X(NAV,        "Nav") \
MIRYOKU_X(MOUSE,      "Mouse") \
MIRYOKU_X(MEDIA,      "Media") \
MIRYOKU_X(NUM,        "Num") \
MIRYOKU_X(SYM,        "Sym") \
MIRYOKU_X(FUN,        "Fun") \
MIRYOKU_X(CUSTOM_NUM, "Custom Num")

#define U_BASE        0
#define U_EXTRA       1
#define U_TAP         2
#define U_BUTTON      3
#define U_NAV         4
#define U_MOUSE       5
#define U_MEDIA       6
#define U_NUM         7
#define U_SYM         8
#define U_FUN         9
#define U_CUSTOM_NUM 10


// ============================================================
// GAME1 / U_TAP
//
// 홈로우 모드 없음.
// 왼쪽 엄지의 기존 Tab 위치는 게임용 Custom Num 홀드키.
// ============================================================

#define MIRYOKU_LAYER_TAP \
&kp TAB,       &kp Q,        &kp W,        &kp E,        &kp R,          &kp KP_NUM,       &kp KP_N7,   &kp KP_N8,   &kp KP_N9,   &kp KP_MINUS, \
&kp LSHIFT,    &kp A,        &kp S,        &kp D,        &kp F,          &kp KP_DIVIDE,    &kp KP_N4,   &kp KP_N5,   &kp KP_N6,   &kp KP_PLUS, \
&kp LCTRL,     &kp Z,        &kp X,        &kp C,        &kp V,          &kp KP_MULTIPLY,  &kp KP_N1,   &kp KP_N2,   &kp KP_N3,   &kp KP_ENTER, \
U_NP,          U_NP,         &kp LALT,     &kp SPACE,    &mo U_CUSTOM_NUM, &kp RET,        &kp KP_N0,   &kp KP_DOT,  U_NP,        U_NP


// ============================================================
// GAME 전용 숫자 레이어 / U_CUSTOM_NUM
//
// U_NUM과 별개의 레이어.
// GAME1에서 &mo U_CUSTOM_NUM을 누르고 있는 동안만 활성화.
// 일반 상단 숫자열 N0~N9를 사용.
// ============================================================

#define MIRYOKU_LAYER_CUSTOM_NUM \
&kp ESC,       &kp N7,       &kp N8,       &kp N9,       &kp T,          &trans,          &trans,      &trans,      &trans,      &trans, \
&kp GRAVE,     &kp N4,       &kp N5,       &kp N6,       &kp G,          &trans,          &trans,      &trans,      &trans,      &trans, \
&kp N0,        &kp N1,       &kp N2,       &kp N3,       &kp B,          &trans,          &trans,      &trans,      &trans,      &trans, \
U_NP,          U_NP,         &kp LALT,     &kp SPACE,    U_NP,           &trans,          &trans,      &trans,      U_NP,        U_NP


// Custom Num은 일반 Miryoku 물리 매핑 사용
#define MIRYOKU_LAYERMAPPING_CUSTOM_NUM MIRYOKU_MAPPING


// ============================================================
// BASE physical mapping
//
// 왼쪽 남는 물리키  -> GAME1
// 오른쪽 남는 물리키 -> 한/영
// ============================================================

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
     K00            K01  K02  K03  K04       K05  K06  K07  K08  K09 \
     K10            K11  K12  K13  K14       K15  K16  K17  K18  K19 \
&to U_TAP           K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp LANG1 \
                         K32  K33  K34       K35  K36  K37


// ============================================================
// GAME1 physical mapping
//
// 왼쪽 남는 물리키  -> BASE 복귀
// 오른쪽 남는 물리키 -> 한/영
// ============================================================

#define MIRYOKU_LAYERMAPPING_TAP( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
     K00            K01  K02  K03  K04       K05  K06  K07  K08  K09 \
     K10            K11  K12  K13  K14       K15  K16  K17  K18  K19 \
&to U_BASE          K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp LANG1 \
                         K32  K33  K34       K35  K36  K37
