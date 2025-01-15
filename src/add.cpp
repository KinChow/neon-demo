#include <iostream>
#include <arm_neon.h>
#include "add.h"
#include "utilities.h"

void demo_vadd_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(1);
    int8x8_t v2_s8 = vdup_n_s8(-1);
    int8x8_t v3_s8 = vadd_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vaddl_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(127);
    int8x8_t v2_s8 = vdup_n_s8(127);
    int16x8_t v3_s16 = vaddl_s8(v1_s8, v2_s8);
    print_vector(v3_s16);
}

void demo_vaddw_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x8_t v1_s16 = vdupq_n_s16(127);
    int8x8_t v2_s8 = vdup_n_s8(127);
    int16x8_t v3_s16 = vaddw_s8(v1_s16, v2_s8);
    print_vector(v3_s16);
}

void demo_vaddhn_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x8_t v1_s16 = vdupq_n_s16(0);
    int16x8_t v2_s16 = vdupq_n_s16(32767);
    int8x8_t v3_s8 = vaddhn_s16(v1_s16, v2_s16);
    print_vector(v3_s8);
}

void demo_vqadd_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(127);
    int8x8_t v2_s8 = vdup_n_s8(1);
    int8x8_t v3_s8 = vqadd_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vhadd_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(126);
    int8x8_t v2_s8 = vdup_n_s8(127);
    int8x8_t v3_s8 = vhadd_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vrhadd_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(126);
    int8x8_t v2_s8 = vdup_n_s8(127);
    int8x8_t v3_s8 = vrhadd_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vpadd_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(1);
    int8x8_t v2_s8 = vdup_n_s8(-1);
    int8x8_t v3_s8 = vpadd_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vpaddl_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(64);
    int16x4_t v2_s16 = vpaddl_s8(v1_s8);
    print_vector(v2_s16);
}

void demo_vpadal_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s4 = vdup_n_s16(64);
    int8x8_t v2_s8 = vdup_n_s8(64);
    int16x4_t v3_s4 = vpadal_s8(v1_s4, v2_s8);
    print_vector(v3_s4);;
}

void demo_vaddv_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(127);
    int16_t ret = vaddlv_s8(v1_s8);
    std::cout << ret << std::endl;
}
