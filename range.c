#include <stdio.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if (num >= 10 && num <= 100)
    printf("the number is within the range 10 to 100\n");
    else
    printf("the number is out of range\n");
    return 0;
}
