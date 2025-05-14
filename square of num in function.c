#include<stdio.h>
int square(int a)
{
    int c=a*a;
    return c;
}
int main()
{
    int result=square(5);
    printf("%d",result);
    return 0;
}
