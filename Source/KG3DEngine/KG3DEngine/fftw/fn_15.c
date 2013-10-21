/*
 * Copyright (c) 1997-1999, 2003 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Mon Mar 24 02:05:42 EST 2003 */

#include "fftw-int.h"
#include "fftw.h"

/* Generated by: /homee/stevenj/cvs/fftw/gensrc/genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -notwiddle 15 */

/*
 * This function contains 156 FP additions, 56 FP multiplications,
 * (or, 128 additions, 28 multiplications, 28 fused multiply/add),
 * 62 stack variables, and 60 memory accesses
 */
static const fftw_real K587785252 =
FFTW_KONST(+0.587785252292473129168705954639072768597652438);
static const fftw_real K951056516 =
FFTW_KONST(+0.951056516295153572116439333379382143405698634);
static const fftw_real K250000000 =
FFTW_KONST(+0.250000000000000000000000000000000000000000000);
static const fftw_real K559016994 =
FFTW_KONST(+0.559016994374947424102293417182819058860154590);
static const fftw_real K500000000 =
FFTW_KONST(+0.500000000000000000000000000000000000000000000);
static const fftw_real K866025403 =
FFTW_KONST(+0.866025403784438646763723170752936183471402627);

/*
 * Generator Id's : 
 * $Id: fn_15.c,v 1.2 2008/04/08 01:23:34 yanglin Exp $
 * $Id: fn_15.c,v 1.2 2008/04/08 01:23:34 yanglin Exp $
 * $Id: fn_15.c,v 1.2 2008/04/08 01:23:34 yanglin Exp $
 */

