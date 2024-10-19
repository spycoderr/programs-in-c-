#include<stdio.h>
#include<math.h>

int main(){

int n;
printf("enter value of n : ");
scanf("%d",&n);
int count=n,num=1;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        num = num - i;
        printf("\n");
    }
    
    return 0;
}