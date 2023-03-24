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
}

