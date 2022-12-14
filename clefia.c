//
// Created by Evgeniy on 11.10.2022.
//
#include <stdint.h>
#include "clefia.h"

uint8_t S0[16][16] = {
        {0x57, 0x49, 0xd1, 0xc6, 0x2f, 0x33, 0x74, 0xfb, 0x95, 0x6d, 0x82, 0xea, 0x0e, 0xb0, 0xa8, 0x1c},
        {0x28, 0xd0, 0x4b, 0x92, 0x5c, 0xee, 0x65, 0xb1, 0xc4, 0x0a, 0x76, 0x3d, 0x63, 0xf9, 0x17, 0xaf},
        {0xbf, 0xa1, 0x19, 0x65, 0xf7, 0x7a, 0x32, 0x20, 0x06, 0xce, 0xe4, 0x83, 0x9d, 0x5b, 0x4c, 0xd8},
        {0x42, 0x5d, 0x2e, 0xe8, 0xd4, 0x9b, 0x0f, 0x13, 0x3c, 0x89, 0x67, 0xc0, 0x71, 0xaa, 0xb6, 0xf5},
        {0xa4, 0xbe, 0xfd, 0x8c, 0x12, 0x00, 0x97, 0xda, 0x78, 0xe1, 0xcf, 0x6b, 0x39, 0x43, 0x55, 0x26},
        {0x30, 0x98, 0xcc, 0xdd, 0xeb, 0x54, 0xb3, 0x8f, 0x4e, 0x16, 0xfa, 0x22, 0xa5, 0x77, 0x09, 0x61},
        {0xd6, 0x2a, 0x53, 0x37, 0x45, 0xc1, 0x6c, 0xae, 0xef, 0x70, 0x08, 0x99, 0x8b, 0x1d, 0xf2, 0xb4},
        {0xe9, 0xc7, 0x9f, 0x4a, 0x31, 0x25, 0xfe, 0x7c, 0xd3, 0xa2, 0xbd, 0x56, 0x14, 0x88, 0x60, 0x0b},
        {0xcd, 0xe2, 0x34, 0x50, 0x9e, 0xdc, 0x11, 0x05, 0x2b, 0xb7, 0xa9, 0x48, 0xff, 0x66, 0x8a, 0x73},
        {0x03, 0x75, 0x86, 0xf1, 0x6a, 0xa7, 0x40, 0xc2, 0xb9, 0x2c, 0xdb, 0x1f, 0x58, 0x94, 0x3e, 0xed},
        {0xfc, 0x1b, 0xa0, 0x04, 0xb8, 0x8d, 0xe6, 0x59, 0x62, 0x93, 0x35, 0x7e, 0xca, 0x21, 0xdf, 0x47},
        {0x15, 0xf3, 0xba, 0x7f, 0xa6, 0x69, 0xc8, 0x4d, 0x87, 0x3b, 0x9c, 0x01, 0xe0, 0xde, 0x24, 0x52},
        {0x7b, 0x0c, 0x68, 0x1e, 0x80, 0xb2, 0x5a, 0xe7, 0xad, 0xd5, 0x23, 0xf4, 0x46, 0x3f, 0x91, 0xc9},
        {0x6e, 0x84, 0x72, 0xbb, 0x0d, 0x18, 0xd9, 0x96, 0xf0, 0x5f, 0x41, 0xac, 0x27, 0xc5, 0xe3, 0x3a},
        {0x81, 0x6f, 0x07, 0xa3, 0x79, 0xf6, 0x2d, 0x38, 0x1a, 0x44, 0x5e, 0xb5, 0xd2, 0xec, 0xcb, 0x90},
        {0x9a, 0x36, 0xe5, 0x29, 0xc3, 0x4f, 0xab, 0x64, 0x51, 0xf8, 0x10, 0xd7, 0xbc, 0x02, 0x7d, 0x8e}
};

