// vfmax
VI_VFP_VV_LOOP
({
  vd = f8_1_max(vs2, vs1);
},
{
  vd = f8_2_max(vs2, vs1);
},
{
  vd = f16_max(vs2, vs1);
},
{
  vd = f32_max(vs2, vs1);
},
{
  vd = f64_max(vs2, vs1);
})
