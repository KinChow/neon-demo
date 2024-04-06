#include <iostream>
#include <arm_neon.h>
#include "load.h"
#include "utilities.h"

void demo_vld1q_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int8x16_t v_s8 = vld1q_s8(ptr);
    print_vector(v_s8);
}

void demo_vld1q_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x16_t v1_s8 = vdupq_n_s8(0);
    int8_t ptr[16] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    int8x16_t v2_s8 = vld1q_lane_s8(ptr, v1_s8, 3);
    print_vector(v1_s8);
    print_vector(v2_s8);
}

void demo_vld1q_dup_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int8x16_t v_s8 = vld1q_dup_s8(ptr);
    print_vector(v_s8);
}

void demo_vld2_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int8x8x2_t v_s8 = vld2_s8(ptr);
    print_vector(v_s8);
}

void demo_vld2_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8x2_t v1_s8;
    v1_s8.val[0] = vdup_n_s8(0);
    v1_s8.val[1] = vdup_n_s8(0);
    int8_t ptr[16] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    int8x8x2_t v2_s8 = vld2_lane_s8(ptr, v1_s8, 3);
    print_vector(v1_s8);
    print_vector(v2_s8);
}

void demo_vld2_dup_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int8x8x2_t v_s8 = vld2_dup_s8(ptr);
    print_vector(v_s8);
}