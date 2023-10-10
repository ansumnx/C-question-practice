#include<stdio.h>
int main()
{
    int a,temp,r,sum=0;
    printf("enter the number\n");
    scanf("%d",&a);
    temp=a;
    while(temp>0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("%d",sum);
    
}