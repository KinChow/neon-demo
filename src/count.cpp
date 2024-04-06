#include <iostream>
#include <arm_neon.h>
#include "count.h"
#include "utilities.h"

void demo_vcls_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vcls_s8(v1_s8);
    print_vector(v2_s8);
}

void demo_vclz_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vclz_s8(v1_s8);
    print_vector(v2_s8);
}

void demo_vcnt_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vcnt_s8(v1_s8);
    print_vector(v2_s8);
}
