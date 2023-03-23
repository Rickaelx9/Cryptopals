#ifndef HEXTOBASE64_H
#define HEXTOBASE64_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stringToHex(const char * str, uint8_t * hex);
int hexToBase64(uint8_t * hex, uint8_t * base64, int hexlen);
void base64ToString(uint8_t * base64, int base64len);

#endif 
