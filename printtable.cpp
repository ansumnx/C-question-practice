#include<stdio.h>
main()
{
    int a ,i,b;
    printf("enter the number\n");
    scanf("%d",&a);
    for (i=1;i<=10;i++)
    {
        b=a*i;
        printf("%d X %d = %d\n",a,i,b);
    }
}