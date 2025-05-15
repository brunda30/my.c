#include <stdio.h>
int main(){
    int x=10,y=20;
    int temp;
    x=y;
    y=temp;
    printf("after swap:x=%d,y=%d\n",x,y);
    return 0;
}
