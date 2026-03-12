#ifndef ED25519_H
#define ED25519_H

#include <stdint.h>

#define PUBLIC_KEY_SIZE 32
#define SIGNATURE_SIZE 64

int ed25519_verify(
    const uint8_t *signature,
    const uint8_t *message,
    uint32_t message_len,
    const uint8_t *public_key
);

#endif
