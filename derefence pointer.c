#include<stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a;
    printf(" value of pointer :%d\n",a);
    
    *ptr=10;
    printf("new of x : %d",a);
    return 0;
}
