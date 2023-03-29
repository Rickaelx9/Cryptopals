#ifndef FIXEDXOR_H
#define FIXEDXOR_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

void XOR(uint8_t * hex1, uint8_t * hex2, uint8_t * res, int hexlen);
void XOR_key(uint8_t * hex1, char key, uint8_t * res, int hexlen);
void XOR_long_key(char * str, char * key, uint8_t * res);

#endif 
