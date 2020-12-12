// ==============================================================
// File generated on Sat Dec 12 08:46:58 EST 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c"
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c" 1
#1 "<built-in>" 1
#1 "<built-in>" 3
#149 "<built-in>" 3
#1 "<command line>" 1
#1 "<built-in>" 2
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c" 2
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/params.h" 1



#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/config.h" 1
#5 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/params.h" 2
#2 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c" 2
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.h" 1



#1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
#33 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
#1 "/usr/include/stdint.h" 1 3 4
#25 "/usr/include/stdint.h" 3 4
#1 "/usr/include/features.h" 1 3 4
#345 "/usr/include/features.h" 3 4
#1 "/usr/include/stdc-predef.h" 1 3 4
#346 "/usr/include/features.h" 2 3 4
#375 "/usr/include/features.h" 3 4
#1 "/usr/include/sys/cdefs.h" 1 3 4
#392 "/usr/include/sys/cdefs.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#393 "/usr/include/sys/cdefs.h" 2 3 4
#376 "/usr/include/features.h" 2 3 4
#399 "/usr/include/features.h" 3 4
#1 "/usr/include/gnu/stubs.h" 1 3 4
#10 "/usr/include/gnu/stubs.h" 3 4
#1 "/usr/include/gnu/stubs-64.h" 1 3 4
#11 "/usr/include/gnu/stubs.h" 2 3 4
#400 "/usr/include/features.h" 2 3 4
#26 "/usr/include/stdint.h" 2 3 4
#1 "/usr/include/bits/wchar.h" 1 3 4
#22 "/usr/include/bits/wchar.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#23 "/usr/include/bits/wchar.h" 2 3 4
#27 "/usr/include/stdint.h" 2 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#28 "/usr/include/stdint.h" 2 3 4








typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
#65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
#90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
#103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#34 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
#5 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/poly.h" 2


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
#3 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c" 2
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.h" 1








typedef struct {
  poly vec[2];
} polyvecl;

void polyvecl_freeze(polyvecl *v);

void polyvecl_add(polyvecl *w, const polyvecl *u, const polyvecl *v);

void polyvecl_ntt(polyvecl *v);
void polyvecl_pointwise_acc_invmontgomery(poly *w,
                                          const polyvecl *u,
                                          const polyvecl *v);

int polyvecl_chknorm(const polyvecl *v, uint32_t B);




typedef struct {
  poly vec[3];
} polyveck;

void polyveck_reduce(polyveck *v);
void polyveck_csubq(polyveck *v);
void polyveck_freeze(polyveck *v);

void polyveck_add(polyveck *w, const polyveck *u, const polyveck *v);
void polyveck_sub(polyveck *w, const polyveck *u, const polyveck *v);
void polyveck_shiftl(polyveck *v);

void polyveck_ntt(polyveck *v);
void polyveck_invntt_montgomery(polyveck *v);

int polyveck_chknorm(const polyveck *v, uint32_t B);

void polyveck_power2round(polyveck *v1, polyveck *v0, const polyveck *v);
void polyveck_decompose(polyveck *v1, polyveck *v0, const polyveck *v);
unsigned int polyveck_make_hint(polyveck *h,
                                const polyveck *v0,
                                const polyveck *v1);
void polyveck_use_hint(polyveck *w, const polyveck *v, const polyveck *h);
#4 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c" 2
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.h" 1






void pack_pk(unsigned char pk[(32 + 3*((256*(23 - 14))/8))],
             const unsigned char rho[32], const polyveck *t1);
void pack_sk(unsigned char sk[(2*32 + (2 + 3)*((256*4)/8) + 48 + 3*((256*14)/8))],
             const unsigned char rho[32],
             const unsigned char key[32],
             const unsigned char tr[48],
             const polyvecl *s1,
             const polyveck *s2,
             const polyveck *t0);
void pack_sig(unsigned char sig[(2*((256*(23 - 3))/8) + (64 + 3) + (256/8 + 8))],
              const polyvecl *z, const polyveck *h, const poly *c);

void unpack_pk(unsigned char rho[32], polyveck *t1,
               const unsigned char pk[(32 + 3*((256*(23 - 14))/8))]);
void unpack_sk(unsigned char rho[32],
               unsigned char key[32],
               unsigned char tr[48],
               polyvecl *s1,
               polyveck *s2,
               polyveck *t0,
               const unsigned char sk[(2*32 + (2 + 3)*((256*4)/8) + 48 + 3*((256*14)/8))]);
int unpack_sig(polyvecl *z, polyveck *h, poly *c,
               const unsigned char sig[(2*((256*(23 - 3))/8) + (64 + 3) + (256/8 + 8))]);
