#include <stdio.h>

const int MAX_SIZE = 5;

int lookingOut(const int arr[MAX_SIZE][MAX_SIZE], int N, int index,
int identificator, int number) 
{
    int found = 0;
    
    if (identificator == 1)
    {
        for (int i = 0; i < N; i++)
        {
           if (arr[index][i] == number)
           {
               found += 1;
           }
        }
    }
    else 
    {
        for (int i = 0; i < N; i++)
        {
            if (arr[i][index] == number)
            {
                found += 1;
            }
        }
    }
    
    return found;
}


int main(int argc) 
{
    
    int N;
    while(1)
    {
        printf("Write matrix length (1 <= N <= %d):\n", MAX_SIZE);
        scanf("%d", &N);
        if (1 <= N <= MAX_SIZE)
        {
            break;
        }
       printf("Error! Try Again!");
    }
    
    int arr[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Write %d number in %d row:\n", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int index;
    while(1)
    {
        printf("Write desired index [0, %d]:\n", N - 1);
        scanf("%d", &index);
        if (0 <= index <= N - 1)
        {
            break;
        }
        printf("Error! Try Again!");
    }
    
    int identificator;
    while(1)
    {
        printf("Choose row (1) or column (0):\n");
        scanf("%d", &identificator);
        if (identificator == 0 || identificator == 1)
        {
            break;
        }
        printf("Error! Try Again!");
    }
    
    int number;
    printf("Find number:\n");
    scanf("%d", &number);
    
    int result = lookingOut(arr, N, index, identificator, number);
    printf("\nFound: %d numbers", result);
    return 0;
    
}