uint8_t S1[16][16] = {
        {0x6c, 0xda, 0xc3, 0xe9, 0x4e, 0x9d, 0x0a, 0x3d, 0xb8, 0x36, 0xb4, 0x38, 0x13, 0x34, 0x0c, 0xd9},
        {0xbf, 0x74, 0x94, 0x8f, 0xb7, 0x9c, 0xe5, 0xdc, 0x9e, 0x07, 0x49, 0x4f, 0x98, 0x2c, 0xb0, 0x93},
        {0x12, 0xeb, 0xcd, 0xb3, 0x92, 0xe7, 0x41, 0x60, 0xe3, 0x21, 0x27, 0x3b, 0xe6, 0x19, 0xd2, 0x0e},
        {0x91, 0x11, 0xc7, 0x3f, 0x2a, 0x8e, 0xa1, 0xbc, 0x2b, 0xc8, 0xc5, 0x0f, 0x5b, 0xf3, 0x87, 0x8b},
        {0xfb, 0xf5, 0xde, 0x20, 0xc6, 0xa7, 0x84, 0xce, 0xd8, 0x65, 0x51, 0xc9, 0xa4, 0xef, 0x43, 0x53},
        {0x25, 0x5d, 0x9b, 0x31, 0xe8, 0x3e, 0x0d, 0xd7, 0x80, 0xff, 0x69, 0x8a, 0xba, 0x0b, 0x73, 0x5c},
        {0x6e, 0x54, 0x15, 0x62, 0xf6, 0x35, 0x30, 0x52, 0xa3, 0x16, 0xd3, 0x28, 0x32, 0xfa, 0xaa, 0x5e},
        {0xcf, 0xea, 0xed, 0x78, 0x33, 0x58, 0x09, 0x7b, 0x63, 0xc0, 0xc1, 0x46, 0x1e, 0xdf, 0xa9, 0x99},
        {0x55, 0x04, 0xc4, 0x86, 0x39, 0x77, 0x82, 0xec, 0x40, 0x18, 0x90, 0x97, 0x59, 0xdd, 0x83, 0x1f},
        {0x9a, 0x37, 0x06, 0x24, 0x64, 0x7c, 0xa5, 0x56, 0x48, 0x08, 0x85, 0xd0, 0x61, 0x26, 0xca, 0x6f},
        {0x7e, 0x6a, 0xb6, 0x71, 0xa0, 0x70, 0x05, 0xd1, 0x45, 0x8c, 0x23, 0x1c, 0xf0, 0xee, 0x89, 0xad},
        {0x7a, 0x4b, 0xc2, 0x2f, 0xdb, 0x5a, 0x4d, 0x76, 0x67, 0x17, 0x2d, 0xf4, 0xcb, 0xb1, 0x4a, 0xa8},
        {0xb5, 0x22, 0x47, 0x3a, 0xd5, 0x10, 0x4c, 0x72, 0xcc, 0x00, 0xf9, 0xe0, 0xfd, 0xe2, 0xfe, 0xae},
        {0xf8, 0x5f, 0xab, 0xf1, 0x1b, 0x42, 0x81, 0xd6, 0xbe, 0x44, 0x29, 0xa6, 0x57, 0xb9, 0xaf, 0xf2},
        {0xd4, 0x75, 0x66, 0xbb, 0x68, 0x9f, 0x50, 0x02, 0x01, 0x3c, 0x7f, 0x8d, 0x1a, 0x88, 0xbd, 0xac},
        {0xf7, 0xe4, 0x79, 0x96, 0xa2, 0xfc, 0x6d, 0xb2, 0x6b, 0x03, 0xe1, 0x2e, 0x7d, 0x14, 0x95, 0x1d}
};

uint32_t CON_128[60] = {
        0xf56b7aeb, 0x994a8a42, 0x96a4bd75, 0xfa854521,
        0x735b768a, 0x1f7abac4, 0xd5bc3b45, 0xb99d5d62,
        0x52d73592, 0x3ef636e5, 0xc57a1ac9, 0xa95b9b72,
        0x5ab42554, 0x369555ed, 0x1553ba9a, 0x7972b2a2,
        0xe6b85d4d, 0x8a995951, 0x4b550696, 0x2774b4fc,
        0xc9bb034b, 0xa59a5a7e, 0x88cc81a5, 0xe4ed2d3f,
        0x7c6f68e2, 0x104e8ecb, 0xd2263471, 0xbe07c765,
        0x511a3208, 0x3d3bfbe6, 0x1084b134, 0x7ca565a7,
        0x304bf0aa, 0x5c6aaa87, 0xf4347855, 0x9815d543,
        0x4213141a, 0x2e32f2f5, 0xcd180a0d, 0xa139f97a,
        0x5e852d36, 0x32a464e9, 0xc353169b, 0xaf72b274,
        0x8db88b4d, 0xe199593a, 0x7ed56d96, 0x12f434c9,
        0xd37b36cb, 0xbf5a9a64, 0x85ac9b65, 0xe98d4d32,
        0x7adf6582, 0x16fe3ecd, 0xd17e32c1, 0xbd5f9f66,
        0x50b63150, 0x3c9757e7, 0x1052b098, 0x7c73b3a7
};

void double_swap(const uint32_t input[4], uint32_t result[4]) {
    result[0] = ((input[0] & 0x01ffffffu) << 7u) | ((input[1] & 0xfe000000u) >> 25u);
    result[1] = ((input[1] & 0x01ffffffu) << 7u) | (input[3]  & 0x0000007fu);
    result[2] = (input[0]  & 0xfe000000u) | ((input[2] & 0xffffff80u) >> 7u);
    result[3] = ((input[2] & 0x0000007fu) << 25u) | ((input[3] & 0xffffff80u) >> 7u);
}

