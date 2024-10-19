#include <stdio.h>
#include <math.h>

int main()
{

int number, remainder, decimal = 0,place=0;
    printf("enter number : ");
    scanf("%d", &number);

    while (number > 0)
    {
        remainder = number % 8;
        number = number / 8; 
        decimal += (remainder * pow(10,place));
        place++;
    }

 printf("decimal number is : %d", decimal);


    return 0;
}