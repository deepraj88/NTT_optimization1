# 1 "poly.c"
# 1 "poly.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1





# 1 "/opt/Xilinx2018/Vivado/2018.3/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 300 "/opt/Xilinx2018/Vivado/2018.3/common/technology/autopilot/etc/autopilot_ssdm_op.h"
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite() __attribute__ ((nothrow));


    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite() __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));

    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));

    void _ssdm_op_Return() __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));

    void _ssdm_op_SpecReset() __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));

    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));

    void _ssdm_op_SpecExt() __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));

    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));

    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));

    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));

    void _ssdm_SpecStream() __attribute__ ((nothrow));

    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));

    void _ssdm_SpecDependence() __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));

    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));
# 7 "<command line>" 2
# 1 "<built-in>" 2
# 1 "poly.c" 2
# 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
# 33 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
# 25 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 345 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 346 "/usr/include/features.h" 2 3 4
# 375 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 392 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 393 "/usr/include/sys/cdefs.h" 2 3 4
# 376 "/usr/include/features.h" 2 3 4
# 399 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 400 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 22 "/usr/include/bits/wchar.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/wchar.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4








typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
# 2 "poly.c" 2
# 1 "./test/cpucycles.h" 1



# 1 "./test/../config.h" 1
# 5 "./test/cpucycles.h" 2
# 83 "./test/cpucycles.h"
static inline unsigned long long cpucycles_start(void) {
  unsigned long long result;

  asm volatile("rdtsc; shlq $32,%%rdx; orq %%rdx,%%rax"
    : "=a" (result) : : "%rdx");

  return result;
}

static inline unsigned long long cpucycles_stop(void) {
  unsigned long long result;

  asm volatile("rdtsc; shlq $32,%%rdx; orq %%rdx,%%rax"
    : "=a" (result) : : "%rdx");

  return result;
}




unsigned long long cpucycles_overhead(void);
# 3 "poly.c" 2
# 1 "./params.h" 1
# 4 "poly.c" 2
# 1 "./symmetric.h" 1
# 25 "./symmetric.h"
# 1 "./fips202.h" 1








typedef struct {
  uint64_t s[25];
} keccak_state;

void shake128_absorb(keccak_state *state,
                     const unsigned char *input,
                     unsigned long long inlen);

void shake128_stream_init(keccak_state *sate,
                          const unsigned char *seed,
                          uint16_t nonce);

void shake128_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            keccak_state *state);

void shake256_absorb(keccak_state *state,
                     const unsigned char *input,
                     unsigned long long inlen);

void shake256_stream_init(keccak_state *state,
                          const unsigned char *seed,
                          uint16_t nonce);

void shake256_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            keccak_state *state);

void shake128(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen);

void shake256(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen);
# 26 "./symmetric.h" 2
# 36 "./symmetric.h"
typedef keccak_state stream128_state;
typedef keccak_state stream256_state;
# 5 "poly.c" 2
# 1 "./ntt.h" 1






void ntt(uint32_t p[256]);
void invntt_frominvmont(uint32_t p[256]);
# 6 "poly.c" 2
# 1 "./reduce.h" 1
# 10 "./reduce.h"
uint32_t montgomery_reduce(uint64_t a);


uint32_t reduce32(uint32_t a);


uint32_t csubq(uint32_t a);


uint32_t freeze(uint32_t a);
# 7 "poly.c" 2
# 1 "./rounding.h" 1





uint32_t power2round(const uint32_t a, uint32_t *a0);
uint32_t decompose(uint32_t a, uint32_t *a0);
unsigned int make_hint(const uint32_t a0, const uint32_t a1);
uint32_t use_hint(const uint32_t a, const unsigned int hint);
# 8 "poly.c" 2
# 1 "./poly.h" 1






typedef struct {
  uint32_t coeffs[256];
} poly __attribute__((aligned(32)));

void poly_reduce(poly *a);
void poly_csubq(poly *a);
void poly_freeze(poly *a);

