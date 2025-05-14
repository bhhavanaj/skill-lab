#include<stdio.h>
int r;
int areaofcircle()
{
    float pi=3.14,area;
    area=pi*r*r;
    return area;
}
int main()
{
    printf("enter the r:");
    scanf("%d",&r);
    float result=areaofcircle(r);
    printf("%d",result);
    return 0;
}
