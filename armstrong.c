#include<stdio.h>
int main(){
    int num,res=0,rem,org;
    printf("enter the number:");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem=num%10;
        res+=rem*rem*rem;
        num=num/10;
    }
    if(org==res)
    {
        printf("%d is armstrong");}
    else
    {
        printf("%d is not armstrong");
    }
}
