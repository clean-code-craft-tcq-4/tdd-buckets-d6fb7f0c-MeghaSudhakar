#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define ONE 1
#define first_arr_idx_start 0
void check_readings(int *array, int size);

int main()
{
    int array[9] = {1,2,3,4,5,10,11,12,13};
    int size = sizeof(array);
    check_readings(array,size);
    return 0;
}

void check_readings(int *array, int size)
{
    int i=0;
    int j=0;
    int second_arr_idx_start;
    
    int count_1=0;
    int count_2=0;
    
    int second_array;
    int print=0;
    
    printf("Range\n");
    for(i=0; i<size; i++)
    {
        if(array[i] == (array[first_arr_idx_start] + i))
        {
            printf("%d," ,array[i]);
            count_1 = count_1 + ONE;
        }
        else
        {
            second_arr_idx_start = i;
            if(print == 0)
            {
                printf("\n");
                print++;
            }
            
            else
            {
                //do nothing
            }
            
            for(second_array=i; second_array<size; second_array++)
            {
                if(array[second_array] == (array[second_arr_idx_start] + j))
                {
                    printf("%d," ,array[second_array]);
                    count_2 = count_2 + ONE;
                    j = j+ONE;
                }
                else
                {
                    //do nothing
                }
            }
           
        }
        
    }
    printf("\n\nReadings\n");
    printf("%d\n", count_1);
    printf("%d\n", count_2);
}