void split_uint32_by_uint8(const uint32_t src, uint8_t result[4]) {
    result[0] = src & 0xFFu;
    result[1] = (src >> 1u * 8) & 0xFFu;
    result[2] = (src >> 2u * 8) & 0xFFu;
    result[3] = (src >> 3u * 8) & 0xFFu;
}

uint32_t concat_uint8s_in_uint32(const uint8_t src[4]) {
    return src[0] + (src[1] << 1u * 8) + (src[2] << 2u * 8) + (src[3] << 3u * 8);
}

uint8_t s0_block(uint8_t input) {
    uint8_t x = (input & 0b00001111u);
    uint8_t y = (input & 0b11110000u) >> 4u;
    return S0[y][x];
}

uint8_t s1_block(uint8_t input) {
    uint8_t x = (input & 0b00001111u);
    uint8_t y = (input & 0b11110000u) >> 4u;
    return S1[y][x];
}

uint8_t multiply_by_2(uint8_t x) {
    if (x & 0x80u) {
        x ^= 0x0eu;
    }
    return ((uint8_t)(x << 1u) | (uint8_t)(x >> 7u));
}

uint8_t multiply_by_4(uint8_t x) {
    return multiply_by_2(multiply_by_2(x));
}

uint8_t multiply_by_6(uint8_t x) {
    return multiply_by_2(x) ^ multiply_by_4(x);
}

uint8_t multiply_by_8(uint8_t x) {
    return multiply_by_2(multiply_by_4(x));
}

uint8_t multiply_by_a(uint8_t x) {
    return multiply_by_2(x) ^ multiply_by_8(x);
}

void apply_m0_matrix(const uint8_t vector[4], uint8_t result[4]) {
    result[0] = vector[0] ^ multiply_by_2(vector[1]) ^ multiply_by_4(vector[2]) ^ multiply_by_6(vector[3]);
    result[1] = multiply_by_2(vector[0]) ^ vector[1] ^ multiply_by_6(vector[2]) ^ multiply_by_4(vector[3]);
    result[2] = multiply_by_4(vector[0]) ^ multiply_by_6(vector[1]) ^ vector[2] ^ multiply_by_2(vector[3]);
    result[3] = multiply_by_6(vector[0]) ^ multiply_by_4(vector[1]) ^ multiply_by_2(vector[2]) ^ vector[3];
}

void apply_m1_matrix(const uint8_t vector[4], uint8_t result[4]) {
    result[0] = vector[0] ^ multiply_by_8(vector[1]) ^ multiply_by_2(vector[2]) ^ multiply_by_a(vector[3]);
    result[1] = multiply_by_8(vector[0]) ^ vector[1] ^ multiply_by_a(vector[2]) ^ multiply_by_2(vector[3]);
    result[2] = multiply_by_2(vector[0]) ^ multiply_by_a(vector[1]) ^ vector[2] ^ multiply_by_8(vector[3]);
    result[3] = multiply_by_a(vector[0]) ^ multiply_by_2(vector[1]) ^ multiply_by_8(vector[2]) ^ vector[3];
}

uint32_t f0_func(const uint32_t input, const uint32_t key) {
    uint32_t coded = key ^ input;
    uint8_t coded_split[4];
    split_uint32_by_uint8(coded, coded_split);
    coded_split[0] = s0_block(coded_split[0]);
    coded_split[1] = s1_block(coded_split[1]);
    coded_split[2] = s0_block(coded_split[2]);
    coded_split[3] = s1_block(coded_split[3]);
    uint8_t result_split[4];
    apply_m0_matrix(coded_split, result_split);
    return concat_uint8s_in_uint32(result_split);
}

uint32_t f1_func(const uint32_t input, const uint32_t key) {
    uint32_t coded = key ^ input;
    uint8_t coded_split[4];
    split_uint32_by_uint8(coded, coded_split);
    coded_split[0] = s1_block(coded_split[0]);
    coded_split[1] = s0_block(coded_split[1]);
    coded_split[2] = s1_block(coded_split[2]);
    coded_split[3] = s0_block(coded_split[3]);
    uint8_t result_split[4];
    apply_m1_matrix(coded_split, result_split);
    return concat_uint8s_in_uint32(result_split);
}

