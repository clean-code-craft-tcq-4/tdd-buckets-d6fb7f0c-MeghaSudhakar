#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int check_readings(int *array, int size);

int main()
{
    int array[9] = {1,2,3,4,5,10,11,12,13};
    int size = sizeof(array);
    int done = check_readings(array,size);
    return 0;
}

int check_readings(int *array, int size)
{
    int count=0;
    int i;
    for(i=0; i<size; i++)
    {
        if ((array[i+1]) == (array[i] + 1))
        {
            count++;
            
        }
        else
        {
        }
        
    }
    printf("count is %d\n", count);
    
  return count;
}


