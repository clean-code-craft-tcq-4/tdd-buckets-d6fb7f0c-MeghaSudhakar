#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "TDD.h"

int check_readings(int *array, int size)
{
    int count=0;
    int first,second,i;
    
    switch(size)
    {
        case 1:
            {
            printf("Not a valid array\n");
                count = 0;
                return count;
                break;
            }
            
        case 2:
            {
                for(i=0; i<size; i++)
                {
                    if ((array[i+1]) == (array[i] + 1))
                    {  
                        printf(" %d - %d", array[i], array[i+1]);              
                    }
                    else
                    {
                        
                    }
                }
                 return 2;
                break;
            }
            
        default:
            break;
            //count = read(array, size);       
    } 

}

/*int read(int *array, int size)
{
    
    int first=0;
    int end=0;
    int i, count;
    
    for(i=0; i<size; i++)
    {
        if ((array[i+1]) == (array[i] + 1))
        {
            count= count+1;
            first = array[i];
        }
        else
        {
            end = array[i-1];
        }
    }  
    print(first,end,count);
    
    return count;
}

void print(int first, int end, int count)
{
    
}
*/
