#include <iostream>
#include <arm_neon.h>
#include "shift.h"
#include "utilities.h"

void demo_vshl_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t v1[2] = {8, -8};
    int32x2_t v1_s32 = vld1_s32(v1);
    int32x2_t v2_s32 = vdup_n_s32(1);
    int32x2_t v3_s32 = vshl_s32(v1_s32, v2_s32);
    print_vector(v3_s32);
}

void demo_vshl_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t v1[2] = {8, -8};
    int32x2_t v1_s32 = vld1_s32(v1);
    const int n = 1;
    int32x2_t v2_s32 = vshl_n_s32(v1_s32, n);
    print_vector(v2_s32);
}

void demo_vqshl_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t v1[2] = {2147483647, -2147483648};
    int32x2_t v1_s32 = vld1_s32(v1);
    int32x2_t v2_s32 = vdup_n_s32(1);
    int32x2_t v3_s32 = vqshl_s32(v1_s32, v2_s32);
    print_vector(v3_s32);
}

void demo_vqshl_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t v1[2] = {2147483647, -2147483648};
    int32x2_t v1_s32 = vld1_s32(v1);
    const int n = 1;
    int32x2_t v2_s32 = vqshl_n_s32(v1_s32, n);
    print_vector(v2_s32);
}

void demo_vqshlu_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t v1[2] = {2147483647, -2147483648};
    int32x2_t v1_s32 = vld1_s32(v1);
    const int n = 1;
    uint32x2_t v2_u32 = vqshlu_n_s32(v1_s32, n);
    print_vector(v2_u32);
}

void demo_vshll_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t v1[2] = {2147483647, -2147483648};
    int32x2_t v1_s32 = vld1_s32(v1);
    const int n = 1;
    int64x2_t v2_s64 = vshll_n_s32(v1_s32, n);
    print_vector(v2_s64);
}

void demo_vsra_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t v1[2] = {8, -8};
    int32x2_t v1_s32 = vld1_s32(v1);
    int32x2_t v2_s32 = vdup_n_s32(2);
    const int n = 1;
    int32x2_t v3_s32 = vsra_n_s32(v1_s32, v2_s32, n);
    print_vector(v3_s32);
}
