#include <stdio.h>
int main() {
    char name[50];
    int age;
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter your age:");
    scanf("%d",&age);
    printf("Hello %s,you are %d years old \n",name,age);
    return 0;
}

output
enter your name:BHAVANA.J
enter your age:19
Hello BHAVANA.J,you are 19 years old 

