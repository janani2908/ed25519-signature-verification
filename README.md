# Ed25519 Signature Verification in C

This repository demonstrates a simplified implementation of Ed25519 signature verification.

Ed25519 is a modern digital signature scheme designed for high performance and strong security.

The algorithm is defined in RFC 8032 and is widely used in secure communication protocols.

Features

- Ed25519 signature verification
- Educational implementation
- Pure C code
- Example test program

Project Structure

ed25519.c   Core algorithm implementation
ed25519.h   Header definitions
verify.c    Signature verification logic
main.c      Example test program
Makefile    Build instructions

Build

Compile the program:

gcc ed25519.c verify.c main.c -o ed25519_test

Run

./ed25519_test

Applications

Ed25519 is used in:

- SSH authentication
- TLS certificates
- secure boot systems
- cryptocurrency systems

Author

Janani T  
Embedded Systems & Cryptography Developer
