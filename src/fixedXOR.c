#include "hexToBase64.h"
#include "fixedXOR.h"

char tab16[] = "0123456789abcdef";

void XOR(uint8_t * hex1, uint8_t * hex2, uint8_t * res, int hexlen)
{
	for(int i = 0; i < hexlen; ++i)
	{
		res[i] = hex1[i] ^ hex2[i];
        printf("%02X ", res[i]);
	}
	
    printf("\r\n");
	for(int i = 0; i < hexlen; ++i)
	{
        printf("%c", res[i]);
	}
    printf("\r\n");
    printf("\r\n");
}

void XOR_key(uint8_t * hex1, char key, uint8_t * res, int hexlen)
{
	uint8_t hex2[hexlen];
	memset(hex2, (uint8_t)key, hexlen);
	XOR(hex1, hex2, res, hexlen);
}

