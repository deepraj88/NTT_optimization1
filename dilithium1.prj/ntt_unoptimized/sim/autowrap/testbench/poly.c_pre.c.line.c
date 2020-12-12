#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 149 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma line 1 "<built-in>" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 2
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
#pragma line 33 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
#pragma line 1 "/usr/include/stdint.h" 1 3 4
#pragma line 25 "/usr/include/stdint.h" 3 4
#pragma line 1 "/usr/include/features.h" 1 3 4
#pragma line 345 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/stdc-predef.h" 1 3 4
#pragma line 346 "/usr/include/features.h" 2 3 4
#pragma line 375 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/sys/cdefs.h" 1 3 4
#pragma line 392 "/usr/include/sys/cdefs.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 393 "/usr/include/sys/cdefs.h" 2 3 4
#pragma line 376 "/usr/include/features.h" 2 3 4
#pragma line 399 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/gnu/stubs.h" 1 3 4
#pragma line 10 "/usr/include/gnu/stubs.h" 3 4
#pragma line 1 "/usr/include/gnu/stubs-64.h" 1 3 4
#pragma line 11 "/usr/include/gnu/stubs.h" 2 3 4
#pragma line 400 "/usr/include/features.h" 2 3 4
#pragma line 26 "/usr/include/stdint.h" 2 3 4
#pragma line 1 "/usr/include/bits/wchar.h" 1 3 4
#pragma line 22 "/usr/include/bits/wchar.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 23 "/usr/include/bits/wchar.h" 2 3 4
#pragma line 27 "/usr/include/stdint.h" 2 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 28 "/usr/include/stdint.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
#pragma empty_line
typedef long int int64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
#pragma empty_line
typedef unsigned int uint32_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned long int uint64_t;
#pragma line 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
#pragma empty_line
typedef long int int_least64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
#pragma empty_line
typedef unsigned long int uint_least64_t;
#pragma line 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;
#pragma empty_line
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
#pragma line 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;
#pragma empty_line
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#pragma line 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;
#pragma empty_line
#pragma empty_line
typedef unsigned long int uintptr_t;
#pragma line 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#pragma line 34 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
#pragma line 2 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/test/cpucycles.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/test/../config.h" 1
#pragma line 5 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/test/cpucycles.h" 2
#pragma line 83 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/test/cpucycles.h"
static inline unsigned long long cpucycles_start(void) {
  unsigned long long result;
#pragma empty_line
  asm volatile("rdtsc; shlq $32,%%rdx; orq %%rdx,%%rax"
    : "=a" (result) : : "%rdx");
#pragma empty_line
  return result;
}
#pragma empty_line
static inline unsigned long long cpucycles_stop(void) {
  unsigned long long result;
#pragma empty_line
  asm volatile("rdtsc; shlq $32,%%rdx; orq %%rdx,%%rax"
    : "=a" (result) : : "%rdx");
#pragma empty_line
  return result;
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
unsigned long long cpucycles_overhead(void);
#pragma line 3 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/params.h" 1
#pragma line 4 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/symmetric.h" 1
#pragma line 25 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/symmetric.h"
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct {
  uint64_t s[25];
} keccak_state;
#pragma empty_line
void shake128_absorb(keccak_state *state,
                     const unsigned char *input,
                     unsigned long long inlen);
#pragma empty_line
void shake128_stream_init(keccak_state *sate,
                          const unsigned char *seed,
                          uint16_t nonce);
#pragma empty_line
void shake128_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            keccak_state *state);
#pragma empty_line
void shake256_absorb(keccak_state *state,
                     const unsigned char *input,
                     unsigned long long inlen);
#pragma empty_line
void shake256_stream_init(keccak_state *state,
                          const unsigned char *seed,
                          uint16_t nonce);
