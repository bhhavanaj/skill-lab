#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("enter name");
    scanf("%s",&name);
    printf("%s\n",name);
    int length = strlen(name);
    printf("%d\n",length);
    strcpy(name,"chidu");
    printf("%s\n",name);
    int cmp=strcmp("bo","boo");
    printf("%d\n",cmp);
    strcat(name,"coder");
    printf("%s\n",name);
}
