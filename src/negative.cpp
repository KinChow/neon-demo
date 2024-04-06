#include <iostream>
#include <arm_neon.h>
#include "negative.h"
#include "utilities.h"

void demo_vneg_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vneg_s8(v1_s8);
    print_vector(v2_s8);
}

void demo_vqneg_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(-128);
    int8x8_t v2_s8 = vqneg_s8(v1_s8);
    print_vector(v2_s8);
}
