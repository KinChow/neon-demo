#include <iostream>
#include <arm_neon.h>
#include "compare.h"
#include "utilities.h"

void demo_vceq_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
    uint8x8_t v3_u8 = vceq_u8(v1_u8, v2_u8);
    print_vector(v3_u8);
}

void demo_vcge_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
    uint8x8_t v3_u8 = vcge_u8(v1_u8, v2_u8);
    print_vector(v3_u8);
}

void demo_vcle_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
    uint8x8_t v3_u8 = vcle_u8(v1_u8, v2_u8);
    print_vector(v3_u8);
}

void demo_vcgt_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
    uint8x8_t v3_u8 = vcgt_u8(v1_u8, v2_u8);
    print_vector(v3_u8);
}

void demo_vclt_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
    uint8x8_t v3_u8 = vclt_u8(v1_u8, v2_u8);
    print_vector(v3_u8);
}

void demo_vcage_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32x2_t v1_f32 = vcreate_f32(0.1);
    float32x2_t v2_f32 = vcreate_f32(-0.2);
    uint32x2_t v3_u32 = vcage_f32(v1_f32, v2_f32);
    print_vector(v3_u32);
}

void demo_vcale_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32x2_t v1_f32 = vcreate_f32(0.1);
    float32x2_t v2_f32 = vcreate_f32(-0.2);
    uint32x2_t v3_u32 = vcale_f32(v1_f32, v2_f32);
    print_vector(v3_u32);
}

void demo_vcagt_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32x2_t v1_f32 = vcreate_f32(0.1);
    float32x2_t v2_f32 = vcreate_f32(-0.2);
    uint32x2_t v3_u32 = vcagt_f32(v1_f32, v2_f32);
    print_vector(v3_u32);
}

void demo_vcalt_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32x2_t v1_f32 = vcreate_f32(0.1);
    float32x2_t v2_f32 = vcreate_f32(-0.2);
    uint32x2_t v3_u32 = vcalt_f32(v1_f32, v2_f32);
    print_vector(v3_u32);
}

void demo_vtst_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint8x8_t v1_u8 = vcreate_u8(0x0000000000000101);
    uint8x8_t v2_u8 = vcreate_u8(0x0000000000000110);
    uint8x8_t v3_u8 = vtst_u8(v1_u8, v2_u8);
    print_vector(v3_u8);
}
