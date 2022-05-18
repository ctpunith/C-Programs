/********************************************************************************
Fibonacci Series
*********************************************************************************/

#include <stdio.h>                                                    /*Preprocessor Directive*/

typedef unsigned int UINT;                                            /*Typedef unsigned int to UINT*/
int main() {  
    
    UINT fib1=0,fib2=1,fib3 = 0;                                     /*declaration of local variables*/
    UINT no_of_elements =0,N=0;                                       /*declare iteration variable and N terms*/
    printf("Enter the number of terms\n");                            /*display message for user*/
    scanf("%d",&N);                                                   /*read the user input*/
    printf("%d %d ", fib1 , fib2);                                    /*print first two elements of fibonacci series*/
    for(no_of_elements = 2; no_of_elements < N; no_of_elements++)     /* iterate from 2 because first two elements already displayed*/
    {
        fib3 = fib1 + fib2 ;                                          /*Calculate next term using previous two terms*/
        printf("%d ",fib3);                                           /*print next term*/
        fib1 = fib2;                                                  /*assign fib1 to fib2 for next iteration*/  
        fib2 = fib3;                                                  /*assign fib3 to fib2 for next iteration*/
    }
    return 0;                                                         /*return zero*/
}


//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*Enter the number of terms
*8
*0 1 1 2 3 5 8 13 
*/

/********************************************************************************
Example : 2 
*********************************************************************************/
/* 
*Enter the number of terms
*15
*0 1 1 2 3 5 8 13 21 34 55 89 144 
*/
