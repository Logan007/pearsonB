#include <stdint.h>
#include <stddef.h>

#include "portable_endian.h"


void pearson_hash_256 (uint8_t *out, const uint8_t *in, size_t len);

void pearson_hash_128 (uint8_t *out, const uint8_t *in, size_t len);

uint64_t pearson_hash_64 (const uint8_t *in, size_t len);

uint32_t pearson_hash_32 (const uint8_t *in, size_t len);

uint16_t pearson_hash_16 (const uint8_t *in, size_t len);

void pearson_hash_init(void);
