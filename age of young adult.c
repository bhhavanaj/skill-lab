#include <stdio.h>
int main() 
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>18){
        if(age<30){
            printf("your are young adult\n",age);
        }
    }
}

output
enter your age:19
your are young adult
