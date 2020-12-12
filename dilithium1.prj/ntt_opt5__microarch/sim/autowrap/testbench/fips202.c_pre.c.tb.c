// ==============================================================
// File generated on Sat Dec 12 08:58:09 EST 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c" 1
#1 "<built-in>" 1
#1 "<built-in>" 3
#149 "<built-in>" 3
#1 "<command line>" 1
#1 "<built-in>" 2
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c" 2







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
#9 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c" 2
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/test/cpucycles.h" 1



#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/test/../config.h" 1
#5 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/test/cpucycles.h" 2
#83 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/test/cpucycles.h"
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
#10 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c" 2
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.h" 1








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
#11 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c" 2
#1 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/params.h" 1
#12 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c" 2
#34 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
static uint64_t load64(const unsigned char *x) {
  unsigned int i;
  uint64_t r = 0;

  load64_label0:for (i = 0; i < 8; ++i)
    r |= (uint64_t)x[i] << 8*i;

  return r;
}
#52 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
static void store64(unsigned char *x, uint64_t u) {
  unsigned int i;

  store64_label1:for(i = 0; i < 8; ++i)
    x[i] = u >> 8*i;
}


static const uint64_t KeccakF_RoundConstants[24] = {
  (uint64_t)0x0000000000000001ULL,
  (uint64_t)0x0000000000008082ULL,
  (uint64_t)0x800000000000808aULL,
  (uint64_t)0x8000000080008000ULL,
  (uint64_t)0x000000000000808bULL,
  (uint64_t)0x0000000080000001ULL,
  (uint64_t)0x8000000080008081ULL,
  (uint64_t)0x8000000000008009ULL,
  (uint64_t)0x000000000000008aULL,
  (uint64_t)0x0000000000000088ULL,
  (uint64_t)0x0000000080008009ULL,
  (uint64_t)0x000000008000000aULL,
  (uint64_t)0x000000008000808bULL,
  (uint64_t)0x800000000000008bULL,
  (uint64_t)0x8000000000008089ULL,
  (uint64_t)0x8000000000008003ULL,
  (uint64_t)0x8000000000008002ULL,
  (uint64_t)0x8000000000000080ULL,
  (uint64_t)0x000000000000800aULL,
  (uint64_t)0x800000008000000aULL,
  (uint64_t)0x8000000080008081ULL,
  (uint64_t)0x8000000000008080ULL,
  (uint64_t)0x0000000080000001ULL,
  (uint64_t)0x8000000080008008ULL
};
#94 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
static void KeccakF1600_StatePermute(uint64_t *state)
{
        int round;





        uint64_t Aba, Abe, Abi, Abo, Abu;
        uint64_t Aga, Age, Agi, Ago, Agu;
        uint64_t Aka, Ake, Aki, Ako, Aku;
        uint64_t Ama, Ame, Ami, Amo, Amu;
        uint64_t Asa, Ase, Asi, Aso, Asu;
        uint64_t BCa, BCe, BCi, BCo, BCu;
        uint64_t Da, De, Di, Do, Du;
        uint64_t Eba, Ebe, Ebi, Ebo, Ebu;
        uint64_t Ega, Ege, Egi, Ego, Egu;
        uint64_t Eka, Eke, Eki, Eko, Eku;
        uint64_t Ema, Eme, Emi, Emo, Emu;
        uint64_t Esa, Ese, Esi, Eso, Esu;


        Aba = state[ 0];
        Abe = state[ 1];
        Abi = state[ 2];
        Abo = state[ 3];
        Abu = state[ 4];
        Aga = state[ 5];
        Age = state[ 6];
        Agi = state[ 7];
        Ago = state[ 8];
        Agu = state[ 9];
        Aka = state[10];
        Ake = state[11];
        Aki = state[12];
        Ako = state[13];
        Aku = state[14];
        Ama = state[15];
        Ame = state[16];
        Ami = state[17];
        Amo = state[18];
        Amu = state[19];
        Asa = state[20];
        Ase = state[21];
        Asi = state[22];
        Aso = state[23];
        Asu = state[24];

        for( round = 0; round < 24; round += 2 )
        {

            BCa = Aba^Aga^Aka^Ama^Asa;
            BCe = Abe^Age^Ake^Ame^Ase;
            BCi = Abi^Agi^Aki^Ami^Asi;
            BCo = Abo^Ago^Ako^Amo^Aso;
            BCu = Abu^Agu^Aku^Amu^Asu;


            Da = BCu^((BCe << 1) ^ (BCe >> (64 -1)));
            De = BCa^((BCi << 1) ^ (BCi >> (64 -1)));
            Di = BCe^((BCo << 1) ^ (BCo >> (64 -1)));
            Do = BCi^((BCu << 1) ^ (BCu >> (64 -1)));
            Du = BCo^((BCa << 1) ^ (BCa >> (64 -1)));

            Aba ^= Da;
            BCa = Aba;
            Age ^= De;
            BCe = ((Age << 44) ^ (Age >> (64 -44)));
            Aki ^= Di;
            BCi = ((Aki << 43) ^ (Aki >> (64 -43)));
            Amo ^= Do;
            BCo = ((Amo << 21) ^ (Amo >> (64 -21)));
            Asu ^= Du;
            BCu = ((Asu << 14) ^ (Asu >> (64 -14)));
            Eba = BCa ^((~BCe)& BCi );
            Eba ^= (uint64_t)KeccakF_RoundConstants[round];
            Ebe = BCe ^((~BCi)& BCo );
            Ebi = BCi ^((~BCo)& BCu );
            Ebo = BCo ^((~BCu)& BCa );
            Ebu = BCu ^((~BCa)& BCe );

            Abo ^= Do;
            BCa = ((Abo << 28) ^ (Abo >> (64 -28)));
            Agu ^= Du;
            BCe = ((Agu << 20) ^ (Agu >> (64 -20)));
            Aka ^= Da;
            BCi = ((Aka << 3) ^ (Aka >> (64 -3)));
            Ame ^= De;
            BCo = ((Ame << 45) ^ (Ame >> (64 -45)));
            Asi ^= Di;
            BCu = ((Asi << 61) ^ (Asi >> (64 -61)));
            Ega = BCa ^((~BCe)& BCi );
            Ege = BCe ^((~BCi)& BCo );
            Egi = BCi ^((~BCo)& BCu );
            Ego = BCo ^((~BCu)& BCa );
            Egu = BCu ^((~BCa)& BCe );

            Abe ^= De;
            BCa = ((Abe << 1) ^ (Abe >> (64 -1)));
            Agi ^= Di;
            BCe = ((Agi << 6) ^ (Agi >> (64 -6)));
            Ako ^= Do;
            BCi = ((Ako << 25) ^ (Ako >> (64 -25)));
            Amu ^= Du;
            BCo = ((Amu << 8) ^ (Amu >> (64 -8)));
            Asa ^= Da;
            BCu = ((Asa << 18) ^ (Asa >> (64 -18)));
            Eka = BCa ^((~BCe)& BCi );
            Eke = BCe ^((~BCi)& BCo );
            Eki = BCi ^((~BCo)& BCu );
            Eko = BCo ^((~BCu)& BCa );
            Eku = BCu ^((~BCa)& BCe );

            Abu ^= Du;
            BCa = ((Abu << 27) ^ (Abu >> (64 -27)));
            Aga ^= Da;
            BCe = ((Aga << 36) ^ (Aga >> (64 -36)));
            Ake ^= De;
            BCi = ((Ake << 10) ^ (Ake >> (64 -10)));
            Ami ^= Di;
            BCo = ((Ami << 15) ^ (Ami >> (64 -15)));
            Aso ^= Do;
            BCu = ((Aso << 56) ^ (Aso >> (64 -56)));
            Ema = BCa ^((~BCe)& BCi );
            Eme = BCe ^((~BCi)& BCo );
            Emi = BCi ^((~BCo)& BCu );
            Emo = BCo ^((~BCu)& BCa );
            Emu = BCu ^((~BCa)& BCe );

            Abi ^= Di;
            BCa = ((Abi << 62) ^ (Abi >> (64 -62)));
            Ago ^= Do;
            BCe = ((Ago << 55) ^ (Ago >> (64 -55)));
            Aku ^= Du;
            BCi = ((Aku << 39) ^ (Aku >> (64 -39)));
            Ama ^= Da;
            BCo = ((Ama << 41) ^ (Ama >> (64 -41)));
            Ase ^= De;
            BCu = ((Ase << 2) ^ (Ase >> (64 -2)));
            Esa = BCa ^((~BCe)& BCi );
            Ese = BCe ^((~BCi)& BCo );
            Esi = BCi ^((~BCo)& BCu );
            Eso = BCo ^((~BCu)& BCa );
            Esu = BCu ^((~BCa)& BCe );


            BCa = Eba^Ega^Eka^Ema^Esa;
            BCe = Ebe^Ege^Eke^Eme^Ese;
            BCi = Ebi^Egi^Eki^Emi^Esi;
            BCo = Ebo^Ego^Eko^Emo^Eso;
            BCu = Ebu^Egu^Eku^Emu^Esu;


            Da = BCu^((BCe << 1) ^ (BCe >> (64 -1)));
            De = BCa^((BCi << 1) ^ (BCi >> (64 -1)));
            Di = BCe^((BCo << 1) ^ (BCo >> (64 -1)));
            Do = BCi^((BCu << 1) ^ (BCu >> (64 -1)));
            Du = BCo^((BCa << 1) ^ (BCa >> (64 -1)));

            Eba ^= Da;
            BCa = Eba;
            Ege ^= De;
            BCe = ((Ege << 44) ^ (Ege >> (64 -44)));
            Eki ^= Di;
            BCi = ((Eki << 43) ^ (Eki >> (64 -43)));
            Emo ^= Do;
            BCo = ((Emo << 21) ^ (Emo >> (64 -21)));
            Esu ^= Du;
            BCu = ((Esu << 14) ^ (Esu >> (64 -14)));
            Aba = BCa ^((~BCe)& BCi );
            Aba ^= (uint64_t)KeccakF_RoundConstants[round+1];
            Abe = BCe ^((~BCi)& BCo );
            Abi = BCi ^((~BCo)& BCu );
            Abo = BCo ^((~BCu)& BCa );
            Abu = BCu ^((~BCa)& BCe );

            Ebo ^= Do;
            BCa = ((Ebo << 28) ^ (Ebo >> (64 -28)));
            Egu ^= Du;
            BCe = ((Egu << 20) ^ (Egu >> (64 -20)));
            Eka ^= Da;
            BCi = ((Eka << 3) ^ (Eka >> (64 -3)));
            Eme ^= De;
            BCo = ((Eme << 45) ^ (Eme >> (64 -45)));
            Esi ^= Di;
            BCu = ((Esi << 61) ^ (Esi >> (64 -61)));
            Aga = BCa ^((~BCe)& BCi );
            Age = BCe ^((~BCi)& BCo );
            Agi = BCi ^((~BCo)& BCu );
            Ago = BCo ^((~BCu)& BCa );
            Agu = BCu ^((~BCa)& BCe );

            Ebe ^= De;
            BCa = ((Ebe << 1) ^ (Ebe >> (64 -1)));
            Egi ^= Di;
            BCe = ((Egi << 6) ^ (Egi >> (64 -6)));
            Eko ^= Do;
            BCi = ((Eko << 25) ^ (Eko >> (64 -25)));
            Emu ^= Du;
            BCo = ((Emu << 8) ^ (Emu >> (64 -8)));
            Esa ^= Da;
            BCu = ((Esa << 18) ^ (Esa >> (64 -18)));
            Aka = BCa ^((~BCe)& BCi );
            Ake = BCe ^((~BCi)& BCo );
            Aki = BCi ^((~BCo)& BCu );
            Ako = BCo ^((~BCu)& BCa );
            Aku = BCu ^((~BCa)& BCe );

            Ebu ^= Du;
            BCa = ((Ebu << 27) ^ (Ebu >> (64 -27)));
            Ega ^= Da;
            BCe = ((Ega << 36) ^ (Ega >> (64 -36)));
            Eke ^= De;
            BCi = ((Eke << 10) ^ (Eke >> (64 -10)));
            Emi ^= Di;
            BCo = ((Emi << 15) ^ (Emi >> (64 -15)));
            Eso ^= Do;
            BCu = ((Eso << 56) ^ (Eso >> (64 -56)));
            Ama = BCa ^((~BCe)& BCi );
            Ame = BCe ^((~BCi)& BCo );
            Ami = BCi ^((~BCo)& BCu );
            Amo = BCo ^((~BCu)& BCa );
            Amu = BCu ^((~BCa)& BCe );

            Ebi ^= Di;
            BCa = ((Ebi << 62) ^ (Ebi >> (64 -62)));
            Ego ^= Do;
            BCe = ((Ego << 55) ^ (Ego >> (64 -55)));
            Eku ^= Du;
            BCi = ((Eku << 39) ^ (Eku >> (64 -39)));
            Ema ^= Da;
            BCo = ((Ema << 41) ^ (Ema >> (64 -41)));
            Ese ^= De;
            BCu = ((Ese << 2) ^ (Ese >> (64 -2)));
            Asa = BCa ^((~BCe)& BCi );
            Ase = BCe ^((~BCi)& BCo );
            Asi = BCi ^((~BCo)& BCu );
            Aso = BCo ^((~BCu)& BCa );
            Asu = BCu ^((~BCa)& BCe );
        }


        state[ 0] = Aba;
        state[ 1] = Abe;
        state[ 2] = Abi;
        state[ 3] = Abo;
        state[ 4] = Abu;
        state[ 5] = Aga;
        state[ 6] = Age;
        state[ 7] = Agi;
        state[ 8] = Ago;
        state[ 9] = Agu;
        state[10] = Aka;
        state[11] = Ake;
        state[12] = Aki;
        state[13] = Ako;
        state[14] = Aku;
        state[15] = Ama;
        state[16] = Ame;
        state[17] = Ami;
        state[18] = Amo;
        state[19] = Amu;
        state[20] = Asa;
        state[21] = Ase;
        state[22] = Asi;
        state[23] = Aso;
        state[24] = Asu;
}
#376 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
static void keccak_absorb(uint64_t *s,
                          unsigned int r,
                          const unsigned char *m,
                          unsigned long long mlen,
                          unsigned char p)
{
  unsigned int i;
  unsigned char t[200];
                ;


  for(i = 0; i < 25; ++i)
    s[i] = 0;

  while(mlen >= r) {
    for(i = 0; i < r/8; ++i)
      s[i] ^= load64(m + 8*i);

    KeccakF1600_StatePermute(s);
    mlen -= r;
    m += r;
  }

  for(i = 0; i < r; ++i)
    t[i] = 0;
  for(i = 0; i < mlen; ++i)
    t[i] = m[i];
  t[i] = p;
  t[r-1] |= 128;
  for(i = 0; i < r/8; ++i)
    s[i] ^= load64(t + 8*i);

                      ;
}
#424 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
static void keccak_squeezeblocks(unsigned char *h,
                                 unsigned long nblocks,
                                 uint64_t *s,
                                 unsigned int r)
{
  unsigned int i;
                ;

  while(nblocks > 0) {
    KeccakF1600_StatePermute(s);
    for(i=0; i < (r >> 3); i++) {
      store64(h + 8*i, s[i]);
    }
    h += r;
    --nblocks;
  }

                      ;
}
#455 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
void shake128_absorb(keccak_state *state,
                     const unsigned char *input,
                     unsigned long long inlen)
{
  keccak_absorb(state->s, 168, input, inlen, 0x1F);
}

