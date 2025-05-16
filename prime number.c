#include<stdio.h>
int i,num,isprime=1;
int main(){
    printf("enter the name starting from positive 2");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%2==0){
            printf("its not a prime");
        }else{
            printf("its a primr");
        }
    }
}
    
