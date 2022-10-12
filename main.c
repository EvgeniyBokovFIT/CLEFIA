#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "clefia.h"

int main(int argc, char** argv) {
    if ((argc < 5) || (strcmp(argv[4], "c") != 0 && strcmp(argv[4], "d") != 0)) {
        fprintf(stderr,"%s\n", "Usage: <src_file> <key_file> <out_file> <mode: c/d>");
        return 1;
    }

    if(argv[1] == argv[3]) {
        fprintf(stderr,"%s\n", "Use different files for input and output");
        return 1;
    }

    int code_mode = strcmp(argv[4], "c");

    FILE* fp_src = fopen(argv[1], "rb");
    if (fp_src == NULL) {
        perror("Can't open src file");
    }
    FILE* fp_key = fopen(argv[2], "rb");
    if (fp_key == NULL) {
        perror("Can't open key file");
    }
    FILE* fp_result = fopen(argv[3], "wb");
    if (fp_result == NULL) {
        perror("Can't create resulting file");
    }

    uint32_t input_block[4] = {0, 0, 0, 0};
    uint32_t key_block[4] = {0, 0, 0, 0};

    fread(key_block, sizeof(uint32_t), 4, fp_key);

    uint32_t white_keys[4];
    uint32_t round_keys[36];

    generate_keys(key_block, white_keys, round_keys);

    uint32_t result_block[4];

    while (!feof(fp_src)) {
        memset(input_block, 0, sizeof(uint32_t) * 4);

        size_t read = fread(input_block, sizeof(uint32_t), 4, fp_src);
        if (read == 0) {
            continue;
        }

        if (code_mode == 0) {
            encrypt(input_block, round_keys, white_keys, result_block);
        } else {
            decrypt(input_block, round_keys, white_keys, result_block);
        }

        fwrite(result_block, sizeof(uint32_t), 4, fp_result);
    }

    fclose(fp_key);
    fclose(fp_src);
    fclose(fp_result);
    return 0;
}