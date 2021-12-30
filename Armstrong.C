#include <stdio.h>
int main()
{
int n,sum=0,R,A,B;
printf("Enter the Number:");
scanf("%d",&n);
A=n;
while(n>0)
    {
       R=n%10;
       B=R*R*R;
       sum=sum+B;
       n=n/10;
    }
if(sum==A)
    {
       printf("%d is an Armstrong Number",A);
    }
else
    {
       printf("%d is not an Armstrong Number",A);
    }
return 0;
}
