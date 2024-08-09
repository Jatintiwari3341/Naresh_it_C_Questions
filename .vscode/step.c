#include<stdio.h>
int main(){
    int n,i=1,r1,r2;
    printf("Enter the number");
    scanf("%d",&n);
    r1=n%10;
    n=n=n/10;
    while(n!=0){
        r2=n%10;
        if(r1-r2==1||r2-r1==1){
            r1=r2;
            n=n/10;
        }
        else{
            i=0;break;
        }
      
    }
      printf(i?"step numbers":"not a step numbers ");
}