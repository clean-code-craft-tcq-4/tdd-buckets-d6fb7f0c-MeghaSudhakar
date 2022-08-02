#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "TDD.h"

int check_readings(int *array, int size)
{
    int count=0;
    int i;
    
    for(i=0; i<size; i++)
    {
        if ((array[i+1]) == (array[i] + 1))
        {
            count= count+1;   
            printf(" %d - %d", array[i], array[i+1]);
        }  
        else
        {
            printf("\n");
        }
        
    }
    printf("\nArray has %d readings\n", count+1);
    
  return count;
}

