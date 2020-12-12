#include"stdio.h"
#include"stdlib.h"
#include "ntt.h"
#define N 256
#define Q 8380417
#define QINV 4236238847U
#include <stdint.h>

//#define DESIGN1
/*************************************************************
 * Optimization Details:
 * Outer loop has been manually unrolled (8 iteration) for appropriately defining loop tripcount
 * as the synthesizer failed to auto-detail loop trips (Unbound latency was displayed post synthesis)
 * The trip counts given are exact and was manually evaluated
 *
 * Optimization strategies: There is high extend of memory dependencies. Partition pragma fails as
 * array access pattern is not very well defined. Careful observation revealed that instruction dependencies
 * hold only for intra-iterations and not inter-iterations. This has been manipulated to relatively flatten the loop
 * levels and manually partition the arrays involved for improving memory dependencies
 *
 * NOTE: Since manual partition is involved, the code is not scalable with respect to 'N' (Current version, N=256)
 *
 */
/*************************************************************
* Name:        ntt
*
* Description: Forward NTT, in-place. No modular reduction is performed after
*              additions or subtractions. Hence output coefficients can be up
*              to 16*Q larger than the coefficients of the input polynomial.
*              Output vector is in bitreversed order.
*
* Arguments:   - uint64_t p[N]: input/output coefficient array
**************************************************/
uint32_t montgomery_reduce(uint64_t a) {
  uint64_t t;

  t = a * QINV;
  t &= (1ULL << 32) - 1;
  t *= Q;
  t = a + t;
  t >>= 32;
  return t;
}

#ifdef DESIGN1
void ntt(uint32_t q0[N/8],uint32_t q1[N/8],uint32_t q2[N/8],uint32_t q3[N/8],uint32_t q4[N/8],
		uint32_t q5[N/8],uint32_t q6[N/8],uint32_t q7[N/8], uint32_t zetas[N])
{
	  unsigned int total_iteration = 0;
	  unsigned int len, start, j, k;
	  int  zeta1,zeta2,zeta3,zeta4,zeta5,zeta6,zeta7,zeta8,zeta, t0,t1,t2,t3,t4,t5,t6,t7,t;
	 k=1;
	    for(start = 0; start < N; start +=256) {
	      zeta1 = zetas[k++];
	      for(j = start; j < start + 32; ++j) {
#pragma HLS loop_tripcount min=32 max=32  // NOTE: Tripcounts are exact!
#pragma HLS pipeline
	    	  total_iteration=total_iteration+4;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q4[j]);
	        t1 = montgomery_reduce((uint64_t)zeta1 * q5[j]);
	        t2 = montgomery_reduce((uint64_t)zeta1 * q6[j]);
	        t3 = montgomery_reduce((uint64_t)zeta1 * q7[j]);
	        q4[j] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q5[j] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q6[j] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q7[j] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;

	      }
	    }
// Unfolding the outer loop of baseline fn, values of len are : 
// {128,64,32,16,8,4,2,1}	  

