#include <iostream>
#include "config.h"
#include "abs.h"
#include "add.h"
#include "bit.h"
#include "compare.h"
#include "convert.h"
#include "count.h"
#include "create.h"
#include "get.h"
#include "load.h"
#include "manipulation.h"
#include "maxmin.h"
#include "mla.h"
#include "mls.h"
#include "mul.h"
#include "negative.h"
#include "reciprocal.h"
#include "round.h"
#include "set.h"
#include "shift.h"
#include "store.h"
#include "sub.h"

void demo_abs()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vabs_type();
    demo_vqabs_type();
    demo_vabd_type();
    demo_vaba_type();
    std::cout << std::endl;
}

void demo_add()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vadd_type();
    demo_vaddl_type();
    demo_vaddw_type();
    demo_vaddhn_type();
    demo_vqadd_type();
    demo_vhadd_type();
    demo_vrhadd_type();
    demo_vpadd_type();
    demo_vpaddl_type();
    demo_vpadal_type();
    demo_vaddv_type();
    std::cout << std::endl;
}

void demo_bit()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vmvn_type();
    demo_vand_type();
    demo_vorr_type();
    demo_veor_type();
    demo_vbic_type();
    demo_vorn_type();
    std::cout << std::endl;
}

void demo_compare()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vceq_type();
    demo_vcge_type();
    demo_vcle_type();
    demo_vcgt_type();
    demo_vclt_type();
    demo_vcage_f32();
    demo_vcale_f32();
    demo_vcagt_f32();
    demo_vcalt_f32();
    demo_vtst_type();
    std::cout << std::endl;
}

void demo_convert()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vcvt_type1_type2();
    demo_vcvt_n_type1_type2();
    demo_vreinterpret_type1_type2();
    std::cout << std::endl;
}

void demo_count()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vcls_type();
    demo_vclz_type();
    demo_vcnt_type();
    std::cout << std::endl;
}

void demo_create()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vcreate_type();
    demo_vdup_n_type();
    demo_vdupq_n_type();
    demo_vdup_lane_type();
    demo_vdupq_lane_type();
    demo_vmov_n_type();
    demo_vmovq_n_type();
    demo_vmovl_type();
    demo_vmovn_type();
    demo_vqmovn_type();
    demo_vqmovun_type();
    std::cout << std::endl;
}

void demo_get()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vget_low_type();
    demo_vget_high_type();
    demo_vget_lane_type();
    std::cout << std::endl;
}

void demo_load()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vld1q_type();
    demo_vld1q_lane_type();
    demo_vld1q_dup_type();
    demo_vld2_type();
    demo_vld2_lane_type();
    demo_vld2_dup_type();
    std::cout << std::endl;
}

void demo_manipulation()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vext_type();
    demo_vtbl1_type();
    demo_vtbl2_type();
    demo_vtbx1_type();
    demo_vtbx2_type();
    demo_vrev16_type();
    demo_vrev32_type();
    demo_vrev64_type();
    demo_vtrn_type();
    demo_vzip_type();
    demo_vuzp_type();
    demo_vcombine_type();
    demo_vbsl_type();
    std::cout << std::endl;
}

void demo_maxmin()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vmax_type();
    demo_vpmax_type();
    demo_vmin_type();
    demo_vpmin_type();
    std::cout << std::endl;
}

void demo_mla()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vmlal_type();
    demo_vmlal_n_type();
    demo_vmlal_lane_type();
    demo_vfma_f32();
    demo_vqdmlal_type();
    demo_vqdmlal_n_type();
    demo_vqdmlal_lane_type();
    std::cout << std::endl;
}

void demo_mls()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vmls_type();
    demo_vmls_n_type();
    demo_vmls_lane_type();
    demo_vmlsl_type();
    demo_vmlsl_n_type();
    demo_vmlsl_lane_type();
    demo_vfms_f32();
    demo_vqdmlsl_type();
    demo_vqdmlsl_n_type();
    demo_vqdmlsl_lane_type();
    std::cout << std::endl;
}

void demo_mul()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vmul_type();
    demo_vmul_n_type();
    demo_vmul_lane_type();
    demo_vmull_type();
    demo_vmull_n_type();
    demo_vmull_lane_type();
    demo_vqdmull_type();
    demo_vqdmull_n_type();
    demo_vqdmull_lane_type();
    demo_vqdmulh_type();
    demo_vqdmulh_n_type();
    demo_vqdmulh_lane_type();
    std::cout << std::endl;
}

void demo_negative()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vneg_type();
    demo_vqneg_type();
    std::cout << std::endl;
}

void demo_reciprocal()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vrecpe_f32();
    demo_vrecps_f32();
    demo_vrsqrte_f32();
    demo_vrsqrts_f32();
    std::cout << std::endl;
}

void demo_round()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vrndn_f32();
    demo_vrnda_f32();
    demo_vrndp_f32();
    demo_vrndm_f32();
    demo_vrnd_f32();
    std::cout << std::endl;
}

void demo_set()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vset_lane_type();
    std::cout << std::endl;
}

void demo_shift()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vshl_type();
    demo_vshl_n_type();
    demo_vqshl_type();
    demo_vqshl_n_type();
    demo_vqshlu_n_type();
    demo_vshll_n_type();
    demo_vsra_n_type();
    std::cout << std::endl;
}

void demo_store()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vst1_type();
    demo_vst1_lane_type();
    demo_vst2q_type();
    demo_vst2q_lane_type();
    std::cout << std::endl;
}

void demo_sub()
{
    std::cout << __FUNCTION__ << std::endl;
    demo_vsub_type();
    demo_vsubl_type();
    demo_vsubw_type();
    demo_vsubhn_type();
    demo_vqsub_type();
    demo_vhsub_type();
    std::cout << std::endl;
}

int main()
{
    std::cout << PROJECT_NAME << std::endl;
    demo_abs();
    demo_add();
    demo_bit();
    demo_compare();
    demo_convert();
    demo_count();
    demo_create();
    demo_get();
    demo_load();
    demo_manipulation();
    demo_maxmin();
    demo_mla();
    demo_mls();
    demo_mul();
    demo_negative();
    demo_reciprocal();
    demo_round();
    demo_set();
    demo_shift();
    demo_store();
    demo_sub();
    return 0;
}