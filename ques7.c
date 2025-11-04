#include<stdio.h>
int main()
{
    int n,i,k;
    printf("enter no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",(j%2==0)?1:0);
    }
    int gaps= (n-i);
    for(k=1;k<=gaps;k++){
        printf(" ");
    }
    for(int j=1;j<=i;j++)
    {
        printf("%d",(j%2==0)?1:0);
}
 printf("\n");
    }
return 0;
}