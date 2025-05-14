#include<stdio.h>
int raj[2][3]={
    {1,2,3},
    {4,5,6}
};
int main(){
    int row,col;
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            printf("%d",raj[row][col]);
        }
    }
    return 0;
}
   
