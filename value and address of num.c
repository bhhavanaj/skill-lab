#include <stdio.h>
int main() {
    int a=1;
    int *ptr=&a;
    printf("address of number:%d\n",ptr);
    printf("value of number:%d",a);
    return 0;
}
