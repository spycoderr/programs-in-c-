#include <stdio.h>
#include <math.h>

int main()
{

    float sum = 0;
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum = (sum + marks[i]);
    }
    float average;
    average = (sum / 5);
    printf("average is %.2f\n", average);

    return 0;
}