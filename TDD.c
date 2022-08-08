#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "TDD.h"

void sort_array(int *array, int arraysize)
{
    int i, j, min_idx; 
  
    // One by one move boundary of 
    // unsorted subarray 
    for (i = 0; i < arraysize-1; i++) 
    { 
        
        // Find the minimum element in 
        // unsorted array 
        min_idx = i; 
        for (j = i+1; j < arraysize; j++) 
        {
             if (array[j] < array[min_idx]) 
             {
                min_idx = j; 
             }
        }
        // Swap the found minimum element 
        // with the first element 
        swap(&array[min_idx], &array[i]); 
    } 
}

//Swap function
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

//Function to print an array
void printArray(int array[], int size) 
{ 
    int i; 
    printf("The charging current value during the process of charging is\n");
    for (i=0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
     
    printf("\n");  
    printf("\n"); 
}

int check_readings(int *array, int size)
{
    static int count=0;
    int i,flag;
    
    for(i=0; i<size; i++)
    {
        if ((array[i] == array[i+1]))
        {
            count= count+1;
            flag=1;
            printf(" %d - %d", array[i], array[i+1]);
        }
        else if ((array[i+1]) == (array[i] + 1))
        {
            count= count+1;  
            flag=1;
            printf(" %d - %d", array[i], array[i]+1);
        } 
        else
        {
            if(flag==1)
            {
                printf("\nArray has %d readings\n", count+1);
                flag=0;
                count=0;
            }
            
            else
            {
                flag = 2;
                
            }
        }
    }
  
    if(flag == 2)
    printf("array does not have any consecutive readings");

    return 1;
}
  

