#include <stdio.h>
int main() {
    int marks;
    printf("enter the student's marks :");
    scanf("%d",&marks);
    if(marks<75){
        printf("distinction\n");
    }
    else if(40>marks>75){
        printf("pass\n");
    }
    else if(marks<40){
        printf("fail\n");
    }
    return 0;
}