void poly_add(poly *c, const poly *a, const poly *b);
void poly_sub(poly *c, const poly *a, const poly *b);
void poly_shiftl(poly *a);

void poly_ntt(poly *a);
void poly_invntt_montgomery(poly *a);
void poly_pointwise_invmontgomery(poly *c, const poly *a, const poly *b);

void poly_power2round(poly *a1, poly *a0, const poly *a);
void poly_decompose(poly *a1, poly *a0, const poly *a);
unsigned int poly_make_hint(poly *h, const poly *a0, const poly *a1);
void poly_use_hint(poly *a, const poly *b, const poly *h);

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

void polyeta_pack(unsigned char *r, const poly *a);
void polyeta_unpack(poly *r, const unsigned char *a);

void polyt1_pack(unsigned char *r, const poly *a);
void polyt1_unpack(poly *r, const unsigned char *a);

void polyt0_pack(unsigned char *r, const poly *a);
void polyt0_unpack(poly *r, const unsigned char *a);

void polyz_pack(unsigned char *r, const poly *a);
void polyz_unpack(poly *r, const unsigned char *a);

void polyw1_pack(unsigned char *r, const poly *a);
# 9 "poly.c" 2
# 23 "poly.c"
void poly_reduce(poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a->coeffs[i] = reduce32(a->coeffs[i]);

                    ;
}
# 41 "poly.c"
void poly_csubq(poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a->coeffs[i] = csubq(a->coeffs[i]);

                    ;
}
# 59 "poly.c"
void poly_freeze(poly *a) {
  unsigned int i;
                ;

  poly_freeze_label5:for(i = 0; i < 256; ++i)
    a->coeffs[i] = freeze(a->coeffs[i]);

                    ;
}
# 78 "poly.c"
void poly_add(poly *c, const poly *a, const poly *b) {
  unsigned int i;
                ;

  poly_add_label6:for(i = 0; i < 256; ++i)
    c->coeffs[i] = a->coeffs[i] + b->coeffs[i];

                    ;
}
# 100 "poly.c"
void poly_sub(poly *c, const poly *a, const poly *b) {
  unsigned int i;
                ;

  poly_sub_label8:for(i = 0; i < 256; ++i)
    c->coeffs[i] = a->coeffs[i] + 2*8380417 - b->coeffs[i];

                    ;
}
# 118 "poly.c"
void poly_shiftl(poly *a) {
  unsigned int i;
                ;

  poly_shiftl_label9:for(i = 0; i < 256; ++i)
    a->coeffs[i] <<= 14;

                    ;
}
# 136 "poly.c"
void poly_ntt(poly *a) {
                ;

  ntt(a->coeffs);

                    ;
}
# 152 "poly.c"
void poly_invntt_montgomery(poly *a) {
                ;

  invntt_frominvmont(a->coeffs);

                    ;
}
# 172 "poly.c"
void poly_pointwise_invmontgomery(poly *c, const poly *a, const poly *b) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    c->coeffs[i] = montgomery_reduce((uint64_t)a->coeffs[i] * b->coeffs[i]);

                    ;
}
# 194 "poly.c"
void poly_power2round(poly *a1, poly *a0, const poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a1->coeffs[i] = power2round(a->coeffs[i], &a0->coeffs[i]);

                      ;
}
# 217 "poly.c"
void poly_decompose(poly *a1, poly *a0, const poly *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a1->coeffs[i] = decompose(a->coeffs[i], &a0->coeffs[i]);

                      ;
}
# 240 "poly.c"
unsigned int poly_make_hint(poly *h, const poly *a0, const poly *a1) {
  unsigned int i, s = 0;
                ;

  for(i = 0; i < 256; ++i) {
    h->coeffs[i] = make_hint(a0->coeffs[i], a1->coeffs[i]);
    s += h->coeffs[i];
  }

                      ;
  return s;
}
# 262 "poly.c"
void poly_use_hint(poly *a, const poly *b, const poly *h) {
  unsigned int i;
                ;

  for(i = 0; i < 256; ++i)
    a->coeffs[i] = use_hint(b->coeffs[i], h->coeffs[i]);

                      ;
}
# 283 "poly.c"
int poly_chknorm(const poly *a, uint32_t B) {
  unsigned int i;
  int32_t t;
                ;




  for(i = 0; i < 256; ++i) {

    t = (8380417 -1)/2 - a->coeffs[i];
    t ^= (t >> 31);
    t = (8380417 -1)/2 - t;

    if((uint32_t)t >= B) {
                           ;
      return 1;
    }
  }

                       ;
  return 0;
}
# 321 "poly.c"
static unsigned int rej_uniform(uint32_t *a,
                                unsigned int len,
                                const unsigned char *buf,
                                unsigned int buflen)
{
  unsigned int ctr, pos;
  uint32_t t;
                ;

  ctr = pos = 0;
  while(ctr < len && pos + 3 <= buflen) {
    t = buf[pos++];
    t |= (uint32_t)buf[pos++] << 8;
    t |= (uint32_t)buf[pos++] << 16;
    t &= 0x7FFFFF;

    if(t < 8380417)
      a[ctr++] = t;
  }

                       ;
  return ctr;
}
# 357 "poly.c"
void poly_uniform(poly *a,
                  const unsigned char seed[32],
                  uint16_t nonce)
{_ssdm_SpecArrayDimSize(seed, 32);
  unsigned int i, ctr, off;
  unsigned int nblocks = (769 + 168)/168;
  unsigned int buflen = nblocks*168;
  unsigned char buf[buflen + 2];
  stream128_state state;

  shake128_stream_init(&state, seed, nonce);
  shake128_squeezeblocks(buf, nblocks, &state);

  ctr = rej_uniform(a->coeffs, 256, buf, buflen);

  while(ctr < 256) {
    off = buflen % 3;
    poly_uniform_label10:for(i = 0; i < off; ++i)
      buf[i] = buf[buflen - off + i];

    buflen = 168 + off;
    shake128_squeezeblocks(buf + off, 1, &state);
    ctr += rej_uniform(a->coeffs + ctr, 256 - ctr, buf, buflen);
  }
}
# 397 "poly.c"
static unsigned int rej_eta(uint32_t *a,
                            unsigned int len,
                            const unsigned char *buf,
                            unsigned int buflen)
{



  unsigned int ctr, pos;
  uint32_t t0, t1;
                ;

  ctr = pos = 0;
  rej_eta_label7:while(ctr < len && pos < buflen) {




    t0 = buf[pos] & 0x0F;
    t1 = buf[pos++] >> 4;


    if(t0 <= 2*7)
      a[ctr++] = 8380417 + 7 - t0;
    if(t1 <= 2*7 && ctr < len)
      a[ctr++] = 8380417 + 7 - t1;
  }

                       ;
  return ctr;
}
# 441 "poly.c"
void poly_uniform_eta(poly *a,
                      const unsigned char seed[32],
                      uint16_t nonce)
{_ssdm_SpecArrayDimSize(seed, 32);
  unsigned int ctr;
  unsigned int nblocks = ((256/2 * (1U << 4)) / (2*7 + 1)
                          + 168) / 168;
  unsigned int buflen = nblocks*168;
  unsigned char buf[buflen];
  stream128_state state;

  shake128_stream_init(&state, seed, nonce);
  shake128_squeezeblocks(buf, nblocks, &state);

  ctr = rej_eta(a->coeffs, 256, buf, buflen);

  while(ctr < 256) {
    shake128_squeezeblocks(buf, 1, &state);
    ctr += rej_eta(a->coeffs + ctr, 256 - ctr, buf, 168);
  }
}
# 478 "poly.c"
static unsigned int rej_gamma1m1(uint32_t *a,
                                 unsigned int len,
                                 const unsigned char *buf,
                                 unsigned int buflen)
{



  unsigned int ctr, pos;
  uint32_t t0, t1;
                ;

  ctr = pos = 0;
  rej_gamma1m1_label11:while(ctr < len && pos + 5 <= buflen) {
    t0 = buf[pos];
    t0 |= (uint32_t)buf[pos + 1] << 8;
    t0 |= (uint32_t)buf[pos + 2] << 16;
    t0 &= 0xFFFFF;

    t1 = buf[pos + 2] >> 4;
    t1 |= (uint32_t)buf[pos + 3] << 4;
    t1 |= (uint32_t)buf[pos + 4] << 12;

    pos += 5;

    if(t0 <= 2*((8380417 - 1)/16) - 2)
      a[ctr++] = 8380417 + ((8380417 - 1)/16) - 1 - t0;
    if(t1 <= 2*((8380417 - 1)/16) - 2 && ctr < len)
      a[ctr++] = 8380417 + ((8380417 - 1)/16) - 1 - t1;
  }

                       ;
  return ctr;
}
# 525 "poly.c"
void poly_uniform_gamma1m1(poly *a,
                           const unsigned char seed[48],
                           uint16_t nonce)
{_ssdm_SpecArrayDimSize(seed, 48);
  unsigned int i, ctr, off;
  unsigned int nblocks = (641 + 136) / 136;
  unsigned int buflen = nblocks * 136;
  unsigned char buf[buflen + 4];
  stream256_state state;

  shake256_stream_init(&state, seed, nonce);
  shake256_squeezeblocks(buf, nblocks, &state);

  ctr = rej_gamma1m1(a->coeffs, 256, buf, buflen);

  while(ctr < 256) {
    off = buflen % 5;
    for(i = 0; i < off; ++i)
      buf[i] = buf[buflen - off + i];

    buflen = 136 + off;
    shake256_squeezeblocks(buf + off, 1, &state);
    ctr += rej_gamma1m1(a->coeffs + ctr, 256 - ctr, buf, buflen);
  }
}
# 561 "poly.c"
void polyeta_pack(unsigned char *r, const poly *a) {



  unsigned int i;
  unsigned char t[8];
                ;
# 585 "poly.c"
  polyeta_pack_label12:for(i = 0; i < 256/2; ++i) {
    t[0] = 8380417 + 7 - a->coeffs[2*i+0];
    t[1] = 8380417 + 7 - a->coeffs[2*i+1];
    r[i] = t[0] | (t[1] << 4);
  }


                     ;
}
# 604 "poly.c"
void polyeta_unpack(poly *r, const unsigned char *a) {
  unsigned int i;
                ;
# 629 "poly.c"
  polyeta_unpack_label15:for(i = 0; i < 256/2; ++i) {
    r->coeffs[2*i+0] = a[i] & 0x0F;
    r->coeffs[2*i+1] = a[i] >> 4;
    r->coeffs[2*i+0] = 8380417 + 7 - r->coeffs[2*i+0];
    r->coeffs[2*i+1] = 8380417 + 7 - r->coeffs[2*i+1];
  }


                     ;
}
# 650 "poly.c"
void polyt1_pack(unsigned char *r, const poly *a) {



  unsigned int i;
                ;

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

                     ;
}
# 681 "poly.c"
void polyt1_unpack(poly *r, const unsigned char *a) {
  unsigned int i;
                ;

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

                     ;
}
# 709 "poly.c"
void polyt0_pack(unsigned char *r, const poly *a) {
  unsigned int i;
  uint32_t t[4];
                ;

  polyt0_pack_label13:for(i = 0; i < 256/4; ++i) {
    t[0] = 8380417 + (1U << (14 -1)) - a->coeffs[4*i+0];
    t[1] = 8380417 + (1U << (14 -1)) - a->coeffs[4*i+1];
    t[2] = 8380417 + (1U << (14 -1)) - a->coeffs[4*i+2];
    t[3] = 8380417 + (1U << (14 -1)) - a->coeffs[4*i+3];

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

                     ;
}
# 744 "poly.c"
void polyt0_unpack(poly *r, const unsigned char *a) {
  unsigned int i;
                ;

  polyt0_unpack_label14:for(i = 0; i < 256/4; ++i) {
    r->coeffs[4*i+0] = a[7*i+0];
    r->coeffs[4*i+0] |= (uint32_t)(a[7*i+1] & 0x3F) << 8;

    r->coeffs[4*i+1] = a[7*i+1] >> 6;
    r->coeffs[4*i+1] |= (uint32_t)a[7*i+2] << 2;
    r->coeffs[4*i+1] |= (uint32_t)(a[7*i+3] & 0x0F) << 10;

    r->coeffs[4*i+2] = a[7*i+3] >> 4;
    r->coeffs[4*i+2] |= (uint32_t)a[7*i+4] << 4;
    r->coeffs[4*i+2] |= (uint32_t)(a[7*i+5] & 0x03) << 12;

    r->coeffs[4*i+3] = a[7*i+5] >> 2;
    r->coeffs[4*i+3] |= (uint32_t)a[7*i+6] << 6;

    r->coeffs[4*i+0] = 8380417 + (1U << (14 -1)) - r->coeffs[4*i+0];
    r->coeffs[4*i+1] = 8380417 + (1U << (14 -1)) - r->coeffs[4*i+1];
    r->coeffs[4*i+2] = 8380417 + (1U << (14 -1)) - r->coeffs[4*i+2];
    r->coeffs[4*i+3] = 8380417 + (1U << (14 -1)) - r->coeffs[4*i+3];
  }

                     ;
}
# 783 "poly.c"
void polyz_pack(unsigned char *r, const poly *a) {



  unsigned int i;
  uint32_t t[2];
                ;

  polyz_pack_label17:for(i = 0; i < 256/2; ++i) {

    t[0] = ((8380417 - 1)/16) - 1 - a->coeffs[2*i+0];
    t[0] += ((int32_t)t[0] >> 31) & 8380417;
    t[1] = ((8380417 - 1)/16) - 1 - a->coeffs[2*i+1];
    t[1] += ((int32_t)t[1] >> 31) & 8380417;

    r[5*i+0] = t[0];
    r[5*i+1] = t[0] >> 8;
    r[5*i+2] = t[0] >> 16;
    r[5*i+2] |= t[1] << 4;
    r[5*i+3] = t[1] >> 4;
    r[5*i+4] = t[1] >> 12;
  }

                     ;
}
# 819 "poly.c"
void polyz_unpack(poly *r, const unsigned char *a) {
  unsigned int i;
                ;

  for(i = 0; i < 256/2; ++i) {
    r->coeffs[2*i+0] = a[5*i+0];
    r->coeffs[2*i+0] |= (uint32_t)a[5*i+1] << 8;
    r->coeffs[2*i+0] |= (uint32_t)(a[5*i+2] & 0x0F) << 16;

    r->coeffs[2*i+1] = a[5*i+2] >> 4;
    r->coeffs[2*i+1] |= (uint32_t)a[5*i+3] << 4;
    r->coeffs[2*i+1] |= (uint32_t)a[5*i+4] << 12;

    r->coeffs[2*i+0] = ((8380417 - 1)/16) - 1 - r->coeffs[2*i+0];
    r->coeffs[2*i+0] += ((int32_t)r->coeffs[2*i+0] >> 31) & 8380417;
    r->coeffs[2*i+1] = ((8380417 - 1)/16) - 1 - r->coeffs[2*i+1];
    r->coeffs[2*i+1] += ((int32_t)r->coeffs[2*i+1] >> 31) & 8380417;
  }

                     ;
}
# 851 "poly.c"
void polyw1_pack(unsigned char *r, const poly *a) {
  unsigned int i;
                ;

  polyw1_pack_label18:for(i = 0; i < 256/2; ++i)
    r[i] = a->coeffs[2*i+0] | (a->coeffs[2*i+1] << 4);

                     ;
}