#pragma empty_line
void shake256_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            keccak_state *state);
#pragma empty_line
void shake128(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen);
#pragma empty_line
void shake256(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen);
#pragma line 26 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/symmetric.h" 2
#pragma line 36 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/symmetric.h"
typedef keccak_state stream128_state;
typedef keccak_state stream256_state;
#pragma line 5 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/ntt.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
void ntt(uint32_t p[256]);
void invntt_frominvmont(uint32_t p[256]);
#pragma line 6 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/reduce.h" 1
#pragma line 10 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/reduce.h"
uint32_t montgomery_reduce(uint64_t a);
#pragma empty_line
#pragma empty_line
uint32_t reduce32(uint32_t a);
#pragma empty_line
#pragma empty_line
uint32_t csubq(uint32_t a);
#pragma empty_line
#pragma empty_line
uint32_t freeze(uint32_t a);
#pragma line 7 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/rounding.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
uint32_t power2round(const uint32_t a, uint32_t *a0);
uint32_t decompose(uint32_t a, uint32_t *a0);
unsigned int make_hint(const uint32_t a0, const uint32_t a1);
uint32_t use_hint(const uint32_t a, const unsigned int hint);
#pragma line 8 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct {
  uint32_t coeffs[256];
} poly __attribute__((aligned(32)));
#pragma empty_line
void poly_reduce(poly *a);
void poly_csubq(poly *a);
void poly_freeze(poly *a);
#pragma empty_line
void poly_add(poly *c, const poly *a, const poly *b);
void poly_sub(poly *c, const poly *a, const poly *b);
void poly_shiftl(poly *a);
#pragma empty_line
void poly_ntt(poly *a);
void poly_invntt_montgomery(poly *a);
void poly_pointwise_invmontgomery(poly *c, const poly *a, const poly *b);
#pragma empty_line
void poly_power2round(poly *a1, poly *a0, const poly *a);
void poly_decompose(poly *a1, poly *a0, const poly *a);
unsigned int poly_make_hint(poly *h, const poly *a0, const poly *a1);
void poly_use_hint(poly *a, const poly *b, const poly *h);
#pragma empty_line
int poly_chknorm(const poly *a, uint32_t B);
void poly_uniform(poly *a,
                  const unsigned char seed[32],
                  uint16_t nonce);
void poly_uniform_eta(poly *a,
                      const unsigned char seed[32],
                      uint16_t nonce);
void poly_uniform_gamma1m1(poly *a,
                           const unsigned char seed[48],
                           uint16_t nonce);
#pragma empty_line
void polyeta_pack(unsigned char *r, const poly *a);
void polyeta_unpack(poly *r, const unsigned char *a);
#pragma empty_line
void polyt1_pack(unsigned char *r, const poly *a);
void polyt1_unpack(poly *r, const unsigned char *a);
#pragma empty_line
void polyt0_pack(unsigned char *r, const poly *a);
void polyt0_unpack(poly *r, const unsigned char *a);
#pragma empty_line
void polyz_pack(unsigned char *r, const poly *a);
void polyz_unpack(poly *r, const unsigned char *a);
#pragma empty_line
void polyw1_pack(unsigned char *r, const poly *a);
#pragma line 9 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c" 2
#pragma line 23 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_reduce(poly *a) {
  unsigned int i;
                ;
#pragma empty_line
  for(i = 0; i < 256; ++i)
    a->coeffs[i] = reduce32(a->coeffs[i]);
#pragma empty_line
                    ;
}
#pragma line 41 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_csubq(poly *a) {
  unsigned int i;
                ;
#pragma empty_line
  for(i = 0; i < 256; ++i)
    a->coeffs[i] = csubq(a->coeffs[i]);
#pragma empty_line
                    ;
}
#pragma line 59 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_freeze(poly *a) {
  unsigned int i;
                ;
#pragma empty_line
  poly_freeze_label5:for(i = 0; i < 256; ++i)
    a->coeffs[i] = freeze(a->coeffs[i]);
#pragma empty_line
                    ;
}
#pragma line 78 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_add(poly *c, const poly *a, const poly *b) {
  unsigned int i;
                ;
#pragma empty_line
  poly_add_label6:for(i = 0; i < 256; ++i)
    c->coeffs[i] = a->coeffs[i] + b->coeffs[i];
#pragma empty_line
                    ;
}
#pragma line 100 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_sub(poly *c, const poly *a, const poly *b) {
  unsigned int i;
                ;
#pragma empty_line
  poly_sub_label8:for(i = 0; i < 256; ++i)
    c->coeffs[i] = a->coeffs[i] + 2*8380417 - b->coeffs[i];
#pragma empty_line
                    ;
}
#pragma line 118 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_shiftl(poly *a) {
  unsigned int i;
                ;
#pragma empty_line
  poly_shiftl_label9:for(i = 0; i < 256; ++i)
    a->coeffs[i] <<= 14;
#pragma empty_line
                    ;
}
#pragma line 136 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_ntt(poly *a) {
                ;
#pragma empty_line
  ntt(a->coeffs);
