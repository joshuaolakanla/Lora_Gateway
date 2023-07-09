#ifndef _BASE64_H
#define _BASE64_H
#include <stdint.h>		/* C99 types */
int bin_to_b64_nopad(const uint8_t * in, int size, char * out, int max_len);
int b64_to_bin_nopad(const char * in, int size, uint8_t * out, int max_len);
int bin_to_b64(const uint8_t * in, int size, char * out, int max_len);
int b64_to_bin(const char * in, int size, uint8_t * out, int max_len);
#endif
