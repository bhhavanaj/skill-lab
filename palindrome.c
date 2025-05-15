#include<stdio.h>
int main(){
    int num,rev=0,rem,org;
    printf("enter the number:");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(org==rev)
    {
        printf("%d is palindrome");}
    else
    {
        printf("%d is not palindrome");
    }
}
