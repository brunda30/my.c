#include <stdio.h>
int main(){
    int a=8;
    int *ptr=&a;
    printf("a is:%d\n",a);
    *ptr=*ptr+10;
    printf("a is :5d\n",ptr);
}
