#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#include "hexToBase64.h"
#include "fixedXOR.h"

int main()
{
    //uint8_t hex[256];
    //uint8_t base64[256];
    //int hexlen = stringToHex("49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d", hex);
    //int base64len = hexToBase64(hex, base64, hexlen); 
    //base64ToString(base64, base64len);
    
	uint8_t hex1[256];
	uint8_t hex2[256];
	uint8_t res[256];
	int hexlen = 0;
	
	hexlen = stringToHex("1c0111001f010100061a024b53535009181c", hex1);
	hexlen = stringToHex("686974207468652062756c6c277320657965", hex2);

	XOR(hex1, hex2, res, hexlen);

    return 0; 	
}
