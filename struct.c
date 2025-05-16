#include <stdio.h>
int main() {
    struct Student{
        char name[50]; 
        int roll;
        float marks;
    };
struct Student s1;
printf("enter the name");
scanf("%s",&s1.name);
printf("enter the roll number");
scanf("%d",&s1.roll);
printf("enter the marks of student");
scanf("%f",&s1.marks);
    return 0;
}
