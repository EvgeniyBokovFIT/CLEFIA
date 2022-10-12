//
// Created by Evgeniy on 11.10.2022.
//

#ifndef CLEFIA_CLEFIA_H
#define CLEFIA_CLEFIA_H

void generate_keys(const uint32_t* key_input, uint32_t* white_keys, uint32_t* round_keys);

void encrypt(const uint32_t* plaintext_block, const uint32_t* round_keys, const uint32_t* whitening_keys, uint32_t* ciphertext_block);

void decrypt(const uint32_t* ciphertext_block, const uint32_t* round_keys, const uint32_t* whitening_keys, uint32_t* plaintext_block);

#endif //CLEFIA_CLEFIA_H
