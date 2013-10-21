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
/* Generated on Mon Mar 24 02:05:49 EST 2003 */

#include "fftw-int.h"
#include "fftw.h"

/* Generated by: /homee/stevenj/cvs/fftw/gensrc/genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -notwiddle 32 */

/*
 * This function contains 372 FP additions, 84 FP multiplications,
 * (or, 340 additions, 52 multiplications, 32 fused multiply/add),
 * 92 stack variables, and 128 memory accesses
 */
static const fftw_real K831469612 =
FFTW_KONST(+0.831469612302545237078788377617905756738560812);
static const fftw_real K555570233 =
FFTW_KONST(+0.555570233019602224742830813948532874374937191);
static const fftw_real K195090322 =
FFTW_KONST(+0.195090322016128267848284868477022240927691618);
static const fftw_real K980785280 =
FFTW_KONST(+0.980785280403230449126182236134239036973933731);
static const fftw_real K923879532 =
FFTW_KONST(+0.923879532511286756128183189396788286822416626);
static const fftw_real K382683432 =
FFTW_KONST(+0.382683432365089771728459984030398866761344562);
static const fftw_real K707106781 =
FFTW_KONST(+0.707106781186547524400844362104849039284835938);

/*
 * Generator Id's : 
 * $Id: fn_32.c,v 1.2 2008/04/08 01:23:34 yanglin Exp $
 * $Id: fn_32.c,v 1.2 2008/04/08 01:23:34 yanglin Exp $
 * $Id: fn_32.c,v 1.2 2008/04/08 01:23:34 yanglin Exp $
 */

