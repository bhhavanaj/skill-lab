#include <stdio.h>
int main(){
    int row,col;
    int i,j;
    printf("Enter the number of row and col");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    printf("Enter elements of A matrix\n");
    for(i=0;i<row;i++){
        for( j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of B matrix\n");
    for(i=0;i<row;i++){
        for( j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for( i=0;i<row;i++){
        for( j=0;j<col;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of the two matrix\n");
    for(i=0;i<row;i++){
        for( j=0;j<col;j++){
            printf("%6d",c[i][j]);
        }
        printf("\n");
    }
}
