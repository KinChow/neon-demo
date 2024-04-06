#include <iostream>
#include <arm_neon.h>
#include "round.h"
#include "utilities.h"

void demo_vrndn_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32_t ptr[2] = {2.5, -1.5};
    float32x2_t v1_f32 = vld1_f32(ptr);
    float32x2_t v2_f32 = vrndn_f32(v1_f32);
    print_vector(v2_f32);
}

void demo_vrnda_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32_t ptr[2] = {2.5, -1.5};
    float32x2_t v1_f32 = vld1_f32(ptr);
    float32x2_t v2_f32 = vrnda_f32(v1_f32);
    print_vector(v2_f32);
}

void demo_vrndp_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32_t ptr[2] = {2.5, -1.5};
    float32x2_t v1_f32 = vld1_f32(ptr);
    float32x2_t v2_f32 = vrndp_f32(v1_f32);
    print_vector(v2_f32);
}

void demo_vrndm_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32_t ptr[2] = {2.5, -1.5};
    float32x2_t v1_f32 = vld1_f32(ptr);
    float32x2_t v2_f32 = vrndm_f32(v1_f32);
    print_vector(v2_f32);
}

void demo_vrnd_f32()
{
    std::cout << __FUNCTION__ << std::endl;
    float32_t ptr[2] = {2.5, -1.5};
    float32x2_t v1_f32 = vld1_f32(ptr);
    float32x2_t v2_f32 = vrnd_f32(v1_f32);
    print_vector(v2_f32);
}
