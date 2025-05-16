#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("enter the name");
    scanf("%s",&name);
    printf("%s,name");
    int length=strlen(name);
    printf("%d\n",length);
    strcpy(name,"brunda");
    printf("%s",name);
    return 0;
}

