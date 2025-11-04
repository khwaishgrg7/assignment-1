#include<stdio.h>
int main()
{
   int a,b,n,c;
   a=0,b=1;
   printf("enter value for n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
   }
   printf("\n");
    return 0;
}