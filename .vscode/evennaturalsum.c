#include<stdio.h>
int main(){
    int n,i,s=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++){
        if(i%2==0){
            s=s+i;
        }
  
        
    }
        printf("%d\n",s);
}