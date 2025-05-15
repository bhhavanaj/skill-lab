#include <stdio.h>
int main()
{
    int x=10,y=100;
    int *ptr1=&x;
    int *ptr2=&y;
    printf("before swap:x=%d,y=%d\n",x,y);
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("after swapping:x=%d ,y=%d",x,y);
    return 0;
}
