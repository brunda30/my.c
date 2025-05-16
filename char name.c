#include <stdio.h>
int main(){
    char name[20];
    printf("enter the full name\n");
    fgets(name,20,stdin);
    printf("your namr is:%s",name);
}
