#include <iostream>
#include <arm_neon.h>
#include "sub.h"
#include "utilities.h"

void demo_vsub_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(1);
    int8x8_t v2_s8 = vdup_n_s8(2);
    int8x8_t v3_s8 = vsub_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vsubl_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(-2);
    int8x8_t v2_s8 = vdup_n_s8(127);
    int16x8_t v3_s16 = vsubl_s8(v1_s8, v2_s8);
    print_vector(v3_s16);
}

void demo_vsubw_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x8_t v1_s16 = vdupq_n_s16(-2);
    int8x8_t v2_s8 = vdup_n_s8(127);
    int16x8_t v3_s16 = vsubw_s8(v1_s16, v2_s8);
    print_vector(v3_s16);

}

void demo_vsubhn_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x8_t v1_s16 = vdupq_n_s16(0);
    int16x8_t v2_s16 = vdupq_n_s16(32767);
    int8x8_t v3_s8 = vsubhn_s16(v1_s16, v2_s16);
    print_vector(v3_s8);
}

void demo_vqsub_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(-2);
    int8x8_t v2_s8 = vdup_n_s8(127);
    int8x8_t v3_s8 = vqsub_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vhsub_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(-2);
    int8x8_t v2_s8 = vdup_n_s8(127);
    int8x8_t v3_s8 = vhsub_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}
