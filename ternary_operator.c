#include<stdio.h>
#include<math.h>

int main(void){

    int a,b,c,max;

    printf("enter numbers :"); //  20 10 30 
    scanf("%d%d%d",&a,&b,&c);

    max = (a>b)? (a>c?a:c) : (b>c?b:c);
    
    printf("%d",max);

    return 0;
}