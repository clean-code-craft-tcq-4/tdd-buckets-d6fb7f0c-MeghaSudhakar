#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define ONE 1
#define first_arr_idx_start 0
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
  return 2;
}


