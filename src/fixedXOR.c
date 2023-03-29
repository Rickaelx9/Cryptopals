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
	//for(int i = 0; i < hexlen; ++i)
	//{
    //    printf("%c", res[i]);
	//}
    //printf("\r\n");
    //printf("\r\n");
}

void XOR_key(uint8_t * hex1, char key, uint8_t * res, int hexlen)
{
	uint8_t hex2[hexlen];
	memset(hex2, (uint8_t)key, hexlen);
	XOR(hex1, hex2, res, hexlen);
}

void XOR_long_key(char * str, char * key, uint8_t * res)
{
	int len = strlen(str);
	uint8_t hex2[len];
	int j = 0;

	for(int i = 0; i < len; ++i)
	{
		hex2[i] = key[j];
		++j;
		if(j == strlen(key)) j = 0;
	}
	XOR(str, hex2, res, len);
}