/************************************************************
* Terminology: Access Bandwidth: The maximum index difference between a particular array element being simultaneously accesed
*************************************************************/	    
////////////////////////////////////////////////////////////// Following rountine are for access bandwidth > partition size  
	    for(start = 0; start < N/2; start +=128) {
	      zeta1 = zetas[k++];
	      zeta2 = zetas[k++];
	      for(j = start; j < start + 32; ++j) {
#pragma HLS loop_tripcount min=32 max=32
#pragma HLS pipeline
	    	total_iteration = total_iteration + 4;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q2[j]);
	        t1 = montgomery_reduce((uint64_t)zeta1 * q3[j]);
	        t2 = montgomery_reduce((uint64_t)zeta2 * q6[j]);
	        t3 = montgomery_reduce((uint64_t)zeta2 * q7[j]);
	        q2[j] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q3[j] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q6[j] = q4[j] + 2*Q - t2;
	        q4[j] = q4[j] + t2;
	        q7[j] = q5[j] + 2*Q - t3;
	        q5[j] = q5[j] + t3;
	      }
	    }
	     for(start = 0; start < N/4; start +=64) {
	      zeta1 = zetas[k++];
	      zeta2 = zetas[k++];
	      zeta3 = zetas[k++];
	      zeta4 = zetas[k++];
	      for(j = start; j < start + 32; ++j) {
#pragma HLS loop_tripcount min=32 max=32
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 4;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q1[j]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q3[j]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q5[j]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q7[j]);
	        q1[j] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q3[j] = q2[j] + 2*Q - t1;
	        q2[j] = q2[j] + t1;
	        q5[j] = q4[j] + 2*Q - t2;
	        q4[j] = q4[j] + t2;
	        q7[j] = q6[j] + 2*Q - t3;
	        q6[j] = q6[j] + t3;
	      }
	    }
	    for(start = 0; start < N/8; start +=32) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+1];
	      zeta3 = zetas[k+2];
	      zeta4 = zetas[k+3];
	      zeta5 = zetas[k+4];
	      zeta6 = zetas[k+5];
	      zeta7 = zetas[k+6];
	      zeta8 = zetas[k+7];
	      k++;
////////////////////////////////////////////////////Following routines are for routines with access bandwidth < partition size	      
	      for(j = start; j <  start+16; ++j) {
#pragma HLS loop_tripcount min=16 max=16
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+16]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+16]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+16]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+16]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+16]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+16]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+16]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+16]);
	        q0[j + 16] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 16] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 16] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 16] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 16] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 16] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 16] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 16] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=7;
	    for(start = 0; start < N/8; start +=16) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+2];
	      zeta3 = zetas[k+4];
	      zeta4 = zetas[k+6];
	      zeta5 = zetas[k+8];
	      zeta6 = zetas[k+10];
	      zeta7 = zetas[k+12];
	      zeta8 = zetas[k+14];
	      k++;
	      for(j = start; j < start + 8; ++j) {
#pragma HLS loop_tripcount min=8 max=8
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+8]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+8]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+8]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+8]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+8]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+8]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+8]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+8]);
	        q0[j + 8] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 8] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 8] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 8] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 8] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 8] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 8] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 8] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=14;
	    for(start = 0; start < N/8; start +=8) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+4];
	      zeta3 = zetas[k+8];
	      zeta4 = zetas[k+12];
	      zeta5 = zetas[k+16];
	      zeta6 = zetas[k+20];
	      zeta7 = zetas[k+24];
	      zeta8 = zetas[k+28];
	      k++;
	      for(j = start; j < start+4; ++j) {
#pragma HLS loop_tripcount min=4 max=4
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+4]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+4]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+4]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+4]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+4]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+4]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+4]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+4]);
	        q0[j + 4] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 4] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 4] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 4] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 4] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 4] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 4] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 4] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=28;
	    for(start = 0; start < N/8; start +=4) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+8];
	      zeta3 = zetas[k+16];
	      zeta4 = zetas[k+24];
	      zeta5 = zetas[k+32];
	      zeta6 = zetas[k+40];
	      zeta7 = zetas[k+48];
	      zeta8 = zetas[k+56];
	      k++;
	      for(j = start; j < start+2; ++j) {
#pragma HLS loop_tripcount min=2 max=2
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+2]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+2]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+2]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+2]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+2]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+2]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+2]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+2]);
	        q0[j + 2] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 2] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 2] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 2] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 2] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 2] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 2] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 2] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=56;
	     for(start = 0; start < N/8; start +=2) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+16];
	      zeta3 = zetas[k+32];
	      zeta4 = zetas[k+48];
	      zeta5 = zetas[k+64];
	      zeta6 = zetas[k+80];
	      zeta7 = zetas[k+96];
	      zeta8 = zetas[k+112];
	      k++;
	      for(j = start; j < start+1; ++j) {
#pragma HLS loop_tripcount min=1 max=1
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+1]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+1]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+1]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+1]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+1]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+1]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+1]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+1]);
	        q0[j + 1] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 1] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 1] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 1] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 1] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 1] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 1] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 1] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=112;
	    printf("Total iteration = %d\n",total_iteration);
}
#elif defined(DESIGN2)
void ntt(uint32_t q0[N/8],uint32_t q1[N/8],uint32_t q2[N/8],uint32_t q3[N/8], uint32_t zetas[N])
{
	  unsigned int total_iteration = 0;
	  unsigned int len, start, j, k;
	  int  zeta1,zeta2,zeta3,zeta4,zeta5,zeta6,zeta7,zeta8,zeta, t0,t1,t2,t3,t4,t5,t6,t7,t;
	 k=1;
	    for(start = 0; start < N; start +=256) {
	      zeta1 = zetas[k++];
	      for(j = start; j < start + 64; ++j) {
#pragma HLS loop_tripcount min=32 max=32  // NOTE: Tripcounts are exact!
#pragma HLS pipeline
	    	  total_iteration=total_iteration+4;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q2[j]);
	        t1 = montgomery_reduce((uint64_t)zeta1 * q3[j]);
	        q2[j] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q3[j] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	      }
	    }
