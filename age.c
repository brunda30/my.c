#include<stdio.h>
int main(){
   int age;
   printf("enter age\n");
   scanf("%d",&age);
   if(age>19){
       if(age<30){
           printf("you are a young adult\n");
       }
   }else{
       printf("you are not a young adult");
   }
}
  
