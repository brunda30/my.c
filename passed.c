#include<stdio.h>
int main(){
  int marks;
  printf("enter a student'sarks\n");
  scanf("%d",&marks);
  if(marks>40){
      printf("student passed\n");
  }else{
      printf("failed\n");
  }
}
