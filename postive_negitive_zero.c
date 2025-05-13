#include <stdio.h>
int main() {
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num>0){
        printf("the entered number is positive");
    }
    else if (num<0){
        printf("the entered number is negative");
    }
    else if (num=0){
        printf("the entered number is zero");
    }
    return 0;
}
