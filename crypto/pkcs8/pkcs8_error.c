/* Copyright (c) 2014, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

#include <openssl/err.h>

#include <openssl/pkcs8.h>

const ERR_STRING_DATA PKCS8_error_string_data[] = {
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_EVP_PKCS82PKEY, 0), "EVP_PKCS82PKEY"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_EVP_PKEY2PKCS8, 0), "EVP_PKEY2PKCS8"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_PKCS5_pbe2_set_iv, 0), "PKCS5_pbe2_set_iv"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_PKCS5_pbe_set, 0), "PKCS5_pbe_set"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_PKCS5_pbe_set0_algor, 0), "PKCS5_pbe_set0_algor"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_PKCS5_pbkdf2_set, 0), "PKCS5_pbkdf2_set"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_PKCS8_encrypt, 0), "PKCS8_encrypt"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_pbe_cipher_init, 0), "pbe_cipher_init"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_pbe_crypt, 0), "pbe_crypt"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_pkcs12_item_decrypt_d2i, 0), "pkcs12_item_decrypt_d2i"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_pkcs12_item_i2d_encrypt, 0), "pkcs12_item_i2d_encrypt"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_pkcs12_key_gen_asc, 0), "pkcs12_key_gen_asc"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_pkcs12_key_gen_uni, 0), "pkcs12_key_gen_uni"},
  {ERR_PACK(ERR_LIB_PKCS8, PKCS8_F_pkcs12_pbe_keyivgen, 0), "pkcs12_pbe_keyivgen"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_CIPHER_HAS_NO_OBJECT_IDENTIFIER), "CIPHER_HAS_NO_OBJECT_IDENTIFIER"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_CRYPT_ERROR), "CRYPT_ERROR"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_DECODE_ERROR), "DECODE_ERROR"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_ENCODE_ERROR), "ENCODE_ERROR"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_ENCRYPT_ERROR), "ENCRYPT_ERROR"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_ERROR_SETTING_CIPHER_PARAMS), "ERROR_SETTING_CIPHER_PARAMS"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_KEYGEN_FAILURE), "KEYGEN_FAILURE"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_KEY_GEN_ERROR), "KEY_GEN_ERROR"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_METHOD_NOT_SUPPORTED), "METHOD_NOT_SUPPORTED"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_PRIVATE_KEY_DECODE_ERROR), "PRIVATE_KEY_DECODE_ERROR"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_PRIVATE_KEY_ENCODE_ERROR), "PRIVATE_KEY_ENCODE_ERROR"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_TOO_LONG), "TOO_LONG"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_UNKNOWN_ALGORITHM), "UNKNOWN_ALGORITHM"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_UNKNOWN_CIPHER), "UNKNOWN_CIPHER"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_UNKNOWN_CIPHER_ALGORITHM), "UNKNOWN_CIPHER_ALGORITHM"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_UNKNOWN_DIGEST), "UNKNOWN_DIGEST"},
  {ERR_PACK(ERR_LIB_PKCS8, 0, PKCS8_R_UNSUPPORTED_PRIVATE_KEY_ALGORITHM), "UNSUPPORTED_PRIVATE_KEY_ALGORITHM"},
  {0, NULL},
};