#pragma empty_line
                    ;
}
#pragma line 152 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_invntt_montgomery(poly *a) {
                ;
#pragma empty_line
  invntt_frominvmont(a->coeffs);
#pragma empty_line
                    ;
}
#pragma line 172 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_pointwise_invmontgomery(poly *c, const poly *a, const poly *b) {
  unsigned int i;
                ;
#pragma empty_line
  for(i = 0; i < 256; ++i)
    c->coeffs[i] = montgomery_reduce((uint64_t)a->coeffs[i] * b->coeffs[i]);
#pragma empty_line
                    ;
}
#pragma line 194 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_power2round(poly *a1, poly *a0, const poly *a) {
  unsigned int i;
                ;
#pragma empty_line
  for(i = 0; i < 256; ++i)
    a1->coeffs[i] = power2round(a->coeffs[i], &a0->coeffs[i]);
#pragma empty_line
                      ;
}
#pragma line 217 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_decompose(poly *a1, poly *a0, const poly *a) {
  unsigned int i;
                ;
#pragma empty_line
  for(i = 0; i < 256; ++i)
    a1->coeffs[i] = decompose(a->coeffs[i], &a0->coeffs[i]);
#pragma empty_line
                      ;
}
#pragma line 240 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
unsigned int poly_make_hint(poly *h, const poly *a0, const poly *a1) {
  unsigned int i, s = 0;
                ;
#pragma empty_line
  for(i = 0; i < 256; ++i) {
    h->coeffs[i] = make_hint(a0->coeffs[i], a1->coeffs[i]);
    s += h->coeffs[i];
  }
#pragma empty_line
                      ;
  return s;
}
#pragma line 262 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_use_hint(poly *a, const poly *b, const poly *h) {
  unsigned int i;
                ;
#pragma empty_line
  for(i = 0; i < 256; ++i)
    a->coeffs[i] = use_hint(b->coeffs[i], h->coeffs[i]);
#pragma empty_line
                      ;
}
#pragma line 283 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
int poly_chknorm(const poly *a, uint32_t B) {
  unsigned int i;
  int32_t t;
                ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  for(i = 0; i < 256; ++i) {
#pragma empty_line
    t = (8380417 -1)/2 - a->coeffs[i];
    t ^= (t >> 31);
    t = (8380417 -1)/2 - t;
#pragma empty_line
    if((uint32_t)t >= B) {
                           ;
      return 1;
    }
  }
#pragma empty_line
                       ;
  return 0;
}
#pragma line 321 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
static unsigned int rej_uniform(uint32_t *a,
                                unsigned int len,
                                const unsigned char *buf,
                                unsigned int buflen)
{
  unsigned int ctr, pos;
  uint32_t t;
                ;
#pragma empty_line
  ctr = pos = 0;
  while(ctr < len && pos + 3 <= buflen) {
    t = buf[pos++];
    t |= (uint32_t)buf[pos++] << 8;
    t |= (uint32_t)buf[pos++] << 16;
    t &= 0x7FFFFF;
#pragma empty_line
    if(t < 8380417)
      a[ctr++] = t;
  }
#pragma empty_line
                       ;
  return ctr;
}
#pragma line 357 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_uniform(poly *a,
                  const unsigned char seed[32],
                  uint16_t nonce)
{
  unsigned int i, ctr, off;
  unsigned int nblocks = (769 + 168)/168;
  unsigned int buflen = nblocks*168;
  unsigned char buf[buflen + 2];
  stream128_state state;
#pragma empty_line
  shake128_stream_init(&state, seed, nonce);
  shake128_squeezeblocks(buf, nblocks, &state);
#pragma empty_line
  ctr = rej_uniform(a->coeffs, 256, buf, buflen);
#pragma empty_line
  while(ctr < 256) {
    off = buflen % 3;
    poly_uniform_label10:for(i = 0; i < off; ++i)
      buf[i] = buf[buflen - off + i];
#pragma empty_line
    buflen = 168 + off;
    shake128_squeezeblocks(buf + off, 1, &state);
    ctr += rej_uniform(a->coeffs + ctr, 256 - ctr, buf, buflen);
  }
}
#pragma line 397 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
static unsigned int rej_eta(uint32_t *a,
                            unsigned int len,
                            const unsigned char *buf,
                            unsigned int buflen)
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  unsigned int ctr, pos;
  uint32_t t0, t1;
                ;
