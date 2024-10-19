#include <stdio.h>
#include <math.h>

int main()
{
    
int number, remainder, octel = 0,place=0;
    printf("enter number : ");
    scanf("%d", &number);

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        octel += (remainder * pow(8,place));
        place++;
    }

 printf("octel number is : %d", octel);

 return 0;