#include "ed25519.h"

int verify_signature(
    const uint8_t *sig,
    const uint8_t *msg,
    uint32_t msg_len,
    const uint8_t *pub)
{
    return ed25519_verify(sig, msg, msg_len, pub);
}
