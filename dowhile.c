#include <stdio.h>
int main()
{
    int a;
    do
    {
        printf("enter the number\n");
        scanf("%d", &a);
        printf("please try later!\n");
        a++;

    } while (a <= 5);
    return 0;
}