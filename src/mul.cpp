#include <iostream>
#include <arm_neon.h>
#include "mul.h"
#include "utilities.h"

void demo_vmul_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vmul_s16(v1_s16, v2_s16);
    print_vector(v3_s16);
}

void demo_vmul_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    const int16_t n = 2;
    int16x4_t v2_s16 = vmul_n_s16(v1_s16, n);
    print_vector(v2_s16);
}

void demo_vmul_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    const int16_t n = 2;
    int16x4_t v3_s16 = vmul_lane_s16(v1_s16, v2_s16, n);
    print_vector(v3_s16);
}

void demo_vmull_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int32x4_t v3_s32 = vmull_s16(v1_s16, v2_s16);
    print_vector(v3_s32);
}

void demo_vmull_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    const int16_t n = 2;
    int32x4_t v2_s32 = vmull_n_s16(v1_s16, n);
    print_vector(v2_s32);
}

void demo_vmull_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    const int32_t n = 2;
    int32x4_t v3_s32 = vmull_lane_s16(v1_s16, v2_s16, n);
    print_vector(v3_s32);
}

void demo_vqdmull_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int32x4_t v3_s32 = vqdmull_s16(v1_s16, v2_s16);
    print_vector(v3_s32);
}

void demo_vqdmull_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    const int16_t n = 2;
    int32x4_t v2_s32 = vqdmull_n_s16(v1_s16, n);
    print_vector(v2_s32);
}

void demo_vqdmull_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    const int32_t n = 2;
    int32x4_t v3_s32 = vqdmull_lane_s16(v1_s16, v2_s16, n);
    print_vector(v3_s32);
}

void demo_vqdmulh_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0300020001000000);
    int16x4_t v2_s16 = vcreate_s16(0x0400030002000100);
    int16x4_t v3_s16 = vqdmulh_s16(v1_s16, v2_s16);
    print_vector(v3_s16);
}

void demo_vqdmulh_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0300020001000000);
    const int16_t n = 512;
    int16x4_t v3_s16 = vqdmulh_n_s16(v1_s16, n);
    print_vector(v3_s16);
}

void demo_vqdmulh_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0300020001000000);
    int16x4_t v2_s16 = vcreate_s16(0x0300020001000000);
    const int32_t n = 2;
    int16x4_t v3_s16 = vqdmulh_lane_s16(v1_s16, v2_s16, n);
    print_vector(v3_s16);
}
