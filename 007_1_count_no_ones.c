/********************************************************************************
Count number of ones in a given number
*********************************************************************************/
#include <stdio.h>                                        /*inclusion of header file*/

int main(void)                                            /*main function*/
{
    int noofOnes = 0;                                     /*local variable to store number of ones*/
    int number=0;                                         /*local variable to store number*/
    printf("enter the number\n");                         /*display a message for user input*/
    scanf("%d", &number);                                 /*scan the number from keyboard*/  
    while(number>0)                                       /*iterate until number is greater than zero*/
    {
        if(number & 1)                                    /*ANDing the number with digit 1*/
        {
            noofOnes++;                                   /*if number result in value increment the noofOnes*/
        }
        number >>= 1;                                     /*update the number by right shifting ones*/  
    }
    printf("Number of ones in a given number = %d", noofOnes);    /*display noofOnes in a given number*/
}


//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*
*enter the number
*15
*Number of ones in a given number = 4

*/

/********************************************************************************
Example : 2 
*********************************************************************************/
/* 
*enter the number
*255
*Number of ones in a given number = 8
*/
