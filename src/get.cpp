#include <iostream>
#include <arm_neon.h>
#include "get.h"
#include "utilities.h"

void demo_vget_low_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int8x16_t v1_s8 = vld1q_s8(ptr);
    int8x8_t v2_s8 = vget_low_s8(v1_s8);
    print_vector(v2_s8);
}

void demo_vget_high_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int8x16_t v1_s8 = vld1q_s8(ptr);
    int8x8_t v2_s8 = vget_high_s8(v1_s8);
    print_vector(v2_s8);
}

void demo_vget_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v_s8 = vcreate_s8(0x0102030405060708);
    int8_t data = vget_lane_s8(v_s8, 1);
    std::cout << static_cast<int64_t>(data) << std::endl;
}