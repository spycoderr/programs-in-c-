
// sum of two arrays

#include <stdio.h>
#include <math.h>

int main()
{
    float sum = 0;
    int marks_1[5];
    int marks_2[5];
    int i;

    printf("enter marks of class A students\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks_1[i]);
    }
    printf("enter marks of class B students\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks_2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("sum of A and B is %d\n", marks_1[i] + marks_2[i]);
    }

    return 0;
}