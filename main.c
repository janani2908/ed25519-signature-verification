#include <stdio.h>
#include <stdint.h>
#include "ed25519.h"

int main()
{
    uint8_t message[] = "Hello Ed25519";
    uint8_t signature[64] = {0};
    uint8_t public_key[32] = {0};

    int valid = ed25519_verify(signature, message, sizeof(message), public_key);

    if(valid)
        printf("Signature valid\n");
    else
        printf("Signature invalid\n");

    return 0;
}
