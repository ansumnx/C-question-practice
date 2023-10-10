#include<stdio.h>
void preinpost (int a)
{
    if(a==0) return;
    printf("%d",a);
    preinpost(a-1);
    printf("%d",a);
    preinpost(a-1);
    printf("%d",a);
    return;

}
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    preinpost(a);
    return 0;
} 