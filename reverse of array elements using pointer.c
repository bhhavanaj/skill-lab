#include <stdio.h>
int main() {
    int arr[10]={9,8,7,6,5,4},n=6,i, *start,*end,temp;
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
 }
 for(i=0;i<n;i++){
     printf("%d ",arr[i]);
 }
}
