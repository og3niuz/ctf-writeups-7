/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2017 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void sub_980();
// __int64 __fastcall __cxa_finalize(_QWORD); weak
__int64 sub_9B0();
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_ttt(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m0(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m1(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m2(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m3(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m4(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m5(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m6(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m7(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m8(__int64 a1, __int64 a2, int a3, int a4);
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m9(__int64 a1, __int64 a2, unsigned int a3);

//-------------------------------------------------------------------------
// Data declarations

int dword_0 = 1179403647; // weak
void *off_3000 = &off_3000; // weak
_DWORD s1[256] =
{
  17, 143, 36, 128, 90, 119, 37, 114, 235, 59, 251, 219, 32, 39, 29, 69, 134, 87, 89, 79, 200, 254, 93, 211, 53, 244, 85, 30, 245, 23, 64, 131, 252, 232, 149, 80, 246, 120, 207, 35, 2, 111, 7, 15, 230, 214, 198, 208, 238, 213, 182, 133, 250, 220, 66, 92, 201, 107, 96, 224, 186, 71, 65, 193, 173, 239, 88, 212, 160, 51, 194, 247, 167, 215, 4, 179, 172, 48, 68, 22, 157, 118, 70, 164, 12, 127, 165, 62, 196, 234, 221, 181, 222, 210, 249, 166, 52, 159, 5, 44, 115, 113, 41, 40, 3, 16, 243, 255, 177, 175, 43, 146, 49, 190, 81, 125, 25, 233, 180, 100, 14, 155, 168, 144, 34, 192, 98, 204, 27, 161, 33, 163, 91, 138, 240, 74, 206, 226, 26, 154, 241, 108, 150, 141, 1, 61, 110, 135, 169, 126, 223, 162, 6, 189, 156, 176, 11, 105, 152, 101, 67, 56, 99, 106, 84, 237, 97, 86, 73, 21, 47, 121, 145, 124, 24, 187, 171, 140, 148, 38, 117, 75, 77, 109, 45, 209, 137, 18, 94, 185, 216, 136, 142, 228, 170, 236, 229, 242, 72, 188, 225, 202, 63, 129, 103, 203, 183, 158, 218, 102, 199, 0, 139, 78, 82, 76, 19, 231, 174, 60, 50, 153, 122, 10, 13, 20, 195, 248, 104, 253, 205, 54, 197, 227, 184, 42, 130, 116, 55, 191, 123, 95, 58, 83, 217, 178, 151, 28, 9, 147, 46, 31, 8, 112, 57, 132
}; // idb
_DWORD s2[256] =
{
  24, 0, 154, 42, 104, 111, 17, 207, 236, 112, 127, 155, 83, 160, 130, 9, 12, 21, 37, 133, 186, 15, 254, 234, 212, 229, 252, 206, 248, 191, 56, 174, 231, 182, 171, 156, 139, 152, 247, 243, 13, 66, 132, 213, 196, 158, 166, 177, 194, 60, 165, 19, 26, 221, 203, 100, 72, 86, 123, 135, 250, 180, 14, 85, 146, 1, 210, 114, 124, 192, 18, 106, 27, 149, 181, 102, 95, 69, 148, 173, 199, 40, 8, 244, 107, 113, 228, 215, 49, 25, 6, 193, 225, 205, 238, 169, 241, 122, 31, 22, 77, 131, 57, 88, 144, 145, 189, 153, 222, 51, 129, 246, 28, 232, 2, 141, 137, 101, 10, 97, 125, 224, 208, 219, 233, 68, 187, 61, 70, 195, 20, 103, 142, 52, 150, 55, 4, 216, 82, 170, 188, 78, 164, 63, 11, 99, 197, 220, 7, 96, 235, 38, 168, 110, 93, 39, 34, 92, 54, 162, 90, 242, 211, 109, 157, 45, 30, 87, 159, 117, 136, 29, 147, 73, 198, 116, 91, 23, 245, 218, 121, 240, 161, 185, 53, 41, 36, 126, 33, 3, 163, 184, 223, 167, 16, 59, 251, 50, 202, 178, 74, 255, 176, 249, 183, 172, 62, 237, 80, 214, 230, 227, 79, 253, 81, 65, 46, 239, 226, 67, 204, 134, 32, 44, 217, 98, 64, 43, 200, 94, 119, 115, 138, 140, 47, 209, 75, 128, 175, 58, 151, 179, 105, 84, 89, 120, 5, 201, 35, 118, 76, 48, 143, 71, 108, 190
}; // idb
void *s3 = (void *)0xE50000003FLL; // weak
_UNKNOWN s5; // weak
_DWORD s4[256]; // idb


//----- (0000000000000980) ----------------------------------------------------
void sub_980()
{
  JUMPOUT(&dword_0);
}
// 0: using guessed type int dword_0;

//----- (00000000000009B0) ----------------------------------------------------
__int64 sub_9B0()
{
  return __cxa_finalize(&off_3000);
}
// 990: using guessed type __int64 __fastcall __cxa_finalize(_QWORD);
// 3000: using guessed type void *off_3000;

//----- (0000000000000A10) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_ttt(__int64 a1, __int64 a2, int a3, int a4)
{
  return (unsigned int)(a3 + 2 * a4);
}

//----- (0000000000000A20) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m0(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edx

  v4 = a3 + 37 - ((a3 + ((unsigned int)((a3 + 37) >> 31) >> 24) + 37) & 0xFFFFFF00);
  v5 = a4 - 123 - ((a4 + ((unsigned int)((a4 - 123) >> 31) >> 24) - 123) & 0xFFFFFF00);
  return v4 ^ (v5 + 256 - ((v5 + ((unsigned int)((signed int)(v5 + 256) >> 31) >> 24) + 256) & 0xFFFFFF00));
}

//----- (0000000000000A80) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m1(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edx

  v4 = a3 + 39 - ((a3 + ((unsigned int)((a3 + 39) >> 31) >> 24) + 39) & 0xFFFFFF00);
  v5 = a4 - 125 - ((a4 + ((unsigned int)((a4 - 125) >> 31) >> 24) - 125) & 0xFFFFFF00);
  return v4 ^ (v5 + 256 - ((v5 + ((unsigned int)((signed int)(v5 + 256) >> 31) >> 24) + 256) & 0xFFFFFF00));
}

//----- (0000000000000AE0) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m2(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edx

  v4 = a3 + 12 - ((a3 + ((unsigned int)((a3 + 12) >> 31) >> 24) + 12) & 0xFFFFFF00);
  v5 = a4 - 3 - ((a4 + ((unsigned int)((a4 - 3) >> 31) >> 24) - 3) & 0xFFFFFF00);
  return v4 ^ (v5 + 256 - ((v5 + ((unsigned int)((signed int)(v5 + 256) >> 31) >> 24) + 256) & 0xFFFFFF00));
}

//----- (0000000000000B40) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m3(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edx

  v4 = a3 + 44 - ((a3 + ((unsigned int)((a3 + 44) >> 31) >> 24) + 44) & 0xFFFFFF00);
  v5 = a4 - 21 - ((a4 + ((unsigned int)((a4 - 21) >> 31) >> 24) - 21) & 0xFFFFFF00);
  return v4 ^ (v5 + 256 - ((v5 + ((unsigned int)((signed int)(v5 + 256) >> 31) >> 24) + 256) & 0xFFFFFF00));
}

//----- (0000000000000BA0) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m4(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edx

  v4 = a3 + 123 - ((a3 + ((unsigned int)((a3 + 123) >> 31) >> 24) + 123) & 0xFFFFFF00);
  v5 = a4 - 77 - ((a4 + ((unsigned int)((a4 - 77) >> 31) >> 24) - 77) & 0xFFFFFF00);
  return v4 ^ (v5 + 256 - ((v5 + ((unsigned int)((signed int)(v5 + 256) >> 31) >> 24) + 256) & 0xFFFFFF00));
}

//----- (0000000000000C00) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m5(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edx

  v4 = a3 + 37 - ((a3 + ((unsigned int)((a3 + 37) >> 31) >> 24) + 37) & 0xFFFFFF00);
  v5 = a4 - 123 - ((a4 + ((unsigned int)((a4 - 123) >> 31) >> 24) - 123) & 0xFFFFFF00);
  return v4 ^ (v5 + 256 - ((v5 + ((unsigned int)((signed int)(v5 + 256) >> 31) >> 24) + 256) & 0xFFFFFF00));
}

//----- (0000000000000C60) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m6(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edx

  v4 = a3 + 37 - ((a3 + ((unsigned int)((a3 + 37) >> 31) >> 24) + 37) & 0xFFFFFF00);
  v5 = a4 - 99 - ((a4 + ((unsigned int)((a4 - 99) >> 31) >> 24) - 99) & 0xFFFFFF00);
  return v4 ^ (v5 + 256 - ((v5 + ((unsigned int)((signed int)(v5 + 256) >> 31) >> 24) + 256) & 0xFFFFFF00));
}

//----- (0000000000000CC0) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m7(__int64 a1, __int64 a2, int a3, int a4)
{
  signed int v4; // eax
  unsigned int v5; // edx

  v4 = a3 + 89 - ((a3 + ((unsigned int)((a3 + 89) >> 31) >> 24) + 89) & 0xFFFFFF00);
  v5 = a4 - 16 - ((a4 + ((unsigned int)((a4 - 16) >> 31) >> 24) - 16) & 0xFFFFFF00);
  return (unsigned int)(s1[v5 + 256 - ((v5 + ((unsigned int)((signed int)(v5 + 256) >> 31) >> 24) + 256) & 0xFFFFFF00)] ^ s2[v4]);
}

//----- (0000000000000D30) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m8(__int64 a1, __int64 a2, int a3, int a4)
{
  signed int v4; // eax
  unsigned int v5; // edx

  v4 = a3 + 34 - ((a3 + ((unsigned int)((a3 + 34) >> 31) >> 24) + 34) & 0xFFFFFF00);
  v5 = a4 - 24 - ((a4 + ((unsigned int)((a4 - 24) >> 31) >> 24) - 24) & 0xFFFFFF00);
  return (unsigned int)(*((_DWORD *)&s3
                        + (signed int)(v5
                                     + 256
                                     - ((v5 + ((unsigned int)((signed int)(v5 + 256) >> 31) >> 24) + 256) & 0xFFFFFF00))) ^ s4[v4]);
}
// 3810: using guessed type void *s3;

//----- (0000000000000DA0) ----------------------------------------------------
__int64 __fastcall Java_ooo_defcon2019_quals_veryandroidoso_Solver_m9(__int64 a1, __int64 a2, unsigned int a3)
{
  __m128i v3; // xmm0
  __int64 result; // rax
  __m128i v5; // xmm2
  __m128i v6; // xmm2

  v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 0);
  result = 0LL;
  do
  {
    v5 = _mm_xor_si128(_mm_load_si128((const __m128i *)((char *)&s5 + 4 * result + 16)), v3);
    _mm_store_si128(
      (__m128i *)&s4[result],     _mm_xor_si128(_mm_load_si128((const __m128i *)((char *)&s5 + 4 * result)), v3));
    _mm_store_si128((__m128i *)&s4[result + 4], v5);
    v6 = _mm_xor_si128(_mm_load_si128((const __m128i *)((char *)&s5 + 4 * result + 48)), v3);
    _mm_store_si128(
      (__m128i *)&s4[result + 8],     _mm_xor_si128(_mm_load_si128((const __m128i *)((char *)&s5 + 4 * result + 32)), v3));
    _mm_store_si128((__m128i *)&s4[result + 12], v6);
    result += 16LL;
  }
  while ( result != 256 );
  return result;
}

// ALL OK, 13 function(s) have been successfully decompiled
