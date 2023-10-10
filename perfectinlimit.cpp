#include<stdio.h>
main()
{
    int limit,b,a,sum=0;
    printf("enter the limit\n");
    scanf("%d",&limit);
   for(b=1;b<=limit;b++)
    {
        sum=0;
        for(a=1;a<b;a++)
        {
        if (b%a==0)
        sum=sum+a;
        }
    if (b==sum)
    printf("%d\n",b);
   }


}
