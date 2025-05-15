#include <stdio.h>
int main(){
   int num,result=0,rem,original;
   printf("enter the number");
   scanf("%d",&num);
   original=num;
   while(num!=0){
       rem=num%10;
       result=+rem*rem*rem;
       num=num/10;
   }
   if (original==result){
       printf("the number is armstrong");
   }
   else{
       printf(" the not armstrong number");
   }
}
  

    
