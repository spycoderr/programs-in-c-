#include <stdio.h>
#include <math.h>

int main()
{

    // fibonacci series
    // 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

    int fibonacci = 0, temp;
    int num1 = 0;
    int num2 = 1;

    printf("fibonacci series : %d %d ", num1, num2);
    for (int i = 0; i < 10; i++)
    {
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        fibonacci = num1 + num2;
        printf("%d ", fibonacci);
    }
    printf("\n"); // for removing that last %

    return 0;
}