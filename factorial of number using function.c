#include<stdio.h>
int i;
int bc_fact(int n,int fact){
    if(n==0){
        printf("1");
}
else if(n<0){
    printf("enter positive number");
}
else{
    for(i=1;i<=n;i++){
        fact *=i;
    }
}
return fact;
}
int main(){
    int c;
    c=bc_fact(5,1);
    printf("%d",c);
}
