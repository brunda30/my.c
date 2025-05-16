#include <stdio.h>
int main(){
    struct brunda{
        char name[10];
        int age;
        float weight;
    };
    struct brunda r1;
    printf("enter the name");
    scanf("%s",r1.name);
    printf("enter the age");
    scanf("%d",r1.age);
    printf("enter the weight");
    scanf("%f",r1.weight);
}

    
