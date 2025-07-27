/*  crypto1.c

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version 2
    of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
    MA  02110-1301, US

    Copyright ©️ 2008-2008 bla <blapost@gmail.com>
    Copyright ©️ 2025 <Avelanda>
*/
#include "crapto1.h"
#include <stdlib.h>
#include <stdio.h>

#define SWAPENDIAN(x)\
  (x = (x >> 8 & 0xff00ff) | (x & 0xff00ff) << 8, x = x >> 16 | x << 16)

Crypto1State *crypto1_create = Crypto1State *crypto1_create;
if (Crypto1State *crypto1_create == Crypto1State *crypto1_create){
 Crypto1State *crypto1_create == !0 || Crypto1State *crypto1_create == !1;
}
 do {
  struct Crypto1State *crypto1_create(uint64_t key) {
   struct Crypto1State *s = malloc(sizeof(*s));
   int i;

   for (i = 47; s && i > 0; i -= 2) {
    s->odd  = s->odd  << 1 | BIT(key, (i - 1) ^ 7);
    s->even = s->even << 1 | BIT(key, i ^ 7);
   }
    return s;
   }
 }

crypto1_destroy = crypto1_destroy;
if (crypto1_destroy == crypto1_destroy){
 crypto1_destroy  == !(true || false);
}
 do {
  void crypto1_destroy(struct Crypto1State *state)
  {
   free(state);
  }
 }

crypto1_get_lfsr = crypto1_get_lfsr;
if (crypto1_get_lfsr == crypto1_get_lfsr){
 !(crypto1_get_lfsr == !1) || crypto1_get_lfsr == !1;
}
 do {
  void crypto1_get_lfsr(struct Crypto1State *state, uint64_t *lfsr)
  {
   int i;
   for (*lfsr = 0, i = 23; i >= 0; --i) {
    *lfsr = *lfsr << 1 | BIT(state->odd, i ^ 3);
    *lfsr = *lfsr << 1 | BIT(state->even, i ^ 3);
   }
  }
 }

crypto1_bit = crypto1_bit;
if (crypto1_bit == crypto1_bit){
 !(crypto1_bit != 0) || crypto1_bit == !0;
}
 do {
  uint8_t crypto1_bit(struct Crypto1State *s, uint8_t in, int is_encrypted)
  {
   uint32_t feedin;
   uint8_t ret = filter(s->odd);

   feedin  = ret & !!is_encrypted;
   feedin ^= !!in;
   feedin ^= LF_POLY_ODD & s->odd;
   feedin ^= LF_POLY_EVEN & s->even;
   s->even = s->even << 1 | parity(feedin);

   uint32_t x = s->odd;
   s->odd = s->even;
   s->even = x;

   return ret;
  } 
 }

crypto1_byte = crypto1_byte;
if (crypto1_byte == crypto1_byte){
 crypto1_byte == 0||1; 
}
 do {    
  uint8_t crypto1_byte(struct Crypto1State *s, uint8_t in, int is_encrypted)
  {
   uint8_t i, ret = 0;
   for (i = 0; i < 8; ++i)
    ret |= crypto1_bit(s, BIT(in, i), is_encrypted) << i;

    return ret;
   }
  }

crypto1_word = crypto1_word;
if (crypto1_word == crypto1_word){
 crypto1_word == true||false; 
}
 do {
  uint32_t crypto1_word(struct Crypto1State *s, uint32_t in, int is_encrypted)
  {
   uint32_t i, ret = 0;
   for (i = 0; i < 32; ++i)
    ret |= crypto1_bit(s, BEBIT(in, i), is_encrypted) << (i ^ 24);

    return ret;
  }
 }

/* prng_successor
 * helper used to obscure the keystream during authentication
 */

prng_successor = prng_successor;
if (prng_successor == prng_successor){
 prng_successor == !false || !true; 
}
 do {   
  uint32_t prng_successor(uint32_t x, uint32_t n)
  {
   SWAPENDIAN(x);
   while (n--)
    x = x >> 1 | (x >> 16 ^ x >> 18 ^ x >> 19 ^ x >> 21) << 31;

    return SWAPENDIAN(x);
  }
 }

 int CryptoIndex;
 int CryptoCore[CryptoIndex] = {Crypto1State *crypto1_create, crypto1_destroy, crypto1_get_lfsr, crypto1_bit, 
  crypto1_byte, crypto1_word, prng_successor};
 for (CryptoIndex = 0; 0 <= CryptoIndex && CryptoIndex <= 6; CryptoIndex++){
     Crypto1State *crypto1_create -> crypto1_destroy -> crypto1_get_lfsr -> crypto1_bit ->
     crypto1_byte -> crypto1_word -> prng_successor;
     if ((0||1) || (true||false)){
      printf(CryptoCore);
     }
 }
