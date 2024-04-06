#include <iostream>
#include <arm_neon.h>
#include "set.h"
#include "utilities.h"

void demo_vset_lane_type()
{
    std::cout << __FUNCTION__ << std::endl;
    float32_t ptr[2] = {2.5, -2.5};
    float32x2_t v1_f32 = vld1_f32(ptr);
    print_vector(v1_f32);
    float32x2_t v2_f32 = vset_lane_f32(2.5, v1_f32, 1);
    print_vector(v2_f32);
}