// Unfolding the outer loop of baseline fn, values of len are :
// {128,64,32,16,8,4,2,1}

/************************************************************
* Terminology: Access Bandwidth: The maximum index difference between a particular array element being simultaneously accesed
*************************************************************/
////////////////////////////////////////////////////////////// Following rountine are for access bandwidth > partition size
	    for(start = 0; start < N/2; start +=128) {
	      zeta1 = zetas[k++];
	      zeta2 = zetas[k++];
	      for(j = start; j < start + 32; ++j) {
#pragma HLS loop_tripcount min=32 max=32
#pragma HLS pipeline
	    	total_iteration = total_iteration + 4;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q2[j]);
	        t1 = montgomery_reduce((uint64_t)zeta1 * q3[j]);
	        t2 = montgomery_reduce((uint64_t)zeta2 * q6[j]);
	        t3 = montgomery_reduce((uint64_t)zeta2 * q7[j]);
	        q2[j] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q3[j] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q6[j] = q4[j] + 2*Q - t2;
	        q4[j] = q4[j] + t2;
	        q7[j] = q5[j] + 2*Q - t3;
	        q5[j] = q5[j] + t3;
	      }
	    }
	     for(start = 0; start < N/4; start +=64) {
	      zeta1 = zetas[k++];
	      zeta2 = zetas[k++];
	      zeta3 = zetas[k++];
	      zeta4 = zetas[k++];
	      for(j = start; j < start + 32; ++j) {
#pragma HLS loop_tripcount min=32 max=32
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 4;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q1[j]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q3[j]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q5[j]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q7[j]);
	        q1[j] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q3[j] = q2[j] + 2*Q - t1;
	        q2[j] = q2[j] + t1;
	        q5[j] = q4[j] + 2*Q - t2;
	        q4[j] = q4[j] + t2;
	        q7[j] = q6[j] + 2*Q - t3;
	        q6[j] = q6[j] + t3;
	      }
	    }
	    for(start = 0; start < N/8; start +=32) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+1];
	      zeta3 = zetas[k+2];
	      zeta4 = zetas[k+3];
	      zeta5 = zetas[k+4];
	      zeta6 = zetas[k+5];
	      zeta7 = zetas[k+6];
	      zeta8 = zetas[k+7];
	      k++;
