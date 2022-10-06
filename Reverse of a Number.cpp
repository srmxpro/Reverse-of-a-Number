#include<stdio.h>
int main()
{
	int r,n,rev=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d is rev no",rev);
	return 0;
}