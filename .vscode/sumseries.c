#include<stdio.h>
int main(){
    int n,i,s=0,sum=0;
    printf("enter the numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s*10+1;
        if(i==n){
            printf("%d",s);
            
        }
        else{
            printf("%d+",s);
        }
        sum=sum*10+i;
    }
    printf("=%d",sum);
}