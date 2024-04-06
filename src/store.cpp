#include <iostream>
#include <arm_neon.h>
#include "store.h"
#include "utilities.h"

void demo_vst1_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[2] = {0};
    int32x2_t v_s32 = vcreate_s32(0x0000000800000004);
    vst1_s32(ptr, v_s32);
    for (int i = 0; i < 2; i++) {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;
}

void demo_vst1_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[2] = {0};
    int32x2_t v_s32 = vcreate_s32(0x0000000800000004);
    vst1_lane_s32(ptr, v_s32, 1);
    for (int i = 0; i < 2; i++) {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;
}

void demo_vst2q_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[8] = {0};
    int32x4x2_t v_s32;
    v_s32.val[0] = vdupq_n_s32(0);
    v_s32.val[1] = vdupq_n_s32(1);
    vst2q_s32(ptr, v_s32);
    for (int i = 0; i < 8; i++) {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;
}

void demo_vst2q_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int32_t ptr[8] = {0};
    int32x4x2_t v_s32;
    v_s32.val[0] = vdupq_n_s32(1);
    v_s32.val[1] = vdupq_n_s32(2);
    vst2q_lane_s32(ptr, v_s32, 1);
    for (int i = 0; i < 8; i++) {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;
}