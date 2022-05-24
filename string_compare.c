
#include <stdio.h>                                                          /*Preprocessor Directives*/
#include <stdlib.h>                                                         /*inclusion of header file*/


int string_compare(const char * dest, const char * src);                    /*declaration of compare function*/
char *str1= "Power";                                                        /*string 1 definition*/
char *str2 = "Power";                                                       /*string 2 definition*/

int main() {
    int cmp = 0;                                                            /*local variable to hold comparision result*/ 
    cmp = string_compare(str1, str2);                                       /*calling string compare function*/
    printf("%d ", cmp);                                                     /*display compared result*/
    if (cmp == 0)                                                           /*if compare is zero then */ 
        printf("The strings are equal");                                    /*print strings are equal*/
    else if(cmp > 0)                                                        /*if compare is greater than zero*/       
        printf("The first string is greater than the second string");       /*then first string is greater than second string*/
    else                                                                    /*if compare is less than zero*/
        printf("The first string is smaller than the second string");       /*then first string is smaller then second*/
    
    return 0;                                                               /*return zero*/
}

int string_compare(const char * dest, const char * src)                    /*string compare function definition*/
{
  
    while(*dest == *src)                                                  /*compare the two strings*/
    {
        if(*dest=='\0' ||  *src == '\0')                                  /*if any one of them is terminated break the loop*/
            break;
        dest++;                                                           /*increment both destination string and source string*/
        src++;
    }
    if(*dest == '\0' && *src == '\0')                                     /*if both strings result in NULL then both are equal*/
        return 0;                                                         /*return zero*/
    else
    {
        if(*dest =='\0')                                                  /*if first string terminated first then */
        {
            printf("%c", *src);                                          /*print the character of second string return -1*/
            return -1 * (*src);
        }
            
        else if (*src == '\0')                                           /*if second string terminated first then*/  
        {
            printf("%c", *dest);                                        /*then print the first string character*/
            return *dest;                                               /*return character of first string*/
        }
            
        else
        {
            printf("%c", *dest - *src);                               /*if both are not terminated then return*/
            return ((*dest) - (*src));                                /*the difference*/
        }
    }

}


//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*
*char *str1 = "Power";  
*char *str2 = "Power";  
*0 The strings are equal
*/

/********************************************************************************
Example : 2 
*********************************************************************************/
/* Eg : 2 
*char *str1 = "Power";  
*char *str2 = "Powe";  
*r114
* The first string is greater than the second string
*/

/********************************************************************************
Example : 3
*********************************************************************************/
/* Eg : 3
*char *str1 = "Powe";  
*char *str2 = "Power"; 
*r-114
*The first string is smaller than the second string
*/


