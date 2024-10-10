#include <stdio.h>
#include <math.h>

int main()
{

    int temp;
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Array elemnts : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}