#5 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c" 2
#15 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c"
void pack_pk(unsigned char pk[(32 + 3*((256*(23 - 14))/8))],
             const unsigned char rho[32],
             const polyveck *t1)
{
  unsigned int i;

  for(i = 0; i < 32; ++i)
    pk[i] = rho[i];
  pk += 32;

  for(i = 0; i < 3; ++i)
    polyt1_pack(pk + i*((256*(23 - 14))/8), &t1->vec[i]);
}
#38 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c"
void unpack_pk(unsigned char rho[32],
               polyveck *t1,
               const unsigned char pk[(32 + 3*((256*(23 - 14))/8))])
{
  unsigned int i;

  for(i = 0; i < 32; ++i)
    rho[i] = pk[i];
  pk += 32;

  for(i = 0; i < 3; ++i)
    polyt1_unpack(&t1->vec[i], pk + i*((256*(23 - 14))/8));
}
#65 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c"
void pack_sk(unsigned char sk[(2*32 + (2 + 3)*((256*4)/8) + 48 + 3*((256*14)/8))],
             const unsigned char rho[32],
             const unsigned char key[32],
             const unsigned char tr[48],
             const polyvecl *s1,
             const polyveck *s2,
             const polyveck *t0)
{
  unsigned int i;

  for(i = 0; i < 32; ++i)
    sk[i] = rho[i];
  sk += 32;

  for(i = 0; i < 32; ++i)
    sk[i] = key[i];
  sk += 32;

  for(i = 0; i < 48; ++i)
    sk[i] = tr[i];
  sk += 48;

  for(i = 0; i < 2; ++i)
    polyeta_pack(sk + i*((256*4)/8), &s1->vec[i]);
  sk += 2*((256*4)/8);

  for(i = 0; i < 3; ++i)
    polyeta_pack(sk + i*((256*4)/8), &s2->vec[i]);
  sk += 3*((256*4)/8);

  for(i = 0; i < 3; ++i)
    polyt0_pack(sk + i*((256*14)/8), &t0->vec[i]);
}
#112 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c"
void unpack_sk(unsigned char rho[32],
               unsigned char key[32],
               unsigned char tr[48],
               polyvecl *s1,
               polyveck *s2,
               polyveck *t0,
               const unsigned char sk[(2*32 + (2 + 3)*((256*4)/8) + 48 + 3*((256*14)/8))])
{
  unsigned int i;

  for(i = 0; i < 32; ++i)
    rho[i] = sk[i];
  sk += 32;

  for(i = 0; i < 32; ++i)
    key[i] = sk[i];
  sk += 32;

  for(i = 0; i < 48; ++i)
    tr[i] = sk[i];
  sk += 48;

  for(i=0; i < 2; ++i)
    polyeta_unpack(&s1->vec[i], sk + i*((256*4)/8));
  sk += 2*((256*4)/8);

  for(i=0; i < 3; ++i)
    polyeta_unpack(&s2->vec[i], sk + i*((256*4)/8));
  sk += 3*((256*4)/8);

  for(i=0; i < 3; ++i)
    polyt0_unpack(&t0->vec[i], sk + i*((256*14)/8));
}
#156 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c"
void pack_sig(unsigned char sig[(2*((256*(23 - 3))/8) + (64 + 3) + (256/8 + 8))],
              const polyvecl *z,
              const polyveck *h,
              const poly *c)
{
  unsigned int i, j, k;
  uint64_t signs, mask;

  for(i = 0; i < 2; ++i)
    polyz_pack(sig + i*((256*(23 - 3))/8), &z->vec[i]);
  sig += 2*((256*(23 - 3))/8);


  k = 0;
  for(i = 0; i < 3; ++i) {
    for(j = 0; j < 256; ++j)
      if(h->vec[i].coeffs[j] != 0)
        sig[k++] = j;

    sig[64 + i] = k;
  }
  while(k < 64) sig[k++] = 0;
  sig += 64 + 3;


  signs = 0;
  mask = 1;
  for(i = 0; i < 256/8; ++i) {
    sig[i] = 0;
    for(j = 0; j < 8; ++j) {
      if(c->coeffs[8*i+j] != 0) {
        sig[i] |= (1U << j);
        if(c->coeffs[8*i+j] == (8380417 - 1)) signs |= mask;
        mask <<= 1;
      }
    }
  }
  sig += 256/8;
  for(i = 0; i < 8; ++i)
    sig[i] = signs >> 8*i;
}
#211 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/packing.c"
int unpack_sig(polyvecl *z,
               polyveck *h,
               poly *c,
               const unsigned char sig[(2*((256*(23 - 3))/8) + (64 + 3) + (256/8 + 8))])
{
  unsigned int i, j, k;
  uint64_t signs;

  for(i = 0; i < 2; ++i)
    polyz_unpack(&z->vec[i], sig + i*((256*(23 - 3))/8));
  sig += 2*((256*(23 - 3))/8);


  k = 0;
  for(i = 0; i < 3; ++i) {
    for(j = 0; j < 256; ++j)
      h->vec[i].coeffs[j] = 0;

    if(sig[64 + i] < k || sig[64 + i] > 64)
      return 1;

    for(j = k; j < sig[64 + i]; ++j) {

      if(j > k && sig[j] <= sig[j-1]) return 1;
      h->vec[i].coeffs[sig[j]] = 1;
    }

    k = sig[64 + i];
  }


  for(j = k; j < 64; ++j)
    if(sig[j])
      return 1;

  sig += 64 + 3;


  for(i = 0; i < 256; ++i)
    c->coeffs[i] = 0;

  signs = 0;
  for(i = 0; i < 8; ++i)
    signs |= (uint64_t)sig[256/8+i] << 8*i;


  if(signs >> 60)
    return 1;

  for(i = 0; i < 256/8; ++i) {
    for(j = 0; j < 8; ++j) {
      if((sig[i] >> j) & 0x01) {
        c->coeffs[8*i+j] = 1;
        c->coeffs[8*i+j] ^= -(signs & 1) & (1 ^ (8380417 -1));
        signs >>= 1;
      }
    }
  }

  return 0;
}