void shake128_stream_init(keccak_state *state,
                          const unsigned char seed[32],
                          uint16_t nonce)
{
  unsigned int i;
  unsigned char buf[32 + 2];

  for(i = 0; i < 32; ++i)
    buf[i] = seed[i];
  buf[32] = nonce;
  buf[32 +1] = nonce >> 8;

  keccak_absorb(state->s, 168, buf, sizeof(buf), 0x1F);
}
#489 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
void shake128_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            keccak_state *state)
{
  keccak_squeezeblocks(output, nblocks, state->s, 168);
}
#507 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
void shake256_absorb(keccak_state *state,
                     const unsigned char *input,
                     unsigned long long inlen)
{
  keccak_absorb(state->s, 136, input, inlen, 0x1F);
}

void shake256_stream_init(keccak_state *state,
                          const unsigned char seed[48],
                          uint16_t nonce)
{
  unsigned int i;
  unsigned char buf[48 + 2];

  for(i = 0; i < 48; ++i)
    buf[i] = seed[i];
  buf[48] = nonce;
  buf[48 +1] = nonce >> 8;

  keccak_absorb(state->s, 136, buf, sizeof(buf), 0x1F);
}
#542 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
void shake256_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            keccak_state *state)
{
  keccak_squeezeblocks(output, nblocks, state->s, 136);
}
#559 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
void shake128(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen)
{
  unsigned int i;
  unsigned long nblocks = outlen/168;
  unsigned char t[168];
  uint64_t s[25];

  keccak_absorb(s, 168, input, inlen, 0x1F);
  keccak_squeezeblocks(output, nblocks, s, 168);

  output += nblocks*168;
  outlen -= nblocks*168;

  if(outlen) {
    keccak_squeezeblocks(t, 1, s, 168);
    for(i = 0; i < outlen; ++i)
      output[i] = t[i];
  }
}
#592 "/home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/fips202.c"
void shake256(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen)
{
  unsigned int i;
  unsigned long nblocks = outlen/136;
  unsigned char t[136];
  uint64_t s[25];

  keccak_absorb(s, 136, input, inlen, 0x1F);
  keccak_squeezeblocks(output, nblocks, s, 136);

  output += nblocks*136;
  outlen -= nblocks*136;

  if(outlen) {
    keccak_squeezeblocks(t, 1, s, 136);
    for(i = 0; i < outlen; ++i)
      output[i] = t[i];
  }
}