#pragma empty_line
  ctr = pos = 0;
  rej_eta_label7:while(ctr < len && pos < buflen) {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    t0 = buf[pos] & 0x0F;
    t1 = buf[pos++] >> 4;
#pragma empty_line
#pragma empty_line
    if(t0 <= 2*7)
      a[ctr++] = 8380417 + 7 - t0;
    if(t1 <= 2*7 && ctr < len)
      a[ctr++] = 8380417 + 7 - t1;
  }
#pragma empty_line
                       ;
  return ctr;
}
#pragma line 441 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_uniform_eta(poly *a,
                      const unsigned char seed[32],
                      uint16_t nonce)
{
  unsigned int ctr;
  unsigned int nblocks = ((256/2 * (1U << 4)) / (2*7 + 1)
                          + 168) / 168;
  unsigned int buflen = nblocks*168;
  unsigned char buf[buflen];
  stream128_state state;
#pragma empty_line
  shake128_stream_init(&state, seed, nonce);
  shake128_squeezeblocks(buf, nblocks, &state);
#pragma empty_line
  ctr = rej_eta(a->coeffs, 256, buf, buflen);
#pragma empty_line
  while(ctr < 256) {
    shake128_squeezeblocks(buf, 1, &state);
    ctr += rej_eta(a->coeffs + ctr, 256 - ctr, buf, 168);
  }
}
#pragma line 478 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
static unsigned int rej_gamma1m1(uint32_t *a,
                                 unsigned int len,
                                 const unsigned char *buf,
                                 unsigned int buflen)
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  unsigned int ctr, pos;
  uint32_t t0, t1;
                ;
#pragma empty_line
  ctr = pos = 0;
  rej_gamma1m1_label11:while(ctr < len && pos + 5 <= buflen) {
    t0 = buf[pos];
    t0 |= (uint32_t)buf[pos + 1] << 8;
    t0 |= (uint32_t)buf[pos + 2] << 16;
    t0 &= 0xFFFFF;
#pragma empty_line
    t1 = buf[pos + 2] >> 4;
    t1 |= (uint32_t)buf[pos + 3] << 4;
    t1 |= (uint32_t)buf[pos + 4] << 12;
#pragma empty_line
    pos += 5;
#pragma empty_line
    if(t0 <= 2*((8380417 - 1)/16) - 2)
      a[ctr++] = 8380417 + ((8380417 - 1)/16) - 1 - t0;
    if(t1 <= 2*((8380417 - 1)/16) - 2 && ctr < len)
      a[ctr++] = 8380417 + ((8380417 - 1)/16) - 1 - t1;
  }
#pragma empty_line
                       ;
  return ctr;
}
#pragma line 525 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void poly_uniform_gamma1m1(poly *a,
                           const unsigned char seed[48],
                           uint16_t nonce)
{
  unsigned int i, ctr, off;
  unsigned int nblocks = (641 + 136) / 136;
  unsigned int buflen = nblocks * 136;
  unsigned char buf[buflen + 4];
  stream256_state state;
#pragma empty_line
  shake256_stream_init(&state, seed, nonce);
  shake256_squeezeblocks(buf, nblocks, &state);
#pragma empty_line
  ctr = rej_gamma1m1(a->coeffs, 256, buf, buflen);
#pragma empty_line
  while(ctr < 256) {
    off = buflen % 5;
    for(i = 0; i < off; ++i)
      buf[i] = buf[buflen - off + i];
#pragma empty_line
    buflen = 136 + off;
    shake256_squeezeblocks(buf + off, 1, &state);
    ctr += rej_gamma1m1(a->coeffs + ctr, 256 - ctr, buf, buflen);
  }
}
#pragma line 561 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void polyeta_pack(unsigned char *r, const poly *a) {
#pragma empty_line
#pragma empty_line
#pragma empty_line
  unsigned int i;
  unsigned char t[8];
                ;
#pragma line 585 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
  polyeta_pack_label12:for(i = 0; i < 256/2; ++i) {
    t[0] = 8380417 + 7 - a->coeffs[2*i+0];
    t[1] = 8380417 + 7 - a->coeffs[2*i+1];
    r[i] = t[0] | (t[1] << 4);
  }
#pragma empty_line
#pragma empty_line
                     ;
}
#pragma line 604 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void polyeta_unpack(poly *r, const unsigned char *a) {
  unsigned int i;
                ;
