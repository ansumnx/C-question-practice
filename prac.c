//rohan bander question
#include<stdio.h>
int main()
{
  int a,b;
  printf("enter two digit\n");
  scanf("%d %d",&a,&b);
  printf("before swaping\n");
  printf("a=%d b=%d\n",a,b);
  int temp=a;
  a=b;
  b=temp;
  printf("after swaping\n");
  printf("a=%d b=%d",a,b);

}