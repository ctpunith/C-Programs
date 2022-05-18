/********************************************************************************
Find whether substring is present in a given string
*********************************************************************************/
#include <stdio.h>

typedef unsigned int UINT;                          /*Aliasing unsigned int to UINT*/
char *desc= "Hi I am Raj from Bengaluru.";          /*initialization of description string*/
char *sub = "Benga";                                /*Substring*/
enum bool{false=0, true};                           /*enum for True and False*/
UINT SubString(char *, char*);                      /*Foward declaration of SubString function*/
int main() {                                         /*main function*/
    UINT flag = false;                               /*declare flag to hold substirng present or not*/
    flag = SubString(desc, sub);                     /*SubString function call*/
    if(flag)                                          /*If flag is present then substring exist in given string*/
        printf("\nsubstring is present");
    else
        printf("\nsubstring is not present");        /*If no flag then substring doesnt exist in given dtring */
    return 0;
}


UINT SubString(char *description, char* p)		 /*Definition of SubString with two parameters*/
{
    char *s= p;									              /*char pointer to hold substing and help in calculating length*/
    int len = 0;							              	/*Length variable to hold total length of string*/
    UINT count =0;						            		/*declare count variable*/
    while(*s)								                	/*if string is present then check for length*/
    {
        s++;								                	/*move the pointer to next character*/
        len++;								              	/*increment length for each character*/
    }
    s = p;										                /*storing the address of pointer back to s variable*/
    while( *description!='\0')					      /*check given string is not NULL*/
    {
        count = 0;								           /* count variable to hold how many characters are matched*/
        p = s;									              /*Assign copied string address back to pointer*/
        if(*description== *p) 					     /*if character of given string is matached with first character of substring then */
        {

          while(*description++ == *p++)		    /*compare each character of both strings*/
			    {               
                count++;					        	  /*increment count if characters are matched*/
          }
			    if (len == count)					          /*if length of substring is matched with counted characters*/
                return true;					        /*then return true */
        }
        description++;							          /*increment the pointer to next address location*/
    } 
    return false;							            	 /*if substring is not present then return false*/
}


//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*
*substring is present
*/

/*
NOTE: The String and Substring are hard coded. 
*/


