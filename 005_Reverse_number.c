/********************************************************************************
Reverse the given Number
*********************************************************************************/

#include <stdio.h>							                             /*Inclusion of File header*/

typedef unsigned int UINT;					                          /*Alias name for unsigned int*/

UINT Reverse_Number(UINT);					                          /*Forward declaration of a function*/
  
int main() {
    UINT number = 0, Result=0;				                        /*local variables to store number and Result*/
    printf("Enter the decimal number\n");	                    /*Display a message to user*/
    scanf("%d", &number);					                            /*User input*/
    Result = Reverse_Number(number);		                      /*Function call to reverse a number*/
    printf("%d ", Result);					                          /*Print the result*/
				
    return 0;
}

UINT Reverse_Number(UINT Number)				                      /*Function definition to reverse a number*/
{
    UINT reversed_number = 0;					                         /*Local variable to store reversed number*/
    UINT reminder=0;							                             /*local variable is used to store reminder*/
    while(Number>0)								                             /*Iterate the loop until number becomes zero or less than zero*/
    {
        reminder =  Number % 10;				                      /*calculate the reminder*/
        reversed_number = reversed_number * 10 + reminder;		/*logic to add reminder with reversed number*/
        Number = Number / 10;							                    /*divide the number by 10 for next iteration*/
    }
    return reversed_number;						                        /*return the reversed number*/
}


//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*Enter the decimal number
*123
*321
*/

/********************************************************************************
Example : 2 
*********************************************************************************/
/*
*Enter the decimal number
*45324
*42354 
*/
