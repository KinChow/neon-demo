#include <iostream>
#include <arm_neon.h>
#include "convert.h"
#include "utilities.h"

void demo_vcvt_type1_type2()
{
    std::cout << __FUNCTION__ << std::endl;
    int32x2_t v1_s32 = vcreate_s32(0x0000000100000000);
    float32x2_t v1_f32 = vcvt_f32_s32(v1_s32);
    print_vector(v1_f32);
    float32x2_t v2_f32 = vdup_n_f32(1.2);
    int32x2_t v2_s32 = vcvt_s32_f32(v2_f32);
    print_vector(v2_s32);
}

void demo_vcvt_n_type1_type2()
{
    std::cout << __FUNCTION__ << std::endl;
    int32x2_t v1_s32 = vcreate_s32(0x0000000100000000);
    float32x2_t v1_f32 = vcvt_n_f32_s32(v1_s32, 1);
    print_vector(v1_f32);
    float32x2_t v2_f32 = vdup_n_f32(1.2);
    int32x2_t v2_s32 = vcvt_n_s32_f32(v2_f32, 1);
    print_vector(v2_s32);
}

void demo_vreinterpret_type1_type2()
{
    std::cout << __FUNCTION__ << std::endl;
    int32x2_t v1_s32 = vcreate_s32(0x0000000100000000);
    int16x4_t v1_s16 = vreinterpret_s16_s32(v1_s32);
    print_vector(v1_s16);
}
