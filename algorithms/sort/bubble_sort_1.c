#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int* sorting(int* arr);
void print_arr(const int arr[]);
int main()
{
    print_arr([1,6,5,2,7,8,3,4,8]);
    return 0;
}

// int* sorting(const int* arr)
// {
//     int* arr1 = (int *)calloc(syzeof(arr), size(int));
//     int* arr2 = (int *)calloc(syzeof(arr), size(int));

// }

void print_arr(const int arr[])
{
    printf("[ ");
    
    for (size_t i = 0; i<sizeof(arr);i++) {
        printf("%d ,", arr[i]);
    }
    printf("]\n");
}