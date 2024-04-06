#include <iostream>
#include <arm_neon.h>
#include "mla.h"
#include "utilities.h"

void demo_vmla_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v4_s16 = vmla_s16(v1_s16, v2_s16, v3_s16);
    print_vector(v4_s16);
}

void demo_vmla_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    const int16_t n = 2;
    int16x4_t v4_s16 = vmla_n_s16(v1_s16, v2_s16, n);
    print_vector(v4_s16);
}

void demo_vmla_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    const int32_t n = 2;
    int16x4_t v4_s16 = vmla_lane_s16(v1_s16, v2_s16, v3_s16, n);
    print_vector(v4_s16);
}

void demo_vmlal_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    int32x4_t v4_s32 = vmlal_s16(v1_s32, v2_s16, v3_s16);
    print_vector(v4_s32);
}

void demo_vmlal_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    const int16_t n = 2;
    int32x4_t v4_s32 = vmlal_n_s16(v1_s32, v2_s16, n);
    print_vector(v4_s32);
}

void demo_vmlal_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    const int32_t n = 2;
    int32x4_t v4_s32 = vmlal_lane_s16(v1_s32, v2_s16, v3_s16, n);
    print_vector(v4_s32);
}

void demo_vfma_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32x2_t v1_f32 = vdup_n_f32(0.1f);
    float32x2_t v2_f32 = vdup_n_f32(0.2f);
    float32x2_t v3_f32 = vdup_n_f32(0.3f);
    float32x2_t v4_f32 = vfma_f32(v1_f32, v2_f32, v3_f32);
    print_vector(v4_f32);
}

void demo_vqdmlal_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    int32x4_t v4_s32 = vqdmlal_s16(v1_s32, v2_s16, v3_s16);
    print_vector(v4_s32);
}

void demo_vqdmlal_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    const int16_t n = 2;
    int32x4_t v4_s32 = vqdmlal_n_s16(v1_s32, v2_s16, n);
    print_vector(v4_s32);
}

void demo_vqdmlal_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    const int32_t n = 2;
    int32x4_t v4_s32 = vqdmlal_lane_s16(v1_s32, v2_s16, v3_s16, n);
    print_vector(v4_s32);
}
