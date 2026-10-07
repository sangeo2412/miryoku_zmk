// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


// GAME1 (U_TAP)
// 일반 QWERTY + 홈로우 모드 없음
// 기존 TAB 자리를 누르고 있는 동안 U_NUM 레이어 활성화
#define MIRYOKU_LAYER_TAP \
&kp Q,     &kp W,     &kp E,     &kp R,     &kp T,     &kp Y,     &kp U,     &kp I,     &kp O,     &kp P,     \
&kp A,     &kp S,     &kp D,     &kp F,     &kp G,     &kp H,     &kp J,     &kp K,     &kp L,     &kp SQT,   \
&kp Z,     &kp X,     &kp C,     &kp V,     &kp B,     &kp N,     &kp M,     &kp COMMA, &kp DOT,   &kp SLASH, \
U_NP,      U_NP,      &kp ESC,   &kp SPACE, &mo U_NUM, &kp RET,   &kp BSPC,  &kp DEL,   U_NP,      U_NP


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
