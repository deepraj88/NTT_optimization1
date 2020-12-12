#include"stdlib.h"
#define N 256
#define Q 8380417
#define QINV 4236238847U
#include <stdint.h>
#define DESIGN1

#if defined(DESIGN1)
void ntt(uint32_t q0[N/8],uint32_t q1[N/8],uint32_t q2[N/8],uint32_t q3[N/8],uint32_t q4[N/8],
		uint32_t q5[N/8],uint32_t q6[N/8],uint32_t q7[N/8], uint32_t zetas[N]);
#elif defined(DESIGN2)
void ntt(uint32_t q0[N/8],uint32_t q1[N/8],uint32_t q2[N/8],uint32_t q3[N/8],uint32_t q4[N/8],
		uint32_t q5[N/8],uint32_t q6[N/8],uint32_t q7[N/8], uint32_t zetas[N]);
#endif
