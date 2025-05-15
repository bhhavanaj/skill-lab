#include<stdio.h>
int main(){
    int a=100;
    int *b=&a;
    *b=*b+200;
    printf("a= %d\n",a);
    printf("*b= %d",*b);
    return 0;
}
