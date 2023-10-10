#include<stdio.h>
main()
{
    int a,b,fact=1;
    printf("enter the number\n");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        fact=fact*b;
    }
    printf("factorial is %d",fact);
}