////////////////////////////////////////////////////Following routines are for routines with access bandwidth < partition size
	      for(j = start; j <  start+16; ++j) {
#pragma HLS loop_tripcount min=16 max=16
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+16]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+16]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+16]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+16]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+16]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+16]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+16]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+16]);
	        q0[j + 16] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 16] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 16] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 16] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 16] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 16] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 16] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 16] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=7;
	    for(start = 0; start < N/8; start +=16) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+2];
	      zeta3 = zetas[k+4];
	      zeta4 = zetas[k+6];
	      zeta5 = zetas[k+8];
	      zeta6 = zetas[k+10];
	      zeta7 = zetas[k+12];
	      zeta8 = zetas[k+14];
	      k++;
	      for(j = start; j < start + 8; ++j) {
#pragma HLS loop_tripcount min=8 max=8
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+8]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+8]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+8]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+8]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+8]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+8]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+8]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+8]);
	        q0[j + 8] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 8] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 8] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 8] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 8] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 8] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 8] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 8] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=14;
	    for(start = 0; start < N/8; start +=8) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+4];
	      zeta3 = zetas[k+8];
	      zeta4 = zetas[k+12];
	      zeta5 = zetas[k+16];
	      zeta6 = zetas[k+20];
	      zeta7 = zetas[k+24];
	      zeta8 = zetas[k+28];
	      k++;
	      for(j = start; j < start+4; ++j) {
#pragma HLS loop_tripcount min=4 max=4
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+4]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+4]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+4]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+4]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+4]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+4]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+4]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+4]);
	        q0[j + 4] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 4] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 4] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 4] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 4] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 4] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 4] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 4] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=28;
	    for(start = 0; start < N/8; start +=4) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+8];
	      zeta3 = zetas[k+16];
	      zeta4 = zetas[k+24];
	      zeta5 = zetas[k+32];
	      zeta6 = zetas[k+40];
	      zeta7 = zetas[k+48];
	      zeta8 = zetas[k+56];
	      k++;
	      for(j = start; j < start+2; ++j) {
#pragma HLS loop_tripcount min=2 max=2
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+2]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+2]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+2]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+2]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+2]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+2]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+2]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+2]);
	        q0[j + 2] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 2] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 2] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 2] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 2] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 2] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 2] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 2] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=56;
	     for(start = 0; start < N/8; start +=2) {
	      zeta1 = zetas[k];
	      zeta2 = zetas[k+16];
	      zeta3 = zetas[k+32];
	      zeta4 = zetas[k+48];
	      zeta5 = zetas[k+64];
	      zeta6 = zetas[k+80];
	      zeta7 = zetas[k+96];
	      zeta8 = zetas[k+112];
	      k++;
	      for(j = start; j < start+1; ++j) {
#pragma HLS loop_tripcount min=1 max=1
#pragma HLS pipeline
	    	  total_iteration = total_iteration + 8;
	        t0 = montgomery_reduce((uint64_t)zeta1 * q0[j+1]);
	        t1 = montgomery_reduce((uint64_t)zeta2 * q1[j+1]);
	        t2 = montgomery_reduce((uint64_t)zeta3 * q2[j+1]);
	        t3 = montgomery_reduce((uint64_t)zeta4 * q3[j+1]);
	        t4 = montgomery_reduce((uint64_t)zeta5 * q4[j+1]);
	        t5 = montgomery_reduce((uint64_t)zeta6 * q5[j+1]);
	        t6 = montgomery_reduce((uint64_t)zeta7 * q6[j+1]);
	        t7 = montgomery_reduce((uint64_t)zeta8 * q7[j+1]);
	        q0[j + 1] = q0[j] + 2*Q - t0;
	        q0[j] = q0[j] + t0;
	        q1[j + 1] = q1[j] + 2*Q - t1;
	        q1[j] = q1[j] + t1;
	        q2[j + 1] = q2[j] + 2*Q - t2;
	        q2[j] = q2[j] + t2;
	        q3[j + 1] = q3[j] + 2*Q - t3;
	        q3[j] = q3[j] + t3;
	        q4[j + 1] = q4[j] + 2*Q - t4;
	        q4[j] = q4[j] + t4;
	        q5[j + 1] = q5[j] + 2*Q - t5;
	        q5[j] = q5[j] + t5;
	        q6[j + 1] = q6[j] + 2*Q - t6;
	        q6[j] = q6[j] + t6;
	        q7[j + 1] = q7[j] + 2*Q - t7;
	        q7[j] = q7[j] + t7;
	      }
	    }
	    k+=112;
	    printf("Total iteration = %d\n",total_iteration);
}
#endif
