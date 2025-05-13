#include <stdio.h>
int main() {
    int marks;
    printf("enter the student's marks :");
    scanf("%d",&marks);
    if(marks>=40){
        printf("the student is pass\n");
    }
    else{
        printf("the student is fail");
    }
}
