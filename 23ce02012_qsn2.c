#include <stdio.h>
int main(){
    int a,b,x,i,j,sum=0;
    printf("enter lower limit of interval");
    scanf("%d",&a);

    printf("enter upper limit  of interval");
    scanf("%d",&b);

    
    for(i=a;i<=b;i++)
    for(j=1;j<=i/2;j++)
    
    if(i%j==0)
    sum=sum+i;

    
    
      
    

    if(sum=x);
    printf("perfect numbers are %d",x);
    
    
return 0;




}