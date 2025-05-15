#include<stdio.h>
int areaofcircle(int r)
{
    float pi=3.14,area;
    area=pi*r*r;
    return area;
}
int main()
{
    int result=areaofcircle(5);
    printf("%d",result);
    return 0;
}
