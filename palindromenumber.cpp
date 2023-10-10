#include<stdio.h>
main()
{
    int a,r,sum=0,temp;
    printf("enter the number\n");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    a=temp;
    if(a==sum)
    printf("number is palindrome");
    else
    printf("not palindrome");
}