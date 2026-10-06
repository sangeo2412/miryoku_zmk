// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_TAP_QWERTY

#if defined (MIRYOKU_KEYBOARD_TOTEM)

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
     K00         K01  K02  K03  K04       K05  K06  K07  K08  K09 \
     K10         K11  K12  K13  K14       K15  K16  K17  K18  K19 \
&u_to_U_TAP      K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K09 \
                      K32  K33  K34       K35  K36  K37


#define MIRYOKU_LAYERMAPPING_TAP( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
     K00          K01  K02  K03  K04       K05  K06  K07  K08  K09 \
     K10          K11  K12  K13  K14       K15  K16  K17  K18  K19 \
&u_to_U_BASE      K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K09 \
                       K32  K33  K34       K35  K36  K37

#endif
