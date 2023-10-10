#include<stdio.h>
int main()
{
      int a[100],size,i,key,loc;
      printf("enter the size\n");
      scanf("%d",&size);
      printf("enter the element\n");
      for(i=0;i<size;i++)
      {
            scanf("%d",&a[i]);
      }      
      printf("enter the eliment to insert\n");
      scanf("%d",&key);
      printf("enter the loc to insert\n");
      scanf("%d",&loc);
      printf("%d\n",key);
      printf("%d\n",loc);
}