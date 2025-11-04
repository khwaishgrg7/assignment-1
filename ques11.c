#include<stdio.h>
int main(){
    int i,j,odd=0,even=0;
    int arr[5]={};
    for (i=0;i<5;i++){
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }
    for (j=0;j<5;j++)
    { 
        if (arr[j]%2==0)
        {
            even=arr[j]+even;
        }
        else{
            odd=arr[j]+odd;
        } 
    }
    printf("%d is the odd score\n %d is the even score",odd,even);
    return 0;
}