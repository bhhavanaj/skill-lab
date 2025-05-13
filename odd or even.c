#include <stdio.h>
int main() {
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%2==0){
        printf("the entered number is even");
    }
    else{
        printf("the entered number is odd");
    }
    return 0;
}

output
enter the number
34
the entered number is even
