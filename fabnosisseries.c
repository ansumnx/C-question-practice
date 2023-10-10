#include<stdio.h>
int main()
{
    int a,b,c,limit,i;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("%d %d ",a,b);
    for(i=2;i<limit;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}