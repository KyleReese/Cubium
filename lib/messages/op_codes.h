#ifndef OP_CODES
#define OP_CODES

#include <stdint.h>

const uint8_t op_LOCAL_HELLO = 0x20; // decimal 32
const uint8_t op_LOCAL_ACK = 0x21; // decimal 33

const uint8_t op_SPA_SUBSCRIPTION_REQUEST = 0x46; // decimal 70
const uint8_t op_SPA_SUBSCRIPTION_REPLY = 0x47; // decimal 71

const uint8_t op_SPA_DATA = 0x74; // decimal 116

#endif
