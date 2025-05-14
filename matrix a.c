#include<stdio.h>
int main(){
    int row,col,i,j;
    int a[row][col];
    printf("enter the row and col");
    scanf("%d%d",&row,&col);
        for(i=0;i<row;i++){
            for(j=0;i<col;j++){
                printf("enter the element of A matrix");
                scanf("%d",&a[i][j]);
            }
        }
}
