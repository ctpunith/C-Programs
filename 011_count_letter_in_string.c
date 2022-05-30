/********************************************************************************
count letter in string
*********************************************************************************/

#include <stdio.h>                                              /*inclusion of header file*/
#include <string.h>
int main() {                                                    /*main function*/

    char *s = "hello world";                                    /*intialization of string*/
    int index = 0, countIndex =0;                               /*declaration of indexes*/
    int count =0, indexFinder =0, flag =0;                      /*declaration of count and local variables*/
    int len = strlen(s);
    for(index = 0; index < len; index++)                         /*iterate from zero to last character*/
    {
        count=0;                                                /*counter starts at zero*/
        flag =0;                                                /*flag to hold whether character repeated or not*/
        for(indexFinder= 0; indexFinder<index;indexFinder++)    /*check upto one less than character index whether repeated or not*/
        {
            if(s[index] == s[indexFinder])                      /*if character repeated raise the flag*/
            flag = 1;                                           /*make flag is high*/
        }
        if(flag!=1  && (s[index] !=' '))                        /*if flag is not high and character is not a space then counter starts counting the letter*/
        {
            for(countIndex=0; countIndex<len;countIndex++)       /*start from zeroth position till the last character*/
            {
             
                if( s[index] == s[countIndex] )                 /*if character matches other character then increment the counter*/  
                    count++;                                  
            }
            printf("%c count= %d \n",s[index],count);           /*display the character and its counted value*/
        }
    }
       
    return 0;                                                   /*return zero from main*/
}


//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*
*h count= 1 
*e count= 1 
*l count= 3 
*o count= 2 
*w count= 1 
*r count= 1 
*d count= 1 
*
*/



