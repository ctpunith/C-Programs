
#include <stdio.h>                                        /*Preprocessor Directive*/
#include <stdlib.h>

typedef unsigned int UINT;                               /*Given alias name for unsigned int*/
static UINT is_prime(UINT  number);                      /*declaration of static function*/

int main() {
    int Number =0 ;
    UINT result = 0;
    printf("Enter the number\n");                       /*Display a message for user input*/
    scanf("%d", &Number);                               /*Read the user input*/
    result = is_prime(Number);                          /*Call the function to chek whether number is prime or not*/
    if(result == 1)                                     /*if number is prime display prime else not prime*/
    {
        printf("Number is a prime\n");
    }
    else
    {
        printf("Number is not a prime\n");
    }
    
    return 0;
}

static UINT is_prime(UINT  number)                                    /*Static function to test number is prime or not*/
{
    UINT num_divisor=0;
    if(number <= 1)  return 0;                                        /*if number is 1 or less than 1 then not prime*/
    if(number % 2 == 0  && number > 2) return 0;                      /*if number is divisible by 2 then not prime*/
    for(num_divisor = 3; num_divisor < number/2 ; num_divisor += 2)    /*if number divisible by odd number from 3 to number/2 then not prime*/
    {
        if(number % num_divisor == 0)                                 /*check number exactly divisible by odd number*/
            return 0;                                                 /*if number is divisible then not prime*/
    }
    return 1;                                                         /*if none of above is true then number is prime*/
    
}





//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*Enter the number
*15
*Number is not a prime
*/

/********************************************************************************
Example : 2 
*********************************************************************************/
/* 
*Enter the number
*19
*Number is a prime
*/
