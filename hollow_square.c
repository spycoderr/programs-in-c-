#include <stdio.h>
#include <math.h>

int main()
{

    // * * * * *
    // *       *
    // *       *
    // * * * * *

    int n;

    printf("Enter the size of the square : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)

        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
        }

        else
        {

            printf("*");

            for (int j = 1; j < n - 1; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}