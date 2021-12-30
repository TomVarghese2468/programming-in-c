#include <stdio.h>
int main()
{
int n,sum=0,X,Y;
printf("Enter the Number:");
scanf("%d",&n);
Y=n;
while(n>0)
    {
       X=n%10;
       sum=sum*10+X;
       n=n/10;
    }
printf("Reverse of %d is %d",Y,sum);
return 0;
  
