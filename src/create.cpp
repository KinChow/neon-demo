#include <iostream>
#include <arm_neon.h>
#include "create.h"
#include "utilities.h"

void demo_vcreate_type()
{
    std::cout << __FUNCTION__ << std::endl;
    uint64_t v = 256;
    int8x8_t v_s8 = vcreate_s8(v);
    int16x4_t v_s16 = vcreate_s16(v);
    int32x2_t v_s32 = vcreate_s32(v);
    int64x1_t v_s64 = vcreate_s64(v);
    uint8x8_t v_u8 = vcreate_u8(v);
    uint16x4_t v_u16 = vcreate_u16(v);
    uint32x2_t v_u32 = vcreate_u32(v);
    uint64x1_t v_u64 = vcreate_u64(v);
    float16x4_t v_f16 = vcreate_f16(v);
    float32x2_t v_f32 = vcreate_f32(v);
    float64x1_t v_f64 = vcreate_f64(v);
    print_vector(v_s8);
    print_vector(v_s16);
    print_vector(v_s32);
    print_vector(v_s64);
    print_vector(v_u8);
    print_vector(v_u16);
    print_vector(v_u32);
    print_vector(v_u64);
    print_vector(v_f16);
    print_vector(v_f32);
    print_vector(v_f64);
}

void demo_vdup_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v_s8 = vdup_n_s8(-1);
    int16x4_t v_s16 = vdup_n_s16(-2);
    int32x2_t v_s32 = vdup_n_s32(-3);
    int64x1_t v_s64 = vdup_n_s64(-4);
    uint8x8_t v_u8 = vdup_n_u8(5);
    uint16x4_t v_u16 = vdup_n_u16(6);
    uint32x2_t v_u32 = vdup_n_u32(7);
    uint64x1_t v_u64 = vdup_n_u64(8);
    float16x4_t v_f16 = vdup_n_f16(1.2);
    float32x2_t v_f32 = vdup_n_f32(2.4);
    float64x1_t v_f64 = vdup_n_f64(3.6);
    print_vector(v_s8);
    print_vector(v_s16);
    print_vector(v_s32);
    print_vector(v_s64);
    print_vector(v_u8);
    print_vector(v_u16);
    print_vector(v_u32);
    print_vector(v_u64);
    print_vector(v_f16);
    print_vector(v_f32);
    print_vector(v_f64);
}

void demo_vdupq_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x16_t v_s8 = vdupq_n_s8(-1);
    int16x8_t v_s16 = vdupq_n_s16(-2);
    int32x4_t v_s32 = vdupq_n_s32(-3);
    int64x2_t v_s64 = vdupq_n_s64(-4);
    uint8x16_t v_u8 = vdupq_n_u8(5);
    uint16x8_t v_u16 = vdupq_n_u16(6);
    uint32x4_t v_u32 = vdupq_n_u32(7);
    uint64x2_t v_u64 = vdupq_n_u64(8);
    float16x8_t v_f16 = vdupq_n_f16(1.2);
    float32x4_t v_f32 = vdupq_n_f32(2.4);
    float64x2_t v_f64 = vdupq_n_f64(3.6);
    print_vector(v_s8);
    print_vector(v_s16);
    print_vector(v_s32);
    print_vector(v_s64);
    print_vector(v_u8);
    print_vector(v_u16);
    print_vector(v_u32);
    print_vector(v_u64);
    print_vector(v_f16);
    print_vector(v_f32);
    print_vector(v_f64);
}

void demo_vdup_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0102030405060708);
    int8x8_t v2_s8 = vdup_lane_s8(v1_s8, 6);
    print_vector(v1_s8);
    print_vector(v2_s8);
}

void demo_vdupq_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v1_s8 = vcreate_s8(0x0102030405060708);
    int8x16_t v2_s8 = vdupq_lane_s8(v1_s8, 2);
    print_vector(v1_s8);
    print_vector(v2_s8);
}

void demo_vmov_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v_s8 = vmov_n_s8(-1);
    int16x4_t v_s16 = vmov_n_s16(-2);
    int32x2_t v_s32 = vmov_n_s32(-3);
    int64x1_t v_s64 = vmov_n_s64(-4);
    uint8x8_t v_u8 = vmov_n_u8(5);
    uint16x4_t v_u16 = vmov_n_u16(6);
    uint32x2_t v_u32 = vmov_n_u32(7);
    uint64x1_t v_u64 = vmov_n_u64(8);
    float16x4_t v_f16 = vmov_n_f16(1.2);
    float32x2_t v_f32 = vmov_n_f32(2.4);
    float64x1_t v_f64 = vmov_n_f64(3.6);
    print_vector(v_s8);
    print_vector(v_s16);
    print_vector(v_s32);
    print_vector(v_s64);
    print_vector(v_u8);
    print_vector(v_u16);
    print_vector(v_u32);
    print_vector(v_u64);
    print_vector(v_f16);
    print_vector(v_f32);
    print_vector(v_f64);
}

void demo_vmovq_n_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x16_t v_s8 = vmovq_n_s8(-1);
    int16x8_t v_s16 = vmovq_n_s16(-2);
    int32x4_t v_s32 = vmovq_n_s32(-3);
    int64x2_t v_s64 = vmovq_n_s64(-4);
    uint8x16_t v_u8 = vmovq_n_u8(5);
    uint16x8_t v_u16 = vmovq_n_u16(6);
    uint32x4_t v_u32 = vmovq_n_u32(7);
    uint64x2_t v_u64 = vmovq_n_u64(8);
    float16x8_t v_f16 = vmovq_n_f16(1.2);
    float32x4_t v_f32 = vmovq_n_f32(2.4);
    float64x2_t v_f64 = vmovq_n_f64(3.6);
    print_vector(v_s8);
    print_vector(v_s16);
    print_vector(v_s32);
    print_vector(v_s64);
    print_vector(v_u8);
    print_vector(v_u16);
    print_vector(v_u32);
    print_vector(v_u64);
    print_vector(v_f16);
    print_vector(v_f32);
    print_vector(v_f64);
}

void demo_vmovl_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int8x8_t v_s8 = vcreate_s8(0x0102030405060708);
    int16x8_t v_s16 = vmovl_s8(v_s8);
    int32x4_t v_s32 = vmovl_high_s16(v_s16);
    print_vector(v_s8);
    print_vector(v_s16);
    print_vector(v_s32);
}

void demo_vmovn_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x8_t v_s16 = vmovq_n_s16(128);
    int8x8_t v_s8 = vmovn_s16(v_s16);
    print_vector(v_s16);
    print_vector(v_s8);
}

void demo_vqmovn_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x8_t v_s16 = vmovq_n_s16(128);
    int8x8_t v_s8 = vqmovn_s16(v_s16);
    print_vector(v_s16);
    print_vector(v_s8);
}

void demo_vqmovun_type()
{
    std::cout << __FUNCTION__ << std::endl;
    int16x8_t v_s16 = vmovq_n_s16(-1);
    uint8x8_t v_u8 = vqmovun_s16(v_s16);
    print_vector(v_s16);
    print_vector(v_u8);
}