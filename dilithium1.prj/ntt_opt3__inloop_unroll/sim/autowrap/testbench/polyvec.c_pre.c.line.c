#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 149 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma line 1 "<built-in>" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c" 2
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
#pragma line 2 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/params.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/config.h" 1
#pragma line 5 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/params.h" 2
#pragma line 3 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c" 2
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
#pragma line 4 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c" 2
#pragma line 1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct {
  poly vec[2];
} polyvecl;
#pragma empty_line
void polyvecl_freeze(polyvecl *v);
#pragma empty_line
void polyvecl_add(polyvecl *w, const polyvecl *u, const polyvecl *v);
#pragma empty_line
void polyvecl_ntt(polyvecl *v);
void polyvecl_pointwise_acc_invmontgomery(poly *w,
                                          const polyvecl *u,
                                          const polyvecl *v);
#pragma empty_line
int polyvecl_chknorm(const polyvecl *v, uint32_t B);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct {
  poly vec[3];
} polyveck;
#pragma empty_line
void polyveck_reduce(polyveck *v);
void polyveck_csubq(polyveck *v);
void polyveck_freeze(polyveck *v);
#pragma empty_line
void polyveck_add(polyveck *w, const polyveck *u, const polyveck *v);
void polyveck_sub(polyveck *w, const polyveck *u, const polyveck *v);
void polyveck_shiftl(polyveck *v);
#pragma empty_line
void polyveck_ntt(polyveck *v);
void polyveck_invntt_montgomery(polyveck *v);
#pragma empty_line
int polyveck_chknorm(const polyveck *v, uint32_t B);
#pragma empty_line
void polyveck_power2round(polyveck *v1, polyveck *v0, const polyveck *v);
void polyveck_decompose(polyveck *v1, polyveck *v0, const polyveck *v);
unsigned int polyveck_make_hint(polyveck *h,
                                const polyveck *v0,
                                const polyveck *v1);
void polyveck_use_hint(polyveck *w, const polyveck *v, const polyveck *h);
#pragma line 5 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c" 2
#pragma line 18 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyvecl_freeze(polyvecl *v) {
  unsigned int i;
#pragma empty_line
  polyvecl_freeze_label19:for(i = 0; i < 2; ++i)
    poly_freeze(&v->vec[i]);
}
#pragma line 35 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyvecl_add(polyvecl *w, const polyvecl *u, const polyvecl *v) {
  unsigned int i;
#pragma empty_line
  polyvecl_add_label20:for(i = 0; i < 2; ++i)
    poly_add(&w->vec[i], &u->vec[i], &v->vec[i]);
}
#pragma line 50 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyvecl_ntt(polyvecl *v) {
  unsigned int i;
#pragma empty_line
  polyvecl_ntt_label21:for(i = 0; i < 2; ++i)
    poly_ntt(&v->vec[i]);
}
#pragma line 70 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyvecl_pointwise_acc_invmontgomery(poly *w,
                                          const polyvecl *u,
                                          const polyvecl *v)
{
  unsigned int i;
  poly t;
#pragma empty_line
  poly_pointwise_invmontgomery(w, &u->vec[0], &v->vec[0]);
#pragma empty_line
  polyvecl_pointwise_acc_invmontgomery_label4:for(i = 1; i < 2; ++i) {
    poly_pointwise_invmontgomery(&t, &u->vec[i], &v->vec[i]);
    poly_add(w, w, &t);
  }
}
#pragma line 97 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
int polyvecl_chknorm(const polyvecl *v, uint32_t bound) {
  unsigned int i;
#pragma empty_line
  polyvecl_chknorm_label22:for(i = 0; i < 2; ++i)
    if(poly_chknorm(&v->vec[i], bound))
      return 1;
#pragma empty_line
  return 0;
}
#pragma line 120 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_reduce(polyveck *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 3; ++i)
    poly_reduce(&v->vec[i]);
}
#pragma line 135 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_csubq(polyveck *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 3; ++i)
    poly_csubq(&v->vec[i]);
}
#pragma line 150 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_freeze(polyveck *v) {
  unsigned int i;
#pragma empty_line
  polyveck_freeze_label23:for(i = 0; i < 3; ++i)
    poly_freeze(&v->vec[i]);
}
#pragma line 167 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_add(polyveck *w, const polyveck *u, const polyveck *v) {
  unsigned int i;
#pragma empty_line
  polyveck_add_label24:for(i = 0; i < 3; ++i)
    poly_add(&w->vec[i], &u->vec[i], &v->vec[i]);
}
#pragma line 186 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_sub(polyveck *w, const polyveck *u, const polyveck *v) {
  unsigned int i;
#pragma empty_line
  polyveck_sub_label25:for(i = 0; i < 3; ++i)
    poly_sub(&w->vec[i], &u->vec[i], &v->vec[i]);
}
#pragma line 201 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_shiftl(polyveck *v) {
  unsigned int i;
#pragma empty_line
  polyveck_shiftl_label26:for(i = 0; i < 3; ++i)
    poly_shiftl(&v->vec[i]);
}
#pragma line 216 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_ntt(polyveck *v) {
  unsigned int i;
#pragma empty_line
  polyveck_ntt_label27:for(i = 0; i < 3; ++i)
    poly_ntt(&v->vec[i]);
}
#pragma line 232 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_invntt_montgomery(polyveck *v) {
  unsigned int i;
#pragma empty_line
  polyveck_invntt_montgomery_label28:for(i = 0; i < 3; ++i)
    poly_invntt_montgomery(&v->vec[i]);
}
#pragma line 251 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
int polyveck_chknorm(const polyveck *v, uint32_t bound) {
  unsigned int i;
#pragma empty_line
  polyveck_chknorm_label29:for(i = 0; i < 3; ++i)
    if(poly_chknorm(&v->vec[i], bound))
      return 1;
#pragma empty_line
  return 0;
}
#pragma line 275 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_power2round(polyveck *v1, polyveck *v0, const polyveck *v) {
  unsigned int i;
#pragma empty_line
  polyveck_power2round_label30:for(i = 0; i < 3; ++i)
    poly_power2round(&v1->vec[i], &v0->vec[i], &v->vec[i]);
}
#pragma line 297 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_decompose(polyveck *v1, polyveck *v0, const polyveck *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 3; ++i)
    poly_decompose(&v1->vec[i], &v0->vec[i], &v->vec[i]);
}
#pragma line 315 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
unsigned int polyveck_make_hint(polyveck *h,
                                const polyveck *v0,
                                const polyveck *v1)
{
  unsigned int i, s = 0;
#pragma empty_line
  for(i = 0; i < 3; ++i)
    s += poly_make_hint(&h->vec[i], &v0->vec[i], &v1->vec[i]);
#pragma empty_line
  return s;
}
#pragma line 337 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/polyvec.c"
void polyveck_use_hint(polyveck *w, const polyveck *u, const polyveck *h) {
  unsigned int i;
#pragma empty_line
  polyveck_use_hint_label31:for(i = 0; i < 3; ++i)
    poly_use_hint(&w->vec[i], &u->vec[i], &h->vec[i]);
}
