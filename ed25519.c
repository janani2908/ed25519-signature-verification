#include "ed25519.h"
#include <string.h>

/* Placeholder hash function */
static void simple_hash(const uint8_t *msg, uint32_t len, uint8_t *out)
{
    for(uint32_t i=0;i<32;i++)
        out[i] = 0;

    for(uint32_t i=0;i<len;i++)
        out[i % 32] ^= msg[i];
}

int ed25519_verify(
    const uint8_t *signature,
    const uint8_t *message,
    uint32_t message_len,
    const uint8_t *public_key)
{
    uint8_t hash[32];

    simple_hash(message, message_len, hash);

    /* Simple comparison for demo */
    if(hash[0] == signature[0])
        return 1;

    return 0;
}
