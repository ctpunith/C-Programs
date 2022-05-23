
#include <stdio.h>  /*Preprocessor Directive*/

int main() {
    int number=0, no_of_ones=0;               /*declare local variables To store a number and result*/
    printf("Enter the decimal number\n");     /*Display a message to user for a decimal number usually positive number */
    scanf("%d",&number);                      /*User input*/
    while(number >0)                          /*number is greater than*/
    {
        number = number & (number - 1);       /*number ANDIng with its previous number and assign to number again*/
        no_of_ones++;                         /*increment the number of ones*/
    }
    printf("no_of_ones = %d",no_of_ones);                  /*print number of ones*/
    
    return 0;
}

//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*
*Enter the decimal number
*25
*no_of_ones = 3
*/

/********************************************************************************
Example : 2 
*********************************************************************************/
/*
*Enter the decimal number
*16
*no_of_ones = 4
*/