void fftw_no_twiddle_32(const fftw_complex *input, fftw_complex *output,
			int istride, int ostride)
{
     fftw_real tmp7;
     fftw_real tmp275;
     fftw_real tmp70;
     fftw_real tmp309;
     fftw_real tmp97;
     fftw_real tmp215;
     fftw_real tmp179;
     fftw_real tmp241;
     fftw_real tmp14;
     fftw_real tmp310;
     fftw_real tmp77;
     fftw_real tmp276;
     fftw_real tmp182;
     fftw_real tmp216;
     fftw_real tmp104;
     fftw_real tmp242;
     fftw_real tmp153;
     fftw_real tmp233;
     fftw_real tmp53;
     fftw_real tmp60;
     fftw_real tmp351;
     fftw_real tmp306;
     fftw_real tmp330;
     fftw_real tmp352;
     fftw_real tmp353;
     fftw_real tmp354;
     fftw_real tmp170;
     fftw_real tmp236;
     fftw_real tmp301;
     fftw_real tmp329;
     fftw_real tmp164;
     fftw_real tmp237;
     fftw_real tmp173;
     fftw_real tmp234;
     fftw_real tmp22;
     fftw_real tmp280;
     fftw_real tmp313;
     fftw_real tmp85;
     fftw_real tmp112;
     fftw_real tmp185;
     fftw_real tmp220;
     fftw_real tmp245;
     fftw_real tmp29;
     fftw_real tmp283;
     fftw_real tmp312;
     fftw_real tmp92;
     fftw_real tmp119;
     fftw_real tmp184;
     fftw_real tmp223;
     fftw_real tmp244;
     fftw_real tmp126;
     fftw_real tmp229;
     fftw_real tmp38;
     fftw_real tmp45;
     fftw_real tmp346;
     fftw_real tmp295;
     fftw_real tmp327;
     fftw_real tmp347;
     fftw_real tmp348;
     fftw_real tmp349;
     fftw_real tmp143;
     fftw_real tmp226;
     fftw_real tmp290;
     fftw_real tmp326;
     fftw_real tmp137;
     fftw_real tmp227;
     fftw_real tmp146;
     fftw_real tmp230;
     ASSERT_ALIGNED_DOUBLE;
     {
	  fftw_real tmp3;
	  fftw_real tmp95;
	  fftw_real tmp66;
	  fftw_real tmp178;
	  fftw_real tmp6;
	  fftw_real tmp177;
	  fftw_real tmp69;
	  fftw_real tmp96;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp1;
	       fftw_real tmp2;
	       fftw_real tmp64;
	       fftw_real tmp65;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp1 = c_re(input[0]);
	       tmp2 = c_re(input[16 * istride]);
	       tmp3 = tmp1 + tmp2;
	       tmp95 = tmp1 - tmp2;
	       tmp64 = c_im(input[0]);
	       tmp65 = c_im(input[16 * istride]);
	       tmp66 = tmp64 + tmp65;
	       tmp178 = tmp64 - tmp65;
	  }
	  {
	       fftw_real tmp4;
	       fftw_real tmp5;
	       fftw_real tmp67;
	       fftw_real tmp68;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp4 = c_re(input[8 * istride]);
	       tmp5 = c_re(input[24 * istride]);
	       tmp6 = tmp4 + tmp5;
	       tmp177 = tmp4 - tmp5;
	       tmp67 = c_im(input[8 * istride]);
	       tmp68 = c_im(input[24 * istride]);
	       tmp69 = tmp67 + tmp68;
	       tmp96 = tmp67 - tmp68;
	  }
	  tmp7 = tmp3 + tmp6;
	  tmp275 = tmp3 - tmp6;
	  tmp70 = tmp66 + tmp69;
	  tmp309 = tmp66 - tmp69;
	  tmp97 = tmp95 - tmp96;
	  tmp215 = tmp95 + tmp96;
	  tmp179 = tmp177 + tmp178;
	  tmp241 = tmp178 - tmp177;
     }
     {
	  fftw_real tmp10;
	  fftw_real tmp99;
	  fftw_real tmp73;
	  fftw_real tmp98;
	  fftw_real tmp13;
	  fftw_real tmp101;
	  fftw_real tmp76;
	  fftw_real tmp102;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp8;
	       fftw_real tmp9;
	       fftw_real tmp71;
	       fftw_real tmp72;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp8 = c_re(input[4 * istride]);
	       tmp9 = c_re(input[20 * istride]);
	       tmp10 = tmp8 + tmp9;
	       tmp99 = tmp8 - tmp9;
	       tmp71 = c_im(input[4 * istride]);
	       tmp72 = c_im(input[20 * istride]);
	       tmp73 = tmp71 + tmp72;
	       tmp98 = tmp71 - tmp72;
	  }
	  {
	       fftw_real tmp11;
	       fftw_real tmp12;
	       fftw_real tmp74;
	       fftw_real tmp75;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp11 = c_re(input[28 * istride]);
	       tmp12 = c_re(input[12 * istride]);
	       tmp13 = tmp11 + tmp12;
	       tmp101 = tmp11 - tmp12;
	       tmp74 = c_im(input[28 * istride]);
	       tmp75 = c_im(input[12 * istride]);
	       tmp76 = tmp74 + tmp75;
	       tmp102 = tmp74 - tmp75;
	  }
	  tmp14 = tmp10 + tmp13;
	  tmp310 = tmp13 - tmp10;
	  tmp77 = tmp73 + tmp76;
	  tmp276 = tmp73 - tmp76;
	  {
	       fftw_real tmp180;
	       fftw_real tmp181;
	       fftw_real tmp100;
	       fftw_real tmp103;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp180 = tmp101 - tmp102;
	       tmp181 = tmp99 + tmp98;
	       tmp182 = K707106781 * (tmp180 - tmp181);
	       tmp216 = K707106781 * (tmp181 + tmp180);
	       tmp100 = tmp98 - tmp99;
	       tmp103 = tmp101 + tmp102;
	       tmp104 = K707106781 * (tmp100 - tmp103);
	       tmp242 = K707106781 * (tmp100 + tmp103);
	  }
     }
     {
	  fftw_real tmp49;
	  fftw_real tmp149;
	  fftw_real tmp169;
	  fftw_real tmp302;
	  fftw_real tmp52;
	  fftw_real tmp166;
	  fftw_real tmp152;
	  fftw_real tmp303;
	  fftw_real tmp56;
	  fftw_real tmp157;
	  fftw_real tmp156;
	  fftw_real tmp298;
	  fftw_real tmp59;
	  fftw_real tmp159;
	  fftw_real tmp162;
	  fftw_real tmp299;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp47;
	       fftw_real tmp48;
	       fftw_real tmp167;
	       fftw_real tmp168;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp47 = c_re(input[31 * istride]);
	       tmp48 = c_re(input[15 * istride]);
	       tmp49 = tmp47 + tmp48;
	       tmp149 = tmp47 - tmp48;
	       tmp167 = c_im(input[31 * istride]);
	       tmp168 = c_im(input[15 * istride]);
	       tmp169 = tmp167 - tmp168;
	       tmp302 = tmp167 + tmp168;
	  }
	  {
	       fftw_real tmp50;
	       fftw_real tmp51;
	       fftw_real tmp150;
	       fftw_real tmp151;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp50 = c_re(input[7 * istride]);
	       tmp51 = c_re(input[23 * istride]);
	       tmp52 = tmp50 + tmp51;
	       tmp166 = tmp50 - tmp51;
	       tmp150 = c_im(input[7 * istride]);
	       tmp151 = c_im(input[23 * istride]);
	       tmp152 = tmp150 - tmp151;
	       tmp303 = tmp150 + tmp151;
	  }
	  {
	       fftw_real tmp54;
	       fftw_real tmp55;
	       fftw_real tmp154;
	       fftw_real tmp155;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp54 = c_re(input[3 * istride]);
	       tmp55 = c_re(input[19 * istride]);
	       tmp56 = tmp54 + tmp55;
	       tmp157 = tmp54 - tmp55;
	       tmp154 = c_im(input[3 * istride]);
	       tmp155 = c_im(input[19 * istride]);
	       tmp156 = tmp154 - tmp155;
	       tmp298 = tmp154 + tmp155;
	  }
	  {
	       fftw_real tmp57;
	       fftw_real tmp58;
	       fftw_real tmp160;
	       fftw_real tmp161;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp57 = c_re(input[27 * istride]);
	       tmp58 = c_re(input[11 * istride]);
	       tmp59 = tmp57 + tmp58;
	       tmp159 = tmp57 - tmp58;
	       tmp160 = c_im(input[27 * istride]);
	       tmp161 = c_im(input[11 * istride]);
	       tmp162 = tmp160 - tmp161;
	       tmp299 = tmp160 + tmp161;
	  }
	  {
	       fftw_real tmp304;
	       fftw_real tmp305;
	       fftw_real tmp297;
	       fftw_real tmp300;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp153 = tmp149 - tmp152;
	       tmp233 = tmp149 + tmp152;
	       tmp53 = tmp49 + tmp52;
	       tmp60 = tmp56 + tmp59;
	       tmp351 = tmp53 - tmp60;
	       tmp304 = tmp302 - tmp303;
	       tmp305 = tmp59 - tmp56;
	       tmp306 = tmp304 - tmp305;
	       tmp330 = tmp305 + tmp304;
	       tmp352 = tmp302 + tmp303;
	       tmp353 = tmp298 + tmp299;
	       tmp354 = tmp352 - tmp353;
	       tmp170 = tmp166 + tmp169;
	       tmp236 = tmp169 - tmp166;
	       tmp297 = tmp49 - tmp52;
	       tmp300 = tmp298 - tmp299;
	       tmp301 = tmp297 - tmp300;
	       tmp329 = tmp297 + tmp300;
	       {
		    fftw_real tmp158;
		    fftw_real tmp163;
		    fftw_real tmp171;
		    fftw_real tmp172;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp158 = tmp156 - tmp157;
		    tmp163 = tmp159 + tmp162;
		    tmp164 = K707106781 * (tmp158 - tmp163);
		    tmp237 = K707106781 * (tmp158 + tmp163);
		    tmp171 = tmp159 - tmp162;
		    tmp172 = tmp157 + tmp156;
		    tmp173 = K707106781 * (tmp171 - tmp172);
		    tmp234 = K707106781 * (tmp172 + tmp171);
	       }
	  }
     }
     {
	  fftw_real tmp18;
	  fftw_real tmp109;
	  fftw_real tmp81;
	  fftw_real tmp107;
	  fftw_real tmp21;
	  fftw_real tmp106;
	  fftw_real tmp84;
	  fftw_real tmp110;
	  fftw_real tmp278;
	  fftw_real tmp279;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp16;
	       fftw_real tmp17;
	       fftw_real tmp79;
	       fftw_real tmp80;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp16 = c_re(input[2 * istride]);
	       tmp17 = c_re(input[18 * istride]);
	       tmp18 = tmp16 + tmp17;
	       tmp109 = tmp16 - tmp17;
	       tmp79 = c_im(input[2 * istride]);
	       tmp80 = c_im(input[18 * istride]);
	       tmp81 = tmp79 + tmp80;
	       tmp107 = tmp79 - tmp80;
	  }
	  {
	       fftw_real tmp19;
	       fftw_real tmp20;
	       fftw_real tmp82;
	       fftw_real tmp83;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp19 = c_re(input[10 * istride]);
	       tmp20 = c_re(input[26 * istride]);
	       tmp21 = tmp19 + tmp20;
	       tmp106 = tmp19 - tmp20;
	       tmp82 = c_im(input[10 * istride]);
	       tmp83 = c_im(input[26 * istride]);
	       tmp84 = tmp82 + tmp83;
	       tmp110 = tmp82 - tmp83;
	  }
	  tmp22 = tmp18 + tmp21;
	  tmp278 = tmp81 - tmp84;
	  tmp279 = tmp18 - tmp21;
	  tmp280 = tmp278 - tmp279;
	  tmp313 = tmp279 + tmp278;
	  tmp85 = tmp81 + tmp84;
	  {
	       fftw_real tmp108;
	       fftw_real tmp111;
	       fftw_real tmp218;
	       fftw_real tmp219;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp108 = tmp106 + tmp107;
	       tmp111 = tmp109 - tmp110;
	       tmp112 = (K382683432 * tmp108) - (K923879532 * tmp111);
	       tmp185 = (K923879532 * tmp108) + (K382683432 * tmp111);
	       tmp218 = tmp107 - tmp106;
	       tmp219 = tmp109 + tmp110;
	       tmp220 = (K923879532 * tmp218) - (K382683432 * tmp219);
	       tmp245 = (K382683432 * tmp218) + (K923879532 * tmp219);
	  }
     }
     {
	  fftw_real tmp25;
	  fftw_real tmp116;
	  fftw_real tmp88;
	  fftw_real tmp114;
	  fftw_real tmp28;
	  fftw_real tmp113;
	  fftw_real tmp91;
	  fftw_real tmp117;
	  fftw_real tmp281;
	  fftw_real tmp282;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp23;
	       fftw_real tmp24;
	       fftw_real tmp86;
	       fftw_real tmp87;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp23 = c_re(input[30 * istride]);
	       tmp24 = c_re(input[14 * istride]);
	       tmp25 = tmp23 + tmp24;
	       tmp116 = tmp23 - tmp24;
	       tmp86 = c_im(input[30 * istride]);
	       tmp87 = c_im(input[14 * istride]);
	       tmp88 = tmp86 + tmp87;
	       tmp114 = tmp86 - tmp87;
	  }
	  {
	       fftw_real tmp26;
	       fftw_real tmp27;
	       fftw_real tmp89;
	       fftw_real tmp90;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp26 = c_re(input[6 * istride]);
	       tmp27 = c_re(input[22 * istride]);
	       tmp28 = tmp26 + tmp27;
	       tmp113 = tmp26 - tmp27;
	       tmp89 = c_im(input[6 * istride]);
	       tmp90 = c_im(input[22 * istride]);
	       tmp91 = tmp89 + tmp90;
	       tmp117 = tmp89 - tmp90;
	  }
	  tmp29 = tmp25 + tmp28;
	  tmp281 = tmp25 - tmp28;
	  tmp282 = tmp88 - tmp91;
	  tmp283 = tmp281 + tmp282;
	  tmp312 = tmp281 - tmp282;
	  tmp92 = tmp88 + tmp91;
	  {
	       fftw_real tmp115;
	       fftw_real tmp118;
	       fftw_real tmp221;
	       fftw_real tmp222;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp115 = tmp113 + tmp114;
	       tmp118 = tmp116 - tmp117;
	       tmp119 = (K382683432 * tmp115) + (K923879532 * tmp118);
	       tmp184 = (K382683432 * tmp118) - (K923879532 * tmp115);
	       tmp221 = tmp114 - tmp113;
	       tmp222 = tmp116 + tmp117;
	       tmp223 = (K923879532 * tmp221) + (K382683432 * tmp222);
	       tmp244 = (K923879532 * tmp222) - (K382683432 * tmp221);
	  }
     }
     {
	  fftw_real tmp34;
	  fftw_real tmp139;
	  fftw_real tmp125;
	  fftw_real tmp286;
	  fftw_real tmp37;
	  fftw_real tmp122;
	  fftw_real tmp142;
	  fftw_real tmp287;
	  fftw_real tmp41;
	  fftw_real tmp132;
	  fftw_real tmp135;
	  fftw_real tmp292;
	  fftw_real tmp44;
	  fftw_real tmp127;
	  fftw_real tmp130;
	  fftw_real tmp293;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp32;
	       fftw_real tmp33;
	       fftw_real tmp123;
	       fftw_real tmp124;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp32 = c_re(input[istride]);
	       tmp33 = c_re(input[17 * istride]);
	       tmp34 = tmp32 + tmp33;
	       tmp139 = tmp32 - tmp33;
	       tmp123 = c_im(input[istride]);
	       tmp124 = c_im(input[17 * istride]);
	       tmp125 = tmp123 - tmp124;
	       tmp286 = tmp123 + tmp124;
	  }
	  {
	       fftw_real tmp35;
	       fftw_real tmp36;
	       fftw_real tmp140;
	       fftw_real tmp141;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp35 = c_re(input[9 * istride]);
	       tmp36 = c_re(input[25 * istride]);
	       tmp37 = tmp35 + tmp36;
	       tmp122 = tmp35 - tmp36;
	       tmp140 = c_im(input[9 * istride]);
	       tmp141 = c_im(input[25 * istride]);
	       tmp142 = tmp140 - tmp141;
	       tmp287 = tmp140 + tmp141;
	  }
	  {
	       fftw_real tmp39;
	       fftw_real tmp40;
	       fftw_real tmp133;
	       fftw_real tmp134;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp39 = c_re(input[5 * istride]);
	       tmp40 = c_re(input[21 * istride]);
	       tmp41 = tmp39 + tmp40;
	       tmp132 = tmp39 - tmp40;
	       tmp133 = c_im(input[5 * istride]);
	       tmp134 = c_im(input[21 * istride]);
	       tmp135 = tmp133 - tmp134;
	       tmp292 = tmp133 + tmp134;
	  }
	  {
	       fftw_real tmp42;
	       fftw_real tmp43;
	       fftw_real tmp128;
	       fftw_real tmp129;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp42 = c_re(input[29 * istride]);
	       tmp43 = c_re(input[13 * istride]);
	       tmp44 = tmp42 + tmp43;
	       tmp127 = tmp42 - tmp43;
	       tmp128 = c_im(input[29 * istride]);
	       tmp129 = c_im(input[13 * istride]);
	       tmp130 = tmp128 - tmp129;
	       tmp293 = tmp128 + tmp129;
	  }
	  {
	       fftw_real tmp291;
	       fftw_real tmp294;
	       fftw_real tmp288;
	       fftw_real tmp289;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp126 = tmp122 + tmp125;
	       tmp229 = tmp125 - tmp122;
	       tmp38 = tmp34 + tmp37;
	       tmp45 = tmp41 + tmp44;
	       tmp346 = tmp38 - tmp45;
	       tmp291 = tmp34 - tmp37;
	       tmp294 = tmp292 - tmp293;
	       tmp295 = tmp291 - tmp294;
	       tmp327 = tmp291 + tmp294;
	       tmp347 = tmp286 + tmp287;
	       tmp348 = tmp292 + tmp293;
	       tmp349 = tmp347 - tmp348;
	       tmp143 = tmp139 - tmp142;
	       tmp226 = tmp139 + tmp142;
	       tmp288 = tmp286 - tmp287;
	       tmp289 = tmp44 - tmp41;
	       tmp290 = tmp288 - tmp289;
	       tmp326 = tmp289 + tmp288;
	       {
		    fftw_real tmp131;
		    fftw_real tmp136;
		    fftw_real tmp144;
		    fftw_real tmp145;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp131 = tmp127 - tmp130;
		    tmp136 = tmp132 + tmp135;
		    tmp137 = K707106781 * (tmp131 - tmp136);
		    tmp227 = K707106781 * (tmp136 + tmp131);
		    tmp144 = tmp135 - tmp132;
		    tmp145 = tmp127 + tmp130;
		    tmp146 = K707106781 * (tmp144 - tmp145);
		    tmp230 = K707106781 * (tmp144 + tmp145);
	       }
	  }
     }
     {
	  fftw_real tmp285;
	  fftw_real tmp317;
	  fftw_real tmp320;
	  fftw_real tmp322;
	  fftw_real tmp308;
	  fftw_real tmp316;
	  fftw_real tmp315;
	  fftw_real tmp321;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp277;
	       fftw_real tmp284;
	       fftw_real tmp318;
	       fftw_real tmp319;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp277 = tmp275 - tmp276;
	       tmp284 = K707106781 * (tmp280 - tmp283);
	       tmp285 = tmp277 + tmp284;
	       tmp317 = tmp277 - tmp284;
	       tmp318 = (K382683432 * tmp290) - (K923879532 * tmp295);
	       tmp319 = (K382683432 * tmp306) + (K923879532 * tmp301);
	       tmp320 = tmp318 - tmp319;
	       tmp322 = tmp318 + tmp319;
	  }
	  {
	       fftw_real tmp296;
	       fftw_real tmp307;
	       fftw_real tmp311;
	       fftw_real tmp314;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp296 = (K923879532 * tmp290) + (K382683432 * tmp295);
	       tmp307 = (K382683432 * tmp301) - (K923879532 * tmp306);
	       tmp308 = tmp296 + tmp307;
	       tmp316 = tmp307 - tmp296;
	       tmp311 = tmp309 - tmp310;
	       tmp314 = K707106781 * (tmp312 - tmp313);
	       tmp315 = tmp311 - tmp314;
	       tmp321 = tmp311 + tmp314;
	  }
	  c_re(output[22 * ostride]) = tmp285 - tmp308;
	  c_re(output[6 * ostride]) = tmp285 + tmp308;
	  c_im(output[30 * ostride]) = tmp315 - tmp316;
	  c_im(output[14 * ostride]) = tmp315 + tmp316;
	  c_re(output[30 * ostride]) = tmp317 - tmp320;
	  c_re(output[14 * ostride]) = tmp317 + tmp320;
	  c_im(output[22 * ostride]) = tmp321 - tmp322;
	  c_im(output[6 * ostride]) = tmp321 + tmp322;
     }
     {
	  fftw_real tmp325;
	  fftw_real tmp337;
	  fftw_real tmp340;
	  fftw_real tmp342;
	  fftw_real tmp332;
	  fftw_real tmp336;
	  fftw_real tmp335;
	  fftw_real tmp341;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp323;
	       fftw_real tmp324;
	       fftw_real tmp338;
	       fftw_real tmp339;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp323 = tmp275 + tmp276;
	       tmp324 = K707106781 * (tmp313 + tmp312);
	       tmp325 = tmp323 + tmp324;
	       tmp337 = tmp323 - tmp324;
	       tmp338 = (K923879532 * tmp326) - (K382683432 * tmp327);
	       tmp339 = (K923879532 * tmp330) + (K382683432 * tmp329);
	       tmp340 = tmp338 - tmp339;
	       tmp342 = tmp338 + tmp339;
	  }
	  {
	       fftw_real tmp328;
	       fftw_real tmp331;
	       fftw_real tmp333;
	       fftw_real tmp334;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp328 = (K382683432 * tmp326) + (K923879532 * tmp327);
	       tmp331 = (K923879532 * tmp329) - (K382683432 * tmp330);
	       tmp332 = tmp328 + tmp331;
	       tmp336 = tmp331 - tmp328;
	       tmp333 = tmp310 + tmp309;
	       tmp334 = K707106781 * (tmp280 + tmp283);
	       tmp335 = tmp333 - tmp334;
	       tmp341 = tmp333 + tmp334;
	  }
	  c_re(output[18 * ostride]) = tmp325 - tmp332;
	  c_re(output[2 * ostride]) = tmp325 + tmp332;
	  c_im(output[26 * ostride]) = tmp335 - tmp336;
	  c_im(output[10 * ostride]) = tmp335 + tmp336;
	  c_re(output[26 * ostride]) = tmp337 - tmp340;
	  c_re(output[10 * ostride]) = tmp337 + tmp340;
	  c_im(output[18 * ostride]) = tmp341 - tmp342;
	  c_im(output[2 * ostride]) = tmp341 + tmp342;
     }
     {
	  fftw_real tmp345;
	  fftw_real tmp361;
	  fftw_real tmp364;
	  fftw_real tmp366;
	  fftw_real tmp356;
	  fftw_real tmp360;
	  fftw_real tmp359;
	  fftw_real tmp365;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp343;
	       fftw_real tmp344;
	       fftw_real tmp362;
	       fftw_real tmp363;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp343 = tmp7 - tmp14;
	       tmp344 = tmp85 - tmp92;
	       tmp345 = tmp343 + tmp344;
	       tmp361 = tmp343 - tmp344;
	       tmp362 = tmp349 - tmp346;
	       tmp363 = tmp351 + tmp354;
	       tmp364 = K707106781 * (tmp362 - tmp363);
	       tmp366 = K707106781 * (tmp362 + tmp363);
	  }
	  {
	       fftw_real tmp350;
	       fftw_real tmp355;
	       fftw_real tmp357;
	       fftw_real tmp358;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp350 = tmp346 + tmp349;
	       tmp355 = tmp351 - tmp354;
	       tmp356 = K707106781 * (tmp350 + tmp355);
	       tmp360 = K707106781 * (tmp355 - tmp350);
	       tmp357 = tmp70 - tmp77;
	       tmp358 = tmp29 - tmp22;
	       tmp359 = tmp357 - tmp358;
	       tmp365 = tmp358 + tmp357;
	  }
	  c_re(output[20 * ostride]) = tmp345 - tmp356;
	  c_re(output[4 * ostride]) = tmp345 + tmp356;
	  c_im(output[28 * ostride]) = tmp359 - tmp360;
	  c_im(output[12 * ostride]) = tmp359 + tmp360;
	  c_re(output[28 * ostride]) = tmp361 - tmp364;
	  c_re(output[12 * ostride]) = tmp361 + tmp364;
	  c_im(output[20 * ostride]) = tmp365 - tmp366;
	  c_im(output[4 * ostride]) = tmp365 + tmp366;
     }
     {
	  fftw_real tmp31;
	  fftw_real tmp367;
	  fftw_real tmp370;
	  fftw_real tmp372;
	  fftw_real tmp62;
	  fftw_real tmp63;
	  fftw_real tmp94;
	  fftw_real tmp371;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp15;
	       fftw_real tmp30;
	       fftw_real tmp368;
	       fftw_real tmp369;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp15 = tmp7 + tmp14;
	       tmp30 = tmp22 + tmp29;
	       tmp31 = tmp15 + tmp30;
	       tmp367 = tmp15 - tmp30;
	       tmp368 = tmp347 + tmp348;
	       tmp369 = tmp352 + tmp353;
	       tmp370 = tmp368 - tmp369;
	       tmp372 = tmp368 + tmp369;
	  }
	  {
	       fftw_real tmp46;
	       fftw_real tmp61;
	       fftw_real tmp78;
	       fftw_real tmp93;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp46 = tmp38 + tmp45;
	       tmp61 = tmp53 + tmp60;
	       tmp62 = tmp46 + tmp61;
	       tmp63 = tmp61 - tmp46;
	       tmp78 = tmp70 + tmp77;
	       tmp93 = tmp85 + tmp92;
	       tmp94 = tmp78 - tmp93;
	       tmp371 = tmp78 + tmp93;
	  }
	  c_re(output[16 * ostride]) = tmp31 - tmp62;
	  c_re(output[0]) = tmp31 + tmp62;
	  c_im(output[8 * ostride]) = tmp63 + tmp94;
	  c_im(output[24 * ostride]) = tmp94 - tmp63;
	  c_re(output[24 * ostride]) = tmp367 - tmp370;
	  c_re(output[8 * ostride]) = tmp367 + tmp370;
	  c_im(output[16 * ostride]) = tmp371 - tmp372;
	  c_im(output[0]) = tmp371 + tmp372;
     }
     {
	  fftw_real tmp121;
	  fftw_real tmp189;
	  fftw_real tmp187;
	  fftw_real tmp193;
	  fftw_real tmp148;
	  fftw_real tmp190;
	  fftw_real tmp175;
	  fftw_real tmp191;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp105;
	       fftw_real tmp120;
	       fftw_real tmp183;
	       fftw_real tmp186;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp105 = tmp97 - tmp104;
	       tmp120 = tmp112 - tmp119;
	       tmp121 = tmp105 + tmp120;
	       tmp189 = tmp105 - tmp120;
	       tmp183 = tmp179 - tmp182;
	       tmp186 = tmp184 - tmp185;
	       tmp187 = tmp183 - tmp186;
	       tmp193 = tmp183 + tmp186;
	  }
	  {
	       fftw_real tmp138;
	       fftw_real tmp147;
	       fftw_real tmp165;
	       fftw_real tmp174;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp138 = tmp126 - tmp137;
	       tmp147 = tmp143 - tmp146;
	       tmp148 = (K980785280 * tmp138) + (K195090322 * tmp147);
	       tmp190 = (K195090322 * tmp138) - (K980785280 * tmp147);
	       tmp165 = tmp153 - tmp164;
	       tmp174 = tmp170 - tmp173;
	       tmp175 = (K195090322 * tmp165) - (K980785280 * tmp174);
	       tmp191 = (K195090322 * tmp174) + (K980785280 * tmp165);
	  }
	  {
	       fftw_real tmp176;
	       fftw_real tmp188;
	       fftw_real tmp192;
	       fftw_real tmp194;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp176 = tmp148 + tmp175;
	       c_re(output[23 * ostride]) = tmp121 - tmp176;
	       c_re(output[7 * ostride]) = tmp121 + tmp176;
	       tmp188 = tmp175 - tmp148;
	       c_im(output[31 * ostride]) = tmp187 - tmp188;
	       c_im(output[15 * ostride]) = tmp187 + tmp188;
	       tmp192 = tmp190 - tmp191;
	       c_re(output[31 * ostride]) = tmp189 - tmp192;
	       c_re(output[15 * ostride]) = tmp189 + tmp192;
	       tmp194 = tmp190 + tmp191;
	       c_im(output[23 * ostride]) = tmp193 - tmp194;
	       c_im(output[7 * ostride]) = tmp193 + tmp194;
	  }
     }
     {
	  fftw_real tmp197;
	  fftw_real tmp209;
	  fftw_real tmp207;
	  fftw_real tmp213;
	  fftw_real tmp200;
	  fftw_real tmp210;
	  fftw_real tmp203;
	  fftw_real tmp211;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp195;
	       fftw_real tmp196;
	       fftw_real tmp205;
	       fftw_real tmp206;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp195 = tmp97 + tmp104;
	       tmp196 = tmp185 + tmp184;
	       tmp197 = tmp195 + tmp196;
	       tmp209 = tmp195 - tmp196;
	       tmp205 = tmp179 + tmp182;
	       tmp206 = tmp112 + tmp119;
	       tmp207 = tmp205 - tmp206;
	       tmp213 = tmp205 + tmp206;
	  }
	  {
	       fftw_real tmp198;
	       fftw_real tmp199;
	       fftw_real tmp201;
	       fftw_real tmp202;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp198 = tmp126 + tmp137;
	       tmp199 = tmp143 + tmp146;
	       tmp200 = (K555570233 * tmp198) + (K831469612 * tmp199);
	       tmp210 = (K831469612 * tmp198) - (K555570233 * tmp199);
	       tmp201 = tmp153 + tmp164;
	       tmp202 = tmp170 + tmp173;
	       tmp203 = (K831469612 * tmp201) - (K555570233 * tmp202);
	       tmp211 = (K831469612 * tmp202) + (K555570233 * tmp201);
	  }
	  {
	       fftw_real tmp204;
	       fftw_real tmp208;
	       fftw_real tmp212;
	       fftw_real tmp214;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp204 = tmp200 + tmp203;
	       c_re(output[19 * ostride]) = tmp197 - tmp204;
	       c_re(output[3 * ostride]) = tmp197 + tmp204;
	       tmp208 = tmp203 - tmp200;
	       c_im(output[27 * ostride]) = tmp207 - tmp208;
	       c_im(output[11 * ostride]) = tmp207 + tmp208;
	       tmp212 = tmp210 - tmp211;
	       c_re(output[27 * ostride]) = tmp209 - tmp212;
	       c_re(output[11 * ostride]) = tmp209 + tmp212;
	       tmp214 = tmp210 + tmp211;
	       c_im(output[19 * ostride]) = tmp213 - tmp214;
	       c_im(output[3 * ostride]) = tmp213 + tmp214;
	  }
     }
     {
	  fftw_real tmp225;
	  fftw_real tmp249;
	  fftw_real tmp247;
	  fftw_real tmp253;
	  fftw_real tmp232;
	  fftw_real tmp250;
	  fftw_real tmp239;
	  fftw_real tmp251;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp217;
	       fftw_real tmp224;
	       fftw_real tmp243;
	       fftw_real tmp246;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp217 = tmp215 - tmp216;
	       tmp224 = tmp220 - tmp223;
	       tmp225 = tmp217 + tmp224;
	       tmp249 = tmp217 - tmp224;
	       tmp243 = tmp241 - tmp242;
	       tmp246 = tmp244 - tmp245;
	       tmp247 = tmp243 - tmp246;
	       tmp253 = tmp243 + tmp246;
	  }
	  {
	       fftw_real tmp228;
	       fftw_real tmp231;
	       fftw_real tmp235;
	       fftw_real tmp238;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp228 = tmp226 - tmp227;
	       tmp231 = tmp229 - tmp230;
	       tmp232 = (K555570233 * tmp228) + (K831469612 * tmp231);
	       tmp250 = (K555570233 * tmp231) - (K831469612 * tmp228);
	       tmp235 = tmp233 - tmp234;
	       tmp238 = tmp236 - tmp237;
	       tmp239 = (K555570233 * tmp235) - (K831469612 * tmp238);
	       tmp251 = (K831469612 * tmp235) + (K555570233 * tmp238);
	  }
	  {
	       fftw_real tmp240;
	       fftw_real tmp248;
	       fftw_real tmp252;
	       fftw_real tmp254;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp240 = tmp232 + tmp239;
	       c_re(output[21 * ostride]) = tmp225 - tmp240;
	       c_re(output[5 * ostride]) = tmp225 + tmp240;
	       tmp248 = tmp239 - tmp232;
	       c_im(output[29 * ostride]) = tmp247 - tmp248;
	       c_im(output[13 * ostride]) = tmp247 + tmp248;
	       tmp252 = tmp250 - tmp251;
	       c_re(output[29 * ostride]) = tmp249 - tmp252;
	       c_re(output[13 * ostride]) = tmp249 + tmp252;
	       tmp254 = tmp250 + tmp251;
	       c_im(output[21 * ostride]) = tmp253 - tmp254;
	       c_im(output[5 * ostride]) = tmp253 + tmp254;
	  }
     }
     {
	  fftw_real tmp257;
	  fftw_real tmp269;
	  fftw_real tmp267;
	  fftw_real tmp273;
	  fftw_real tmp260;
	  fftw_real tmp270;
	  fftw_real tmp263;
	  fftw_real tmp271;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp255;
	       fftw_real tmp256;
	       fftw_real tmp265;
	       fftw_real tmp266;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp255 = tmp215 + tmp216;
	       tmp256 = tmp245 + tmp244;
	       tmp257 = tmp255 + tmp256;
	       tmp269 = tmp255 - tmp256;
	       tmp265 = tmp241 + tmp242;
	       tmp266 = tmp220 + tmp223;
	       tmp267 = tmp265 - tmp266;
	       tmp273 = tmp265 + tmp266;
	  }
	  {
	       fftw_real tmp258;
	       fftw_real tmp259;
	       fftw_real tmp261;
	       fftw_real tmp262;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp258 = tmp226 + tmp227;
	       tmp259 = tmp229 + tmp230;
	       tmp260 = (K980785280 * tmp258) + (K195090322 * tmp259);
	       tmp270 = (K980785280 * tmp259) - (K195090322 * tmp258);
	       tmp261 = tmp233 + tmp234;
	       tmp262 = tmp236 + tmp237;
	       tmp263 = (K980785280 * tmp261) - (K195090322 * tmp262);
	       tmp271 = (K195090322 * tmp261) + (K980785280 * tmp262);
	  }
	  {
	       fftw_real tmp264;
	       fftw_real tmp268;
	       fftw_real tmp272;
	       fftw_real tmp274;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp264 = tmp260 + tmp263;
	       c_re(output[17 * ostride]) = tmp257 - tmp264;
	       c_re(output[ostride]) = tmp257 + tmp264;
	       tmp268 = tmp263 - tmp260;
	       c_im(output[25 * ostride]) = tmp267 - tmp268;
	       c_im(output[9 * ostride]) = tmp267 + tmp268;
	       tmp272 = tmp270 - tmp271;
	       c_re(output[25 * ostride]) = tmp269 - tmp272;
	       c_re(output[9 * ostride]) = tmp269 + tmp272;
	       tmp274 = tmp270 + tmp271;
	       c_im(output[17 * ostride]) = tmp273 - tmp274;
	       c_im(output[ostride]) = tmp273 + tmp274;
	  }
     }
}

fftw_codelet_desc fftw_no_twiddle_32_desc = {
     "fftw_no_twiddle_32",
     (void (*)()) fftw_no_twiddle_32,
     32,
     FFTW_FORWARD,
     FFTW_NOTW,
     705,
     0,
     (const int *) 0,
};
