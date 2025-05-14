#include<stdio.h>
int main(){
   int i;
   float f;
   
   printf("enter an integer:");
   scanf("%d",&i);
   
   printf("enter a float:");
   scanf("%f",&f);
   
   printf("you entered integer:%d\n",i);
   printf("you entered float:%,2f\n",f);
   return 0;
}
