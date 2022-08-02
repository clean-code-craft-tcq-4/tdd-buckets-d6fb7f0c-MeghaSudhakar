#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "TDD.h"



int main()
{
    int array[5] = {1,2,4,5,6};
    int size = sizeof(array);
    int done = check_readings(array,size);
    return 0;
}



