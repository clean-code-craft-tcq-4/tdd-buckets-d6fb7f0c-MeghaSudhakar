#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int check_readings(int *array, int size);

int main()
{
    int array[5] = {1,2,4,5,6};
    int size = sizeof(array);
    int done = check_readings(array,size);
    return 0;
}

int check_readings(int *array, int size)
{
    int count=0;
    int i;
    printf("Array has range");
    for(i=0; i<size; i++)
    {
        if ((array[i+1]) == (array[i] + 1))
        {
            count++;
             printf("%d, ", array[i]);
            
        }
        else
        {
        }
        
    }
    printf("and %d readings\n", count-1);
    
  return count;
}


