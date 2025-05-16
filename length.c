#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("enter the name");
    scanf("%s",&name[10]);
    printf("%s\n",name[10]);
    int length=strlen(name);
    printf("%d\n",length);
    strcpy(name,"brunda");
    printf("%s",name);
    int compare=strcmp("brundashree","brundashree");
    printf("%d",compare);
    return 0;
}
