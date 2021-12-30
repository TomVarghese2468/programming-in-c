#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,temp=0;
	clrscr();
	printf("Enter the number ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
		printf("%d Is a Palindrome number",temp);
	else
		printf("%d Is not a Palindrome number",temp);
	getch();
}
