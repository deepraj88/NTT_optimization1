#include "ntt.h"
#include <stdint.h>
#include <stdio.h>
#define N 256
#define Q 8380417
#define QINV 4236238847U

int montgomery_reduce1(uint64_t a) {
  uint64_t t;

  t = a * QINV;
  t &= (1ULL << 32) - 1;
  t *= Q;
  t = a + t;
  t >>= 32;
  return t;
}
int main()
{
 uint32_t p[N];
#ifdef DESIGN1
 uint32_t zetas[N],q0[N/8],q1[N/8],q2[N/8],q3[N/8],q4[N/8],q5[N/8],q6[N/8],q7[N/8];
#elif DESIGN2
 uint32_t zetas[N],q0[N/4],q1[N/4],q2[N/4],q3[N/4];
#endif
 ///////////////////////////////////////////////////////////// Test vector p and zates. P is for test-bench
  for(int m=0;m<256;m++)
  {
   p[m]=(int)m/2;
   zetas[m]=(int)m/2;
  }
  ///////////////////////////////////////////////////////////// Test vector q for RTL
   for(int i=0; i<N/8;i++)
   {
      q0[i]=(int)((i)/2);
      q1[i]=(int)((i+32)/2);
      q2[i]=(int)((i+64)/2);
      q3[i]=(int)((i+96)/2);
      q4[i]=(int)((i+128)/2);
      q5[i]=(int)((i+160)/2);
      q6[i]=(int)((i+192)/2);
      q7[i]=(int)((i+224)/2);
   }
  unsigned int len, start, j, k;
  int  zeta1,zeta2,zeta3,zeta4,zeta5,zeta6,zeta7,zeta8,zeta, t0,t1,t2,t3,t4,t5,t6,t7,t;
///////////////////////////////////////////////////////////////// Baseline Routine to be compared!
  k = 1;
  for(len = 128; len > 0; len >>= 1) {
    for(start = 0; start < N; start = j + len) {
      zeta = zetas[k++];
      for(j = start; j < start + len; ++j) {
        t = montgomery_reduce1((uint64_t)zeta * p[j + len]);
        p[j + len] = p[j] + 2*Q - t;
        p[j] = p[j] + t;
      }
    }
  }
 //////////////////////////////////////////////////////////////////////////////// 
  k=1;
#ifdef DESIGN1
  ntt(q0,q1,q2,q3,q4,q5,q6,q7,zetas);  // Function to be synthesized
#elif defined(DESIGN2)
  ntt(q0,q1,q2,q3,zetas);  // Function to be synthesized
#endif
  int flag=0;
  for(int i=0;i<32;i++)
  {
   if(p[i]!=q0[i]) {
	  flag=1;
	  printf("Output not correct!! i = %d\n",i);
   }
  }
  return(flag);
}
