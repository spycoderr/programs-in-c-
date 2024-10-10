#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, temp;

    a = 10;
    b = 20;

    temp = a;
    a = b;
    b = temp;

    printf("%d %d", a, b);

return 0;
}