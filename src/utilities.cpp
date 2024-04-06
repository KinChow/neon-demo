#include <iostream>
#include "utilities.h"

void print_vector(int8x16_t v)
{
    int8_t v_s8[16];
    vst1q_s8(v_s8, v);
    for (int i = 0; i < 16; i++) {
        std::cout << static_cast<int64_t>(v_s8[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(int16x8_t v)
{
    int16_t v_s16[8];
    vst1q_s16(v_s16, v);
    for (int i = 0; i < 8; i++) {
        std::cout << static_cast<int64_t>(v_s16[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(int32x4_t v)
{
    int32_t v_s32[4];
    vst1q_s32(v_s32, v);
    for (int i = 0; i < 4; i++) {
        std::cout << static_cast<int64_t>(v_s32[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(int64x2_t v)
{
    int64_t v_s64[2];
    vst1q_s64(v_s64, v);
    for (int i = 0; i < 2; i++) {
        std::cout << static_cast<int64_t>(v_s64[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(uint8x16_t v)
{
    uint8_t v_u8[16];
    vst1q_u8(v_u8, v);
    for (int i = 0; i < 16; i++) {
        std::cout << static_cast<uint64_t>(v_u8[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(uint16x8_t v)
{
    uint16_t v_u16[8];
    vst1q_u16(v_u16, v);
    for (int i = 0; i < 8; i++) {
        std::cout << static_cast<uint64_t>(v_u16[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(uint32x4_t v)
{
    uint32_t v_u32[4];
    vst1q_u32(v_u32, v);
    for (int i = 0; i < 4; i++) {
        std::cout << static_cast<uint64_t>(v_u32[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(uint64x2_t v)
{
    uint64_t v_u64[2];
    vst1q_u64(v_u64, v);
    for (int i = 0; i < 2; i++) {
        std::cout << static_cast<uint64_t>(v_u64[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(float16x8_t v)
{
    float16_t v_f16[8];
    vst1q_f16(v_f16, v);
    for (int i = 0; i < 8; i++) {
        std::cout << static_cast<float64_t>(v_f16[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(float32x4_t v)
{
    float32_t v_f32[4];
    vst1q_f32(v_f32, v);
    for (int i = 0; i < 4; i++) {
        std::cout << static_cast<float64_t>(v_f32[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(float64x2_t v)
{
    float64_t v_f64[2];
    vst1q_f64(v_f64, v);
    for (int i = 0; i < 2; i++) {
        std::cout << static_cast<float64_t>(v_f64[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(int8x8_t v)
{
    int8_t v_s8[8];
    vst1_s8(v_s8, v);
    for (int i = 0; i < 8; i++) {
        std::cout << static_cast<int64_t>(v_s8[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(int16x4_t v)
{
    int16_t v_s16[4];
    vst1_s16(v_s16, v);
    for (int i = 0; i < 4; i++) {
        std::cout << static_cast<int64_t>(v_s16[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(int32x2_t v)
{
    int32_t v_s32[2];
    vst1_s32(v_s32, v);
    for (int i = 0; i < 2; i++) {
        std::cout << static_cast<int64_t>(v_s32[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(int64x1_t v)
{
    int64_t v_s64[1];
    vst1_s64(v_s64, v);
    for (int i = 0; i < 1; i++) {
        std::cout << static_cast<int64_t>(v_s64[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(uint8x8_t v)
{
    uint8_t v_u8[8];
    vst1_u8(v_u8, v);
    for (int i = 0; i < 8; i++) {
        std::cout << static_cast<uint64_t>(v_u8[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(uint16x4_t v)
{
    uint16_t v_u16[4];
    vst1_u16(v_u16, v);
    for (int i = 0; i < 4; i++) {
        std::cout << static_cast<uint64_t>(v_u16[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(uint32x2_t v)
{
    uint32_t v_u32[2];
    vst1_u32(v_u32, v);
    for (int i = 0; i < 2; i++) {
        std::cout << static_cast<uint64_t>(v_u32[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(uint64x1_t v)
{
    uint64_t v_u64[1];
    vst1_u64(v_u64, v);
    for (int i = 0; i < 1; i++) {
        std::cout << static_cast<uint64_t>(v_u64[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(float16x4_t v)
{
    float16_t v_f16[4];
    vst1_f16(v_f16, v);
    for (int i = 0; i < 4; i++) {
        std::cout << static_cast<float64_t>(v_f16[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(float32x2_t v)
{
    float32_t v_f32[2];
    vst1_f32(v_f32, v);
    for (int i = 0; i < 2; i++) {
        std::cout << static_cast<float64_t>(v_f32[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(float64x1_t v)
{
    float64_t v_f64[1];
    vst1_f64(v_f64, v);
    for (int i = 0; i < 1; i++) {
        std::cout << static_cast<float64_t>(v_f64[i]) << " ";
    }
    std::cout << std::endl;
}

void print_vector(int8x16x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(int16x8x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(int32x4x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(int64x2x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(uint8x16x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(uint16x8x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(uint32x4x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(uint64x2x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(float16x8x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(float32x4x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(float64x2x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(int8x8x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(int16x4x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(int32x2x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(int64x1x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(uint8x8x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(uint16x4x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(uint32x2x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(uint64x1x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(float16x4x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(float32x2x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}

void print_vector(float64x1x2_t v)
{
    for (int i = 0; i < 2; i++) {
        print_vector(v.val[i]);
    }
}
