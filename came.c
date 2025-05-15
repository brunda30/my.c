#include <stdio.h>
int main(){
int x=10;
int*p=&x;
printf("value of x%d\n",x);
printf("value of pointer %d\n",*p);
*p=30;
printf("value of x:%d ",x);
}
