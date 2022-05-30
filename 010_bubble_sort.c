/********************************************************************************
Bubble Sort
*********************************************************************************/
#include <stdio.h>                                                      /*inclusion of header file*/          

#define N 5                                                             /*Macro define number of elements*/

int main() {
    
    int a[] = {18,15,17,29,32};                                         /*array initialization*/
    int array_index = 0, next_index = 0;                                /*local variable to store current index and next index*/
    int temp = 0;                                                       /*declaration and initialization of temporary variable which is used for swapping*/
    for(array_index = 0; array_index<N;array_index++ )                  /*for loop to print array elements*/
    {
        printf("%d ", a[array_index]);                                  /*print each elements*/
    }
    printf("\n");                                                       /*escape character for next line*/
    for(array_index = 0; array_index<N-1;array_index++ )                /*iterate through each index*/
    {
        for(next_index=0;next_index<N-array_index-1; next_index++)      /*iterate through next array index to get next element*/
        {
            if(a[next_index] < a[next_index+1])                         /*compare current element with next element*/
            {
                temp =   a[next_index] ;                                /*swap in descending order*/
                a[next_index]  =  a[next_index+1];                      /*copy the element to temporary variable and overwrite other element*/
                a[next_index+1] = temp;                                 /*copy back the temporary data*/
            }
        }
    }
    printf("%d \n", a[1]);                                              /*index of one holds second largest element in an array*/
    for(array_index = 0; array_index<N;array_index++ )                  /*print the array elements after sorting*/
    {
        printf("%d ", a[array_index]);
    }
    
    return 0;
}

//-------------------------OUTPUT-------------------------------------------------

/********************************************************************************
Example : 1 
*********************************************************************************/
/*
*18 15 17 29 32 
*29 
*32 29 18 17 15
*/
