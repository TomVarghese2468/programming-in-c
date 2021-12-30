#include <stdio.h>
int main()
{
int n,i,count=0;
printf("Enter the Number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
       if(n%i==0)
         {
           count++;
         }
     }
    if(count==2)
         {
           printf("%d Is a prime number",n);
         }
    else
         {
           printf("%d Is not a prime number",n);
         }
    return 0;
}
