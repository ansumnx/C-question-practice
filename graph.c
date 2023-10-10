#include<stdio.h>
void swap(int *x ,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("enter two digit,you want to swip\n");
    scanf("%d %d",&a,&b);
    printf("before swaping\na=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("after swaping\na=%d b=%d",a,b);
    return 0;
}