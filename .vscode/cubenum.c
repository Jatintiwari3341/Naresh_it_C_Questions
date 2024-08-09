#include<stdio.h>
int main(){
    int i,n;
    printf("enter the numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d and cube of the %d is:%d\n",i,i,i*i
        *i);
    }
    
}