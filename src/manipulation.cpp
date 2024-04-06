#include <iostream>
#include <arm_neon.h>
#include "manipulation.h"
#include "utilities.h"

void demo_vext_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
    int8x8_t v2_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v3_s8 = vext_s8(v1_s8, v2_s8, 3);
    print_vector(v3_s8);
}

void demo_vtbl1_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
    int8x8_t v2_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v3_s8 = vtbl1_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vtbl2_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8x2_t v1_s8;
    v1_s8.val[0] = vcreate_s8(0x0f0e0d0c0b0a0908);
    v1_s8.val[1] = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v3_s8 = vtbl2_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
}

void demo_vtbx1_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(4);
    int8x8_t v2_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
    int8x8_t v3_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v4_s8 = vtbx1_s8(v1_s8, v2_s8, v3_s8);
    print_vector(v4_s8);
}

void demo_vtbx2_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vdup_n_s8(4);
    int8x8x2_t v2_s8;
    v2_s8.val[0] = vcreate_s8(0x0f0e0d0c0b0a0908);
    v2_s8.val[1] = vcreate_s8(0x0807060504030201);
    int8x8_t v3_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v4_s8 = vtbx2_s8(v1_s8, v2_s8, v3_s8);
    print_vector(v4_s8);
}

void demo_vrev16_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vrev16_s8(v1_s8);
    print_vector(v2_s8);
}

void demo_vrev32_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vrev32_s8(v1_s8);
    print_vector(v2_s8);
}

void demo_vrev64_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vrev64_s8(v1_s8);
    print_vector(v2_s8);
}

void demo_vtrn_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
    int8x8x2_t v3_s8 = vtrn_s8(v1_s8, v2_s8);
    int8x8_t v4_s8 = vtrn1_s8(v1_s8, v2_s8);
    int8x8_t v5_s8 = vtrn2_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
    print_vector(v4_s8);
    print_vector(v5_s8);
}

void demo_vzip_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
    int8x8x2_t v3_s8 = vzip_s8(v1_s8, v2_s8);
    int8x8_t v4_s8 = vzip1_s8(v1_s8, v2_s8);
    int8x8_t v5_s8 = vzip2_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
    print_vector(v4_s8);
    print_vector(v5_s8);
}

void demo_vuzp_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
    int8x8x2_t v3_s8 = vuzp_s8(v1_s8, v2_s8);
    int8x8_t v4_s8 = vuzp1_s8(v1_s8, v2_s8);
    int8x8_t v5_s8 = vuzp2_s8(v1_s8, v2_s8);
    print_vector(v3_s8);
    print_vector(v4_s8);
    print_vector(v5_s8);
}

void demo_vcombine_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v2_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
    int8x16_t v3_s16 = vcombine_s8(v1_s8, v2_s8);
    print_vector(v3_s16);
}

void demo_vbsl_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0000000000000F0F);
    int8x8_t v2_s8 = vcreate_s8(0x0807060504030201);
    int8x8_t v3_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
    int8x8_t v4_s8 = vbsl_s8(v1_u8, v2_s8, v3_s8);
    print_vector(v4_s8);
}