void GFN_4_r_encrypt(uint32_t rounds, const uint32_t *plaintext_block, const uint32_t *round_keys, uint32_t *ciphertext_block) {
    uint32_t temp[4] = {plaintext_block[0], plaintext_block[1], plaintext_block[2], plaintext_block[3]};
    uint32_t swap_buff;
    for (int i = 0; i < rounds; ++i) {
        temp[1] ^= f0_func(temp[0], round_keys[2 * i]);
        temp[3] ^= f1_func(temp[2], round_keys[2 * i + 1]);
        swap_buff = temp[0];
        temp[0] = temp[1];
        temp[1] = temp[2];
        temp[2] = temp[3];
        temp[3] = swap_buff;
    }
    ciphertext_block[0] = temp[3];
    ciphertext_block[1] = temp[0];
    ciphertext_block[2] = temp[1];
    ciphertext_block[3] = temp[2];
}

void GFN_4_r_decrypt(uint32_t rounds, const uint32_t *input_block, const uint32_t *round_keys, uint32_t *result_block) {
    uint32_t temp[4] = {input_block[0], input_block[1], input_block[2], input_block[3]};
    uint32_t swap_buff;
    for (int i = 0; i < rounds; ++i) {
        temp[1] ^= f0_func(temp[0], round_keys[2 * (rounds - i) - 2]);
        temp[3] ^= f1_func(temp[2], round_keys[2 * (rounds - i) - 1]);
        swap_buff = temp[3];
        temp[3] = temp[2];
        temp[2] = temp[1];
        temp[1] = temp[0];
        temp[0] = swap_buff;
    }
    result_block[0] = temp[1];
    result_block[1] = temp[2];
    result_block[2] = temp[3];
    result_block[3] = temp[0];
}

void encrypt(const uint32_t* plaintext_block, const uint32_t* round_keys, const uint32_t* whitening_keys, uint32_t* ciphertext_block) {
    uint32_t white_input[4] = {plaintext_block[0], plaintext_block[1] ^ whitening_keys[0],
                               plaintext_block[2], plaintext_block[3] ^ whitening_keys[1]};
    uint32_t raw_result[4];
    GFN_4_r_encrypt(18, white_input, round_keys, raw_result);
    ciphertext_block[0] = raw_result[0];
    ciphertext_block[1] = raw_result[1] ^ whitening_keys[2];
    ciphertext_block[2] = raw_result[2];
    ciphertext_block[3] = raw_result[3] ^ whitening_keys[3];
}

void decrypt(const uint32_t* ciphertext_block, const uint32_t* round_keys, const uint32_t* whitening_keys, uint32_t* plaintext_block) {
    uint32_t white_input[4] = {ciphertext_block[0], ciphertext_block[1] ^ whitening_keys[2],
                               ciphertext_block[2], ciphertext_block[3] ^ whitening_keys[3]};
    uint32_t raw_result[4];
    GFN_4_r_decrypt(18, white_input, round_keys, raw_result);
    plaintext_block[0] = raw_result[0];
    plaintext_block[1] = raw_result[1] ^ whitening_keys[0];
    plaintext_block[2] = raw_result[2];
    plaintext_block[3] = raw_result[3] ^ whitening_keys[1];
}

void self_double_swap(uint32_t* buff) {
    uint32_t copy[4] = {buff[0], buff[1], buff[2], buff[3]};
    uint32_t swap_result[4];
    double_swap(copy, swap_result);
    buff[0] = swap_result[0];
    buff[1] = swap_result[1];
    buff[2] = swap_result[2];
    buff[3] = swap_result[3];
}

void generate_keys(const uint32_t* key_input, uint32_t* white_keys, uint32_t* round_keys) {
    white_keys[0] = key_input[0];
    white_keys[1] = key_input[1];
    white_keys[2] = key_input[2];
    white_keys[3] = key_input[3];

    uint32_t intermediate_key[4];
    GFN_4_r_encrypt(12, key_input, CON_128, intermediate_key);

    uint32_t temp_buffer[4];
    for (int i = 0; i <= 8; ++i) {
        temp_buffer[0] = intermediate_key[0] ^ CON_128[24 + 4 * i];
        temp_buffer[1] = intermediate_key[1] ^ CON_128[24 + 4 * i + 1];
        temp_buffer[2] = intermediate_key[2] ^ CON_128[24 + 4 * i + 2];
        temp_buffer[3] = intermediate_key[3] ^ CON_128[24 + 4 * i + 3];

        self_double_swap(intermediate_key);
        if (i % 2 == 1) {
            temp_buffer[0] ^= key_input[0];
            temp_buffer[1] ^= key_input[1];
            temp_buffer[2] ^= key_input[2];
            temp_buffer[3] ^= key_input[3];
        }
        round_keys[4 * i] = temp_buffer[0];
        round_keys[4 * i + 1] = temp_buffer[1];
        round_keys[4 * i + 2] = temp_buffer[2];
        round_keys[4 * i + 3] = temp_buffer[3];
    }
}
