// vmfeq.vf vd, vs2, fs1
VI_VFP_VF_LOOP_CMP
({
  res = f8_1_eq(vs2, rs1);
},
{
  res = f8_2_eq(vs2, rs1);
},
{
  res = f16_eq(vs2, rs1);
},
{
  res = f32_eq(vs2, rs1);
},
{
  res = f64_eq(vs2, rs1);
})
