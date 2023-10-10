#include<stdio.h>
int main()
{
    int arry[5]={12,12,34,56,90};
    int a,sum=0;
    for(a=0;a<5;a++)
    {
        sum=sum+arry[a];
    }
   printf("sum value is %d",sum);

} 