void fftw_no_twiddle_15(const fftw_complex *input, fftw_complex *output,
			int istride, int ostride)
{
     fftw_real tmp5;
     fftw_real tmp33;
     fftw_real tmp57;
     fftw_real tmp145;
     fftw_real tmp124;
     fftw_real tmp136;
     fftw_real tmp21;
     fftw_real tmp26;
     fftw_real tmp27;
     fftw_real tmp49;
     fftw_real tmp54;
     fftw_real tmp55;
     fftw_real tmp108;
     fftw_real tmp109;
     fftw_real tmp147;
     fftw_real tmp61;
     fftw_real tmp62;
     fftw_real tmp63;
     fftw_real tmp96;
     fftw_real tmp97;
     fftw_real tmp138;
     fftw_real tmp83;
     fftw_real tmp88;
     fftw_real tmp118;
     fftw_real tmp10;
     fftw_real tmp15;
     fftw_real tmp16;
     fftw_real tmp38;
     fftw_real tmp43;
     fftw_real tmp44;
     fftw_real tmp111;
     fftw_real tmp112;
     fftw_real tmp146;
     fftw_real tmp58;
     fftw_real tmp59;
     fftw_real tmp60;
     fftw_real tmp99;
     fftw_real tmp100;
     fftw_real tmp137;
     fftw_real tmp72;
     fftw_real tmp77;
     fftw_real tmp117;
     ASSERT_ALIGNED_DOUBLE;
     {
	  fftw_real tmp1;
	  fftw_real tmp121;
	  fftw_real tmp4;
	  fftw_real tmp120;
	  fftw_real tmp32;
	  fftw_real tmp122;
	  fftw_real tmp29;
	  fftw_real tmp123;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp1 = c_re(input[0]);
	  tmp121 = c_im(input[0]);
	  {
	       fftw_real tmp2;
	       fftw_real tmp3;
	       fftw_real tmp30;
	       fftw_real tmp31;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp2 = c_re(input[5 * istride]);
	       tmp3 = c_re(input[10 * istride]);
	       tmp4 = tmp2 + tmp3;
	       tmp120 = K866025403 * (tmp3 - tmp2);
	       tmp30 = c_im(input[5 * istride]);
	       tmp31 = c_im(input[10 * istride]);
	       tmp32 = K866025403 * (tmp30 - tmp31);
	       tmp122 = tmp30 + tmp31;
	  }
	  tmp5 = tmp1 + tmp4;
	  tmp29 = tmp1 - (K500000000 * tmp4);
	  tmp33 = tmp29 - tmp32;
	  tmp57 = tmp29 + tmp32;
	  tmp145 = tmp122 + tmp121;
	  tmp123 = tmp121 - (K500000000 * tmp122);
	  tmp124 = tmp120 + tmp123;
	  tmp136 = tmp123 - tmp120;
     }
     {
	  fftw_real tmp17;
	  fftw_real tmp20;
	  fftw_real tmp45;
	  fftw_real tmp79;
	  fftw_real tmp80;
	  fftw_real tmp81;
	  fftw_real tmp48;
	  fftw_real tmp82;
	  fftw_real tmp22;
	  fftw_real tmp25;
	  fftw_real tmp50;
	  fftw_real tmp84;
	  fftw_real tmp85;
	  fftw_real tmp86;
	  fftw_real tmp53;
	  fftw_real tmp87;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp18;
	       fftw_real tmp19;
	       fftw_real tmp46;
	       fftw_real tmp47;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp17 = c_re(input[6 * istride]);
	       tmp18 = c_re(input[11 * istride]);
	       tmp19 = c_re(input[istride]);
	       tmp20 = tmp18 + tmp19;
	       tmp45 = tmp17 - (K500000000 * tmp20);
	       tmp79 = K866025403 * (tmp19 - tmp18);
	       tmp80 = c_im(input[6 * istride]);
	       tmp46 = c_im(input[11 * istride]);
	       tmp47 = c_im(input[istride]);
	       tmp81 = tmp46 + tmp47;
	       tmp48 = K866025403 * (tmp46 - tmp47);
	       tmp82 = tmp80 - (K500000000 * tmp81);
	  }
	  {
	       fftw_real tmp23;
	       fftw_real tmp24;
	       fftw_real tmp51;
	       fftw_real tmp52;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp22 = c_re(input[9 * istride]);
	       tmp23 = c_re(input[14 * istride]);
	       tmp24 = c_re(input[4 * istride]);
	       tmp25 = tmp23 + tmp24;
	       tmp50 = tmp22 - (K500000000 * tmp25);
	       tmp84 = K866025403 * (tmp24 - tmp23);
	       tmp85 = c_im(input[9 * istride]);
	       tmp51 = c_im(input[14 * istride]);
	       tmp52 = c_im(input[4 * istride]);
	       tmp86 = tmp51 + tmp52;
	       tmp53 = K866025403 * (tmp51 - tmp52);
	       tmp87 = tmp85 - (K500000000 * tmp86);
	  }
	  tmp21 = tmp17 + tmp20;
	  tmp26 = tmp22 + tmp25;
	  tmp27 = tmp21 + tmp26;
	  tmp49 = tmp45 - tmp48;
	  tmp54 = tmp50 - tmp53;
	  tmp55 = tmp49 + tmp54;
	  tmp108 = tmp81 + tmp80;
	  tmp109 = tmp86 + tmp85;
	  tmp147 = tmp108 + tmp109;
	  tmp61 = tmp45 + tmp48;
	  tmp62 = tmp50 + tmp53;
	  tmp63 = tmp61 + tmp62;
	  tmp96 = tmp82 - tmp79;
	  tmp97 = tmp87 - tmp84;
	  tmp138 = tmp96 + tmp97;
	  tmp83 = tmp79 + tmp82;
	  tmp88 = tmp84 + tmp87;
	  tmp118 = tmp83 + tmp88;
     }
     {
	  fftw_real tmp6;
	  fftw_real tmp9;
	  fftw_real tmp34;
	  fftw_real tmp68;
	  fftw_real tmp69;
	  fftw_real tmp70;
	  fftw_real tmp37;
	  fftw_real tmp71;
	  fftw_real tmp11;
	  fftw_real tmp14;
	  fftw_real tmp39;
	  fftw_real tmp73;
	  fftw_real tmp74;
	  fftw_real tmp75;
	  fftw_real tmp42;
	  fftw_real tmp76;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp7;
	       fftw_real tmp8;
	       fftw_real tmp35;
	       fftw_real tmp36;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp6 = c_re(input[3 * istride]);
	       tmp7 = c_re(input[8 * istride]);
	       tmp8 = c_re(input[13 * istride]);
	       tmp9 = tmp7 + tmp8;
	       tmp34 = tmp6 - (K500000000 * tmp9);
	       tmp68 = K866025403 * (tmp8 - tmp7);
	       tmp69 = c_im(input[3 * istride]);
	       tmp35 = c_im(input[8 * istride]);
	       tmp36 = c_im(input[13 * istride]);
	       tmp70 = tmp35 + tmp36;
	       tmp37 = K866025403 * (tmp35 - tmp36);
	       tmp71 = tmp69 - (K500000000 * tmp70);
	  }
	  {
	       fftw_real tmp12;
	       fftw_real tmp13;
	       fftw_real tmp40;
	       fftw_real tmp41;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp11 = c_re(input[12 * istride]);
	       tmp12 = c_re(input[2 * istride]);
	       tmp13 = c_re(input[7 * istride]);
	       tmp14 = tmp12 + tmp13;
	       tmp39 = tmp11 - (K500000000 * tmp14);
	       tmp73 = K866025403 * (tmp13 - tmp12);
	       tmp74 = c_im(input[12 * istride]);
	       tmp40 = c_im(input[2 * istride]);
	       tmp41 = c_im(input[7 * istride]);
	       tmp75 = tmp40 + tmp41;
	       tmp42 = K866025403 * (tmp40 - tmp41);
	       tmp76 = tmp74 - (K500000000 * tmp75);
	  }
	  tmp10 = tmp6 + tmp9;
	  tmp15 = tmp11 + tmp14;
	  tmp16 = tmp10 + tmp15;
	  tmp38 = tmp34 - tmp37;
	  tmp43 = tmp39 - tmp42;
	  tmp44 = tmp38 + tmp43;
	  tmp111 = tmp70 + tmp69;
	  tmp112 = tmp75 + tmp74;
	  tmp146 = tmp111 + tmp112;
	  tmp58 = tmp34 + tmp37;
	  tmp59 = tmp39 + tmp42;
	  tmp60 = tmp58 + tmp59;
	  tmp99 = tmp71 - tmp68;
	  tmp100 = tmp76 - tmp73;
	  tmp137 = tmp99 + tmp100;
	  tmp72 = tmp68 + tmp71;
	  tmp77 = tmp73 + tmp76;
	  tmp117 = tmp72 + tmp77;
     }
     {
	  fftw_real tmp106;
	  fftw_real tmp28;
	  fftw_real tmp105;
	  fftw_real tmp114;
	  fftw_real tmp116;
	  fftw_real tmp110;
	  fftw_real tmp113;
	  fftw_real tmp115;
	  fftw_real tmp107;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp106 = K559016994 * (tmp16 - tmp27);
	  tmp28 = tmp16 + tmp27;
	  tmp105 = tmp5 - (K250000000 * tmp28);
	  tmp110 = tmp108 - tmp109;
	  tmp113 = tmp111 - tmp112;
	  tmp114 = (K951056516 * tmp110) - (K587785252 * tmp113);
	  tmp116 = (K951056516 * tmp113) + (K587785252 * tmp110);
	  c_re(output[0]) = tmp5 + tmp28;
	  tmp115 = tmp106 + tmp105;
	  c_re(output[9 * ostride]) = tmp115 - tmp116;
	  c_re(output[6 * ostride]) = tmp115 + tmp116;
	  tmp107 = tmp105 - tmp106;
	  c_re(output[12 * ostride]) = tmp107 - tmp114;
	  c_re(output[3 * ostride]) = tmp107 + tmp114;
     }
     {
	  fftw_real tmp94;
	  fftw_real tmp56;
	  fftw_real tmp93;
	  fftw_real tmp102;
	  fftw_real tmp104;
	  fftw_real tmp98;
	  fftw_real tmp101;
	  fftw_real tmp103;
	  fftw_real tmp95;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp94 = K559016994 * (tmp44 - tmp55);
	  tmp56 = tmp44 + tmp55;
	  tmp93 = tmp33 - (K250000000 * tmp56);
	  tmp98 = tmp96 - tmp97;
	  tmp101 = tmp99 - tmp100;
	  tmp102 = (K951056516 * tmp98) - (K587785252 * tmp101);
	  tmp104 = (K951056516 * tmp101) + (K587785252 * tmp98);
	  c_re(output[5 * ostride]) = tmp33 + tmp56;
	  tmp103 = tmp94 + tmp93;
	  c_re(output[14 * ostride]) = tmp103 - tmp104;
	  c_re(output[11 * ostride]) = tmp103 + tmp104;
	  tmp95 = tmp93 - tmp94;
	  c_re(output[2 * ostride]) = tmp95 - tmp102;
	  c_re(output[8 * ostride]) = tmp95 + tmp102;
     }
     {
	  fftw_real tmp150;
	  fftw_real tmp148;
	  fftw_real tmp149;
	  fftw_real tmp154;
	  fftw_real tmp156;
	  fftw_real tmp152;
	  fftw_real tmp153;
	  fftw_real tmp155;
	  fftw_real tmp151;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp150 = K559016994 * (tmp146 - tmp147);
	  tmp148 = tmp146 + tmp147;
	  tmp149 = tmp145 - (K250000000 * tmp148);
	  tmp152 = tmp21 - tmp26;
	  tmp153 = tmp10 - tmp15;
	  tmp154 = (K951056516 * tmp152) - (K587785252 * tmp153);
	  tmp156 = (K951056516 * tmp153) + (K587785252 * tmp152);
	  c_im(output[0]) = tmp148 + tmp145;
	  tmp155 = tmp150 + tmp149;
	  c_im(output[6 * ostride]) = tmp155 - tmp156;
	  c_im(output[9 * ostride]) = tmp156 + tmp155;
	  tmp151 = tmp149 - tmp150;
	  c_im(output[3 * ostride]) = tmp151 - tmp154;
	  c_im(output[12 * ostride]) = tmp154 + tmp151;
     }
     {
	  fftw_real tmp141;
	  fftw_real tmp139;
	  fftw_real tmp140;
	  fftw_real tmp135;
	  fftw_real tmp144;
	  fftw_real tmp133;
	  fftw_real tmp134;
	  fftw_real tmp143;
	  fftw_real tmp142;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp141 = K559016994 * (tmp137 - tmp138);
	  tmp139 = tmp137 + tmp138;
	  tmp140 = tmp136 - (K250000000 * tmp139);
	  tmp133 = tmp49 - tmp54;
	  tmp134 = tmp38 - tmp43;
	  tmp135 = (K951056516 * tmp133) - (K587785252 * tmp134);
	  tmp144 = (K951056516 * tmp134) + (K587785252 * tmp133);
	  c_im(output[5 * ostride]) = tmp139 + tmp136;
	  tmp143 = tmp141 + tmp140;
	  c_im(output[11 * ostride]) = tmp143 - tmp144;
	  c_im(output[14 * ostride]) = tmp144 + tmp143;
	  tmp142 = tmp140 - tmp141;
	  c_im(output[2 * ostride]) = tmp135 + tmp142;
	  c_im(output[8 * ostride]) = tmp142 - tmp135;
     }
     {
	  fftw_real tmp119;
	  fftw_real tmp125;
	  fftw_real tmp126;
	  fftw_real tmp130;
	  fftw_real tmp131;
	  fftw_real tmp128;
	  fftw_real tmp129;
	  fftw_real tmp132;
	  fftw_real tmp127;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp119 = K559016994 * (tmp117 - tmp118);
	  tmp125 = tmp117 + tmp118;
	  tmp126 = tmp124 - (K250000000 * tmp125);
	  tmp128 = tmp58 - tmp59;
	  tmp129 = tmp61 - tmp62;
	  tmp130 = (K951056516 * tmp128) + (K587785252 * tmp129);
	  tmp131 = (K951056516 * tmp129) - (K587785252 * tmp128);
	  c_im(output[10 * ostride]) = tmp125 + tmp124;
	  tmp132 = tmp126 - tmp119;
	  c_im(output[7 * ostride]) = tmp131 + tmp132;
	  c_im(output[13 * ostride]) = tmp132 - tmp131;
	  tmp127 = tmp119 + tmp126;
	  c_im(output[ostride]) = tmp127 - tmp130;
	  c_im(output[4 * ostride]) = tmp130 + tmp127;
     }
     {
	  fftw_real tmp65;
	  fftw_real tmp64;
	  fftw_real tmp66;
	  fftw_real tmp90;
	  fftw_real tmp92;
	  fftw_real tmp78;
	  fftw_real tmp89;
	  fftw_real tmp91;
	  fftw_real tmp67;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp65 = K559016994 * (tmp60 - tmp63);
	  tmp64 = tmp60 + tmp63;
	  tmp66 = tmp57 - (K250000000 * tmp64);
	  tmp78 = tmp72 - tmp77;
	  tmp89 = tmp83 - tmp88;
	  tmp90 = (K951056516 * tmp78) + (K587785252 * tmp89);
	  tmp92 = (K951056516 * tmp89) - (K587785252 * tmp78);
	  c_re(output[10 * ostride]) = tmp57 + tmp64;
	  tmp91 = tmp66 - tmp65;
	  c_re(output[7 * ostride]) = tmp91 - tmp92;
	  c_re(output[13 * ostride]) = tmp91 + tmp92;
	  tmp67 = tmp65 + tmp66;
	  c_re(output[4 * ostride]) = tmp67 - tmp90;
	  c_re(output[ostride]) = tmp67 + tmp90;
     }
}

fftw_codelet_desc fftw_no_twiddle_15_desc = {
     "fftw_no_twiddle_15",
     (void (*)()) fftw_no_twiddle_15,
     15,
     FFTW_FORWARD,
     FFTW_NOTW,
     331,
     0,
     (const int *) 0,
};
