#include <iostream>
#include <arm_neon.h>
#include "bit.h"
#include "utilities.h"

void demo_vmvn_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
    uint8x8_t v2_u8 = vmvn_u8(v1_u8);
    print_vector(v1_u8);
    print_vector(v2_u8);
}

void demo_vand_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000004000001);
    uint8x8_t v3_u8 = vand_u8(v1_u8, v2_u8);
    print_vector(v1_u8);
    print_vector(v2_u8);
    print_vector(v3_u8);
}

void demo_vorr_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000001000001);
    uint8x8_t v3_u8 = vorr_u8(v1_u8, v2_u8);
    print_vector(v1_u8);
    print_vector(v2_u8);
    print_vector(v3_u8);
}

void demo_veor_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000001000001);
    uint8x8_t v3_u8 = veor_u8(v1_u8, v2_u8);
    print_vector(v1_u8);
    print_vector(v2_u8);
    print_vector(v3_u8);
}

void demo_vbic_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000001000001);
    uint8x8_t v3_u8 = vbic_u8(v1_u8, v2_u8);
    print_vector(v1_u8);
    print_vector(v2_u8);
    print_vector(v3_u8);
}

void demo_vorn_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0000000000000001);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000001000001);
    uint8x8_t v3_u8 = vorn_u8(v1_u8, v2_u8);
    print_vector(v1_u8);
    print_vector(v2_u8);
    print_vector(v3_u8);
}
