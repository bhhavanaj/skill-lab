#include <stdio.h>
int main() {
    int n,t1=0,t2=1,nextTerm,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("fibonacci series:%d,%d",t1,t2);
    for(i=3;i<n;i++)
    {
        nextTerm=t1+t2;
        printf(",%d",nextTerm);
        t1=t2;
        t2=nextTerm;
    }
}
