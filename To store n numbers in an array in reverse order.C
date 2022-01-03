#include <stdio.h>
int main()
{
    int a[50],i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the array element");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("The array elements in reverse are");
    for(i=n-1;i>=0;i--)
    {
    printf("%d\t",a[i]);
    }
    return 0;
    }