#pragma line 629 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
  polyeta_unpack_label15:for(i = 0; i < 256/2; ++i) {
    r->coeffs[2*i+0] = a[i] & 0x0F;
    r->coeffs[2*i+1] = a[i] >> 4;
    r->coeffs[2*i+0] = 8380417 + 7 - r->coeffs[2*i+0];
    r->coeffs[2*i+1] = 8380417 + 7 - r->coeffs[2*i+1];
  }
#pragma empty_line
#pragma empty_line
                     ;
}
#pragma line 650 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void polyt1_pack(unsigned char *r, const poly *a) {
#pragma empty_line
#pragma empty_line
#pragma empty_line
  unsigned int i;
                ;
#pragma empty_line
  polyt1_pack_label16:for(i = 0; i < 256/8; ++i) {
    r[9*i+0] = (a->coeffs[8*i+0] >> 0);
    r[9*i+1] = (a->coeffs[8*i+0] >> 8) | (a->coeffs[8*i+1] << 1);
    r[9*i+2] = (a->coeffs[8*i+1] >> 7) | (a->coeffs[8*i+2] << 2);
    r[9*i+3] = (a->coeffs[8*i+2] >> 6) | (a->coeffs[8*i+3] << 3);
    r[9*i+4] = (a->coeffs[8*i+3] >> 5) | (a->coeffs[8*i+4] << 4);
    r[9*i+5] = (a->coeffs[8*i+4] >> 4) | (a->coeffs[8*i+5] << 5);
    r[9*i+6] = (a->coeffs[8*i+5] >> 3) | (a->coeffs[8*i+6] << 6);
    r[9*i+7] = (a->coeffs[8*i+6] >> 2) | (a->coeffs[8*i+7] << 7);
    r[9*i+8] = (a->coeffs[8*i+7] >> 1);
  }
#pragma empty_line
                     ;
}
#pragma line 681 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void polyt1_unpack(poly *r, const unsigned char *a) {
  unsigned int i;
                ;
#pragma empty_line
  for(i = 0; i < 256/8; ++i) {
    r->coeffs[8*i+0] = ((a[9*i+0] >> 0) | ((uint32_t)a[9*i+1] << 8)) & 0x1FF;
    r->coeffs[8*i+1] = ((a[9*i+1] >> 1) | ((uint32_t)a[9*i+2] << 7)) & 0x1FF;
    r->coeffs[8*i+2] = ((a[9*i+2] >> 2) | ((uint32_t)a[9*i+3] << 6)) & 0x1FF;
    r->coeffs[8*i+3] = ((a[9*i+3] >> 3) | ((uint32_t)a[9*i+4] << 5)) & 0x1FF;
    r->coeffs[8*i+4] = ((a[9*i+4] >> 4) | ((uint32_t)a[9*i+5] << 4)) & 0x1FF;
    r->coeffs[8*i+5] = ((a[9*i+5] >> 5) | ((uint32_t)a[9*i+6] << 3)) & 0x1FF;
    r->coeffs[8*i+6] = ((a[9*i+6] >> 6) | ((uint32_t)a[9*i+7] << 2)) & 0x1FF;
    r->coeffs[8*i+7] = ((a[9*i+7] >> 7) | ((uint32_t)a[9*i+8] << 1)) & 0x1FF;
  }
#pragma empty_line
                     ;
}
#pragma line 709 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void polyt0_pack(unsigned char *r, const poly *a) {
  unsigned int i;
  uint32_t t[4];
                ;
#pragma empty_line
  polyt0_pack_label13:for(i = 0; i < 256/4; ++i) {
    t[0] = 8380417 + (1U << (14 -1)) - a->coeffs[4*i+0];
    t[1] = 8380417 + (1U << (14 -1)) - a->coeffs[4*i+1];
    t[2] = 8380417 + (1U << (14 -1)) - a->coeffs[4*i+2];
    t[3] = 8380417 + (1U << (14 -1)) - a->coeffs[4*i+3];
#pragma empty_line
    r[7*i+0] = t[0];
    r[7*i+1] = t[0] >> 8;
    r[7*i+1] |= t[1] << 6;
    r[7*i+2] = t[1] >> 2;
    r[7*i+3] = t[1] >> 10;
    r[7*i+3] |= t[2] << 4;
    r[7*i+4] = t[2] >> 4;
    r[7*i+5] = t[2] >> 12;
    r[7*i+5] |= t[3] << 2;
    r[7*i+6] = t[3] >> 6;
  }
