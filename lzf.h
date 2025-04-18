#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "lz4.h"
enum {
// BLOCK_BYTES = 1024 * 8,
   BLOCK_BYTES = 1024 * 64,
};

#ifdef __cplusplus
extern "C" {
#endif
int lzf_decompress(FILE* outFp, FILE* inpFp);
void lzf_compress(FILE* outFp, FILE* inpFp);

#ifdef __cplusplus
}
#endif