#include<stdio.h>
main()
{
    int a,b,c;
    {
        for (a=1;a<=5;a++)
        {
            for(b=1;b<4;b++)
            {
                printf(" ");

            }
            for(c=1;c<=a;c++)
            {
                printf("*");

            }
            printf("\n");
        }
    }
}