#include "hexToBase64.h"

char tab64[64] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/'};

int stringToHex(const char * str, uint8_t * hex)
{
    int j = 0;
    for(int i = 0; i < strlen(str); i+=2)
    {
        sscanf(&str[i], "%2X", (unsigned int *)&hex[j]);
        printf("%X ", hex[j]);
        ++j;
    } 
    printf("\r\n");
    //printf("\r\nj = %d\r\n", j);
    return j;
}

int hexToBase64(uint8_t * hex, uint8_t * base64, int hexlen)
{
    uint32_t basetemp[256];
    int j = 0;

    for(int i = 0; i < hexlen; i += 3)
    {
        basetemp[j] = hex[i+0] << 16 | hex[i+1] << 8 | hex[i+2] << 0;
        //printf("%X ", basetemp[j]);
        ++j;
    }
    //printf("\r\nj = %d\r\n", j);

    for(int i = 0; i < j; ++i)
    {
        base64[i*4+0] = (basetemp[i] >> 18) & 0x3F;
        base64[i*4+1] = (basetemp[i] >> 12) & 0x3F;
        base64[i*4+2] = (basetemp[i] >>  6) & 0x3F;
        base64[i*4+3] = (basetemp[i] >>  0) & 0x3F;
        //printf("base64[%d] = %X \r\n", i*4+0, base64[i*4+0]);
        //printf("base64[%d] = %X \r\n", i*4+1, base64[i*4+1]);
        //printf("base64[%d] = %X \r\n", i*4+2, base64[i*4+2]);
        //printf("base64[%d] = %X \r\n", i*4+3, base64[i*4+3]);
    }
    return j*4; 
}

void base64ToString(uint8_t * base64, int base64len)
{
    for(int i = 0; i < base64len; ++i)
    {
        printf("%c ", tab64[base64[i]]);
    }   
    printf("\r\n");
}
    
