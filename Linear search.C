#include<stdio.h>

int main()
{
	int a[30],i,n,item;
	
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			printf("Successful Search!!...%d is found at location %d",item,i+1);
			break;
		}
	}
	if(i==n)
	printf("Unsuccessful Search!!...%d is not found",item);
	return 0;
}