#pragma empty_line
                     ;
}
#pragma line 744 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void polyt0_unpack(poly *r, const unsigned char *a) {
  unsigned int i;
                ;
#pragma empty_line
  polyt0_unpack_label14:for(i = 0; i < 256/4; ++i) {
    r->coeffs[4*i+0] = a[7*i+0];
    r->coeffs[4*i+0] |= (uint32_t)(a[7*i+1] & 0x3F) << 8;
#pragma empty_line
    r->coeffs[4*i+1] = a[7*i+1] >> 6;
    r->coeffs[4*i+1] |= (uint32_t)a[7*i+2] << 2;
    r->coeffs[4*i+1] |= (uint32_t)(a[7*i+3] & 0x0F) << 10;
#pragma empty_line
    r->coeffs[4*i+2] = a[7*i+3] >> 4;
    r->coeffs[4*i+2] |= (uint32_t)a[7*i+4] << 4;
    r->coeffs[4*i+2] |= (uint32_t)(a[7*i+5] & 0x03) << 12;
#pragma empty_line
    r->coeffs[4*i+3] = a[7*i+5] >> 2;
    r->coeffs[4*i+3] |= (uint32_t)a[7*i+6] << 6;
#pragma empty_line
    r->coeffs[4*i+0] = 8380417 + (1U << (14 -1)) - r->coeffs[4*i+0];
    r->coeffs[4*i+1] = 8380417 + (1U << (14 -1)) - r->coeffs[4*i+1];
    r->coeffs[4*i+2] = 8380417 + (1U << (14 -1)) - r->coeffs[4*i+2];
    r->coeffs[4*i+3] = 8380417 + (1U << (14 -1)) - r->coeffs[4*i+3];
  }
#pragma empty_line
                     ;
}
#pragma line 783 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void polyz_pack(unsigned char *r, const poly *a) {
#pragma empty_line
#pragma empty_line
#pragma empty_line
  unsigned int i;
  uint32_t t[2];
                ;
#pragma empty_line
  polyz_pack_label17:for(i = 0; i < 256/2; ++i) {
#pragma empty_line
    t[0] = ((8380417 - 1)/16) - 1 - a->coeffs[2*i+0];
    t[0] += ((int32_t)t[0] >> 31) & 8380417;
    t[1] = ((8380417 - 1)/16) - 1 - a->coeffs[2*i+1];
    t[1] += ((int32_t)t[1] >> 31) & 8380417;
#pragma empty_line
    r[5*i+0] = t[0];
    r[5*i+1] = t[0] >> 8;
    r[5*i+2] = t[0] >> 16;
    r[5*i+2] |= t[1] << 4;
    r[5*i+3] = t[1] >> 4;
    r[5*i+4] = t[1] >> 12;
  }
#pragma empty_line
                     ;
}
#pragma line 819 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void polyz_unpack(poly *r, const unsigned char *a) {
  unsigned int i;
                ;
#pragma empty_line
  for(i = 0; i < 256/2; ++i) {
    r->coeffs[2*i+0] = a[5*i+0];
    r->coeffs[2*i+0] |= (uint32_t)a[5*i+1] << 8;
    r->coeffs[2*i+0] |= (uint32_t)(a[5*i+2] & 0x0F) << 16;
#pragma empty_line
    r->coeffs[2*i+1] = a[5*i+2] >> 4;
    r->coeffs[2*i+1] |= (uint32_t)a[5*i+3] << 4;
    r->coeffs[2*i+1] |= (uint32_t)a[5*i+4] << 12;
#pragma empty_line
    r->coeffs[2*i+0] = ((8380417 - 1)/16) - 1 - r->coeffs[2*i+0];
    r->coeffs[2*i+0] += ((int32_t)r->coeffs[2*i+0] >> 31) & 8380417;
    r->coeffs[2*i+1] = ((8380417 - 1)/16) - 1 - r->coeffs[2*i+1];
    r->coeffs[2*i+1] += ((int32_t)r->coeffs[2*i+1] >> 31) & 8380417;
  }
#pragma empty_line
                     ;
}
#pragma line 851 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.c"
void polyw1_pack(unsigned char *r, const poly *a) {
  unsigned int i;
                ;
#pragma empty_line
  polyw1_pack_label18:for(i = 0; i < 256/2; ++i)
    r[i] = a->coeffs[2*i+0] | (a->coeffs[2*i+1] << 4);
#pragma empty_line
                     ;
}
