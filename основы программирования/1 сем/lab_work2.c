#include <stdio.h>

int main(int argc) 
{
    int i1, i2,
    arr1[5] = {1, 2, 3, 4, 5}, arr2[5] = {3, 4, 5, 6, 7},
    arr_len1 = sizeof(arr1) / sizeof(arr1[0]), arr_len2 = sizeof(arr2) / sizeof(arr2[0]),
    found = 0;
    
    for(i1 = 0; i1 < arr_len1; i1++) 
    {
        for(i2 = 0; i2 < arr_len2; i2++) 
        {
            if (arr1[i1] == arr2[i2]) 
            {
                found += 1;
            }
        }
    }
    
    printf("%d", found);
    return 0;
}