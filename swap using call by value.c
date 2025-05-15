#include <stdio.h>
int main()
{
    int x=10,y=100;
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after swapping:x=%d ,y=%d",x,y);
    return 0;
}
