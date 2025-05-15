#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("enter your name:");
    scanf("%s",&name);
    printf("my name is %s\n",name);
    int length = strlen(name);
    printf("%d\n",length);
    strcpy(name,"bhavana");
    printf("%s\n",name);
    int cmp=strcmp("rithu","bhavana");
    printf("%d\n",cmp);
    strcat(name," is coder");
    printf("%s\n",name);
}

