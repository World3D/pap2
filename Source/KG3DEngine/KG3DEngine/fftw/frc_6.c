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
/* Generated on Mon Mar 24 02:05:52 EST 2003 */

#include "fftw-int.h"
#include "fftw.h"

/* Generated by: /homee/stevenj/cvs/fftw/gensrc/genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -real2hc 6 */

/*
 * This function contains 14 FP additions, 4 FP multiplications,
 * (or, 12 additions, 2 multiplications, 2 fused multiply/add),
 * 14 stack variables, and 12 memory accesses
 */
static const fftw_real K500000000 =
FFTW_KONST(+0.500000000000000000000000000000000000000000000);
static const fftw_real K866025403 =
FFTW_KONST(+0.866025403784438646763723170752936183471402627);

/*
 * Generator Id's : 
 * $Id: frc_6.c,v 1.2 2008/04/08 01:23:34 yanglin Exp $
 * $Id: frc_6.c,v 1.2 2008/04/08 01:23:34 yanglin Exp $
 * $Id: frc_6.c,v 1.2 2008/04/08 01:23:34 yanglin Exp $
 */

void fftw_real2hc_6(const fftw_real *input, fftw_real *real_output,
		    fftw_real *imag_output, int istride, int real_ostride,
		    int imag_ostride)
{
     fftw_real tmp3;
     fftw_real tmp13;
     fftw_real tmp9;
     fftw_real tmp11;
     fftw_real tmp6;
     fftw_real tmp12;
     fftw_real tmp1;
     fftw_real tmp2;
     fftw_real tmp10;
     fftw_real tmp14;
     ASSERT_ALIGNED_DOUBLE;
     tmp1 = input[0];
     tmp2 = input[3 * istride];
     tmp3 = tmp1 - tmp2;
     tmp13 = tmp1 + tmp2;
     {
	  fftw_real tmp7;
	  fftw_real tmp8;
	  fftw_real tmp4;
	  fftw_real tmp5;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp7 = input[4 * istride];
	  tmp8 = input[istride];
	  tmp9 = tmp7 - tmp8;
	  tmp11 = tmp7 + tmp8;
	  tmp4 = input[2 * istride];
	  tmp5 = input[5 * istride];
	  tmp6 = tmp4 - tmp5;
	  tmp12 = tmp4 + tmp5;
     }
     imag_output[imag_ostride] = K866025403 * (tmp9 - tmp6);
     tmp10 = tmp6 + tmp9;
     real_output[real_ostride] = tmp3 - (K500000000 * tmp10);
     real_output[3 * real_ostride] = tmp3 + tmp10;
     imag_output[2 * imag_ostride] = -(K866025403 * (tmp11 - tmp12));
     tmp14 = tmp12 + tmp11;
     real_output[2 * real_ostride] = tmp13 - (K500000000 * tmp14);
     real_output[0] = tmp13 + tmp14;
}

fftw_codelet_desc fftw_real2hc_6_desc = {
     "fftw_real2hc_6",
     (void (*)()) fftw_real2hc_6,
     6,
     FFTW_FORWARD,
     FFTW_REAL2HC,
     134,
     0,
     (const int *) 0,
};
