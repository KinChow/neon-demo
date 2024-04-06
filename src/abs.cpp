#include <iostream>
#include <arm_neon.h>
#include "abs.h"
#include "utilities.h"

void demo_vabs_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v_s8 = vdup_n_s8(-1);
    print_vector(v_s8);
    v_s8 = vabs_s8(v_s8);
    print_vector(v_s8);
}

void demo_vqabs_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v_s8 = vdup_n_s8(-128);
    print_vector(v_s8);
    v_s8 = vqabs_s8(v_s8);
    print_vector(v_s8);
}

void demo_vabd_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(-1);
    int8x8_t v2_s8 = vdup_n_s8(1);
    int8x8_t v3_s8 = vabd_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vaba_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(-1);
    int8x8_t v2_s8 = vdup_n_s8(2);
    int8x8_t v3_s8 = vdup_n_s8(3);
    int8x8_t v4_s8 = vaba_s8(v1_s8, v2_s8, v3_s8);
    print_vector(v4_s8);
}