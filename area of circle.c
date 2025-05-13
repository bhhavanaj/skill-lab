#include <stdio.h>
int main() {
    float r,a;
    float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = pi * r * r;
    printf("Area of the circle is: %.2f\n", a);
    return 0;
}
