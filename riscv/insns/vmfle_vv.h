// vmfle.vv vd, vs2, rs1
VI_VFP_VV_LOOP_CMP
({
  res = f8_1_le(vs2, vs1);
},
{
  res = f8_2_le(vs2, vs1);
},
{
  res = f16_le(vs2, vs1);
},
{
  res = f32_le(vs2, vs1);
},
{
  res = f64_le(vs2, vs1);
})
