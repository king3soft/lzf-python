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
void lzf_decompressF(const char* inputFile, const char* outputFile);

#ifdef __cplusplus
}
#endif