/********************************************************************************
Swapping nibble
*********************************************************************************/
#include <stdio.h>                                      /*inclusion of header files*/    
#include <stdint.h>                                     /*header for unsinged numbers*/
int main(void)
{
    uint8_t value = 0x8A;                              /*declare a variable with 8 bit data*/
    uint8_t result = 0;                                /*declare a result variable to store the swapped nibble*/
    printf("Before nibble swapped = %X \n", value);    /*display the data before swapping nibble*/
    result  = (value & 0x0f) << 4;                     /*extract last four bits from value and store accordingly in result*/
    result |= (value & 0xf0) >> 4;                     /*extract first four bits from value and store accordingly in result*/
    printf("After nibble swapped = %X ", result);      /*display the swapped nibble result*/
    return 0;
}

//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*
*Before nibble swapped = 0x8A
*After nibble swapped  = 0xA8
*/
