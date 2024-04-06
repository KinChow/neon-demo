#include <iostream>
#include <arm_neon.h>
#include "maxmin.h"
#include "utilities.h"

void demo_vmax_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c04030201);
    int8x8_t v2_s8 = vcreate_s8(0x080706050b0a0908);
    int8x8_t v3_s8 = vmax_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vpmax_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c04030201);
    int8x8_t v2_s8 = vcreate_s8(0x080706050b0a0908);
    int8x8_t v3_s8 = vpmax_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vmin_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c04030201);
    int8x8_t v2_s8 = vcreate_s8(0x080706050b0a0908);
    int8x8_t v3_s8 = vmin_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vpmin_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c04030201);
    int8x8_t v2_s8 = vcreate_s8(0x080706050b0a0908);
    int8x8_t v3_s8 = vpmin_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}
