#include<stdio.h>
int main(){
    int n,r;
    printf("enter the numbers");
    scanf("%d",&n);
    int s1,s2,r2;
    while(n!=0){
        r=n%10;
        s1=s1+r;
        n=n/10;
        r2=n%10;
        n=n/10;
        s2=s2+r2;
    }
    printf("%d %d",s1,s2);
}