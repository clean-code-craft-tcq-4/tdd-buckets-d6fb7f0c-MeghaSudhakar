#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "TDD.h"




int main()
{
   // printf("Hello World");
    int i;
    int array[10] = {1,3,3,5,4,10,11,12,14,15};
    int arraysize = sizeof(array)/sizeof(array[0]);
    sort_current_values(array, arraysize);
    printArray(array, arraysize);
    Find_range(array, arraysize);
    return 0;
}

void sort_current_values(int *array, int arraysize)
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

void Find_range(int *array, int arraysize)
{
  /*
    //(array[i+1] - array[i])
    int i;
    static int count,flag =0;
    static int first,last,tempz,first_temp,temp=0;


    for(i=0; i<arraysize; i++)
    {
        if((((array[i+1] - array[i]) == 0) || ((array[i+1] - array[i]) == 1)))
        {
            count = count+1;
            
            flag=1;
        }
        else
        {
            if(flag)
            {
                first_temp = first_temp + (i - count);
                
                first = array[first_temp];
                
                temp = temp + count;
                last = array[temp];
            
                printf("%d - %d, %d readings\n",first,last, (count+1));
                first =0;
                last =0;

                
                flag=0;
            }
            
           
            
            
        }
    }*/
}


int check_readings(int *array, int size)
{
    int count=0;
    int first,second,i;
    int second_array[10];
    
    for(i=0; i<size; i++)
    {
        if ((array[i+1]) == (array[i] + 1))
        {
            count= count+1;  
            
            printf(" %d - %d", array[i], array[i+1]);
        }  
        else
        {
          
        }
        
    }
  
    printf("\nArray has %d readings\n", count+1);
    
  return count;
}

