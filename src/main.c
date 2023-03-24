#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#include "hexToBase64.h"

int main()
{
    uint8_t hex[256];
    uint8_t base64[256];
    int hexlen = stringToHex("49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d", hex);
    int base64len = hexToBase64(hex, base64, hexlen); 
    base64ToString(base64, base64len);

    return 0; 	
}
