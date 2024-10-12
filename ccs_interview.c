#include <stdio.h>

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            printf("%d ", j + 1);
        }

        for (int j = i; j > 0; j--)
        {
            printf("%d ", j);
        }

        printf(" \n");
    }

    return 0;
}
