#include <iostream>
#include <arm_neon.h>
#include "mls.h"
#include "utilities.h"

void demo_vmls_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v4_s16 = vmls_s16(v1_s16, v2_s16, v3_s16);
    print_vector(v4_s16);
}

void demo_vmls_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    const int16_t n = 2;
    int16x4_t v4_s16 = vmls_n_s16(v1_s16, v2_s16, n);
    print_vector(v4_s16);
}

void demo_vmls_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    const int32_t n = 2;
    int16x4_t v4_s16 = vmls_lane_s16(v1_s16, v2_s16, v3_s16, n);
    print_vector(v4_s16);
}

void demo_vmlsl_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    int32x4_t v4_s32 = vmlsl_s16(v1_s32, v2_s16, v3_s16);
    print_vector(v4_s32);
}

void demo_vmlsl_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    const int16_t n = 2;
    int32x4_t v4_s32 = vmlsl_n_s16(v1_s32, v2_s16, n);
    print_vector(v4_s32);
}

void demo_vmlsl_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    const int32_t n = 2;
    int32x4_t v4_s32 = vmlsl_lane_s16(v1_s32, v2_s16, v3_s16, n);
    print_vector(v4_s32);
}

void demo_vfms_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32x2_t v1_f32 = vdup_n_f32(0.1f);
    float32x2_t v2_f32 = vdup_n_f32(0.2f);
    float32x2_t v3_f32 = vdup_n_f32(0.3f);
    float32x2_t v4_f32 = vfms_f32(v1_f32, v2_f32, v3_f32);
    print_vector(v4_f32);
}

void demo_vqdmlsl_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    int32x4_t v4_s32 = vqdmlsl_s16(v1_s32, v2_s16, v3_s16);
    print_vector(v4_s32);
}

void demo_vqdmlsl_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    const int16_t n = 2;
    int32x4_t v4_s32 = vqdmlsl_n_s16(v1_s32, v2_s16, n);
    print_vector(v4_s32);
}

void demo_vqdmlsl_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[4] = {0, 1, 2, 3};
    int32x4_t v1_s32 = vld1q_s32(ptr);
    int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
    int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
    const int32_t n = 2;
    int32x4_t v4_s32 = vqdmlsl_lane_s16(v1_s32, v2_s16, v3_s16, n);
    print_vector(v4_s32);
}
