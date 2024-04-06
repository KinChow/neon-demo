#include <iostream>
#include <arm_neon.h>
#include "reciprocal.h"
#include "utilities.h"

void demo_vrecpe_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32x2_t v1_f32 = vdup_n_f32(1.0f);
    float32x2_t v2_f32 = vrecpe_f32(v1_f32);
    print_vector(v2_f32);
}

void demo_vrecps_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32x2_t v1_f32 = vdup_n_f32(1.0f);
    float32x2_t v2_f32 = vdup_n_f32(2.5f);
    float32x2_t v3_f32 = vrecps_f32(v1_f32, v2_f32);
    print_vector(v3_f32);
    float32x2_t v4_f32 = vrecpe_f32(v1_f32);
    print_vector(v4_f32);
    v4_f32 = vmul_f32(vrecps_f32(v1_f32, v4_f32), v4_f32);
    print_vector(v4_f32);
    v4_f32 = vmul_f32(vrecps_f32(v1_f32, v4_f32), v4_f32);
    print_vector(v4_f32);
}

void demo_vrsqrte_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32_t ptr[2] = {9, 0};
    float32x2_t v1_f32 = vld1_f32(ptr);
    float32x2_t v2_f32 = vrsqrte_f32(v1_f32);
    print_vector(v2_f32);
}

void demo_vrsqrts_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32_t ptr1[2] = {4, -4};
    float32x2_t v1_f32 = vld1_f32(ptr1);
    float32_t ptr2[2] = {1, 25};
    float32x2_t v2_f32 = vld1_f32(ptr2);
    float32x2_t v3_f32 = vrsqrts_f32(v1_f32, v2_f32);
    print_vector(v3_f32);
}
