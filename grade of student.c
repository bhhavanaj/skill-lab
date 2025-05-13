#include <stdio.h>
int main() {
    int marks;
    printf("enter the student's marks :");
    scanf("%d",&marks);
    if(marks>=90){
        printf("grade:A\n");
    }
    else if(marks>=80){
        printf("grade:B\n");
    }
    else if(marks>=70){
        printf("grade:C\n");
    }
    else{
        printf("grade:D");
    }
    return 0;
}

output
enter the student's marks :85
grade:B
