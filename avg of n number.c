#include<stdio.h>
int n=10,i,sum=0;
int avgerage()
{
    int arr[n];
    for( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int avg=sum/n;
    return avg;
}
int main()
{
    printf("enter the elements");
    int result=avgerage();
    printf("%d",result);
    return 0;
}
