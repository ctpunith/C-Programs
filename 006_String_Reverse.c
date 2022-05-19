/********************************************************************************
Reverse a String 
*********************************************************************************/
#include <stdio.h>                                    /*Preprocessor Directive*/

typedef unsigned int UINT;                            /*Define Alias name for unsigned int*/

UINT string_length(char *dest);                       /*Function declaration*/

int main() {
    char str[]="Raj";                                 /*Define a string */
    UINT stringLength = 0;                            /*declare a variable to hold String Length*/
    char ch;                                          /*declare a character to hold data temporarily*/
    UINT begin_index=0,end_index=0;                   /*declare start index and end index*/
    stringLength = string_length(str);                /*function call to calculate the length of the string*/
    printf("%d ",stringLength);                       /*print the string length*/
    printf("%s ", str);                               /*print the string before modify*/
    for(begin_index=0, end_index=stringLength-1; begin_index<end_index; begin_index++,end_index--)
    {
        ch = str[begin_index] ;                       /*go through each character and take first character and store in ch variable*/
        str[begin_index] = str[end_index];            /*assign first character with last character*/
       str[end_index] = ch;                           /*assign last character with first character*/
    }
    printf("%s ", str);                               /*print the string after modification*/
    
    return 0;                                         /*return 0*/
}

UINT string_length(char *dest)                        /*function to calculate the length of the string */
{
    UINT count =0;                                    /*counter variable to hold the length*/
    while(*dest++)                                    /*iterate each character one by one*/
    {
        count++;                                      /*increase the count*/
    }
    return count;                                     /*return the length*/
}


//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*
*3 Raj jaR
*/


