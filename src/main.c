#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#include "hexToBase64.h"
#include "fixedXOR.h"

int main()
{
	// Set 1 challenge 1
    
	//uint8_t hex[256];
    //uint8_t base64[256];
    //int hexlen = stringToHex("49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d", hex);
    //int base64len = hexToBase64(hex, base64, hexlen); 
    //base64ToString(base64, base64len);
    
	
	// Set 1 challenge 2
	
	//uint8_t hex1[256];
	//uint8_t hex2[256];
	//uint8_t res[256];
	//int hexlen = 0;
	//hexlen = stringToHex("1c0111001f010100061a024b53535009181c", hex1);
	//hexlen = stringToHex("686974207468652062756c6c277320657965", hex2);
	//XOR(hex1, hex2, res, hexlen);
	
	// Set 1 challenge 3
	
	uint8_t hex1[256];
	uint8_t hex2[256];
	uint8_t res[256];
	int hexlen = 0;
	
	hexlen = stringToHex("1b37373331363f78151b7f2b783431333d78397828372d363c78373e783a393b3736", hex1);
	XOR_key(hex1, 'X', res, hexlen);
	
	//char joke[] = "ETAOIN SHRDLU"; --> useless because it's just the most frequent letter in english...
	
	//XOR_key((uint8_t*)joke, 'X', res, strlen(joke));


    return 0; 	
}
