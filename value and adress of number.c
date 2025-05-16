#include <stdio.h>
int main() {
    int arr[10]={9,8,7,6,5,4},i;
    int *y=arr;
    for(i=0;i<6;i++){
        printf("value:%d \n address :%p \n",*(y+i),(y+i));
    }
}
