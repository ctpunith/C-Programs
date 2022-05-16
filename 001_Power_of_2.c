/********************************************************************************
Power of 2
*********************************************************************************/
#include <stdio.h>  /*Preprocessor Directive*/

int main() {
    int number = 0, result = 0;              /*declare local variables To store a number and result*/
    printf("enter a positive number\n");     /*Display a message to user for a number usually positive number */
    scanf("%d", &number);                   /*User input*/
    result = number & (number - 1);         /*check whether number is power of 2 when anding number with previous number*/
    if(result == 0 )                        /*if result is zero then number is power of 2*/
    {
        printf(" %d is a power of 2", number);  /*Display a message if number is power of 2*/
    }
    else
    {
        printf("  %d is not a power of 2", number);   /*Display a message if number is not a power of 2*/
    }
    return 0;
}


//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*enter a number
*15
*15 is not a power of 2
*/

/********************************************************************************
Example : 2 
*********************************************************************************/
/* 
*enter a number
*16
*16 is a power of 2
*/
