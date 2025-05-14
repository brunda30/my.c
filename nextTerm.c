#include<stdio.h>
int main(){
    int n,t1=0,t2=1,nextTerm;
    printf("enter number of terms:");
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
        printf("fibbonaci:%d%d\n",t1,t2);
        nextTerm=t1+t2;
        printf("nextTerm %d\n",nextTerm);
        t1=t2;
        t2=nextTerm;
    }
}
