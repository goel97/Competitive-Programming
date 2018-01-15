#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[2][n],i,max=0,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[0][i],&a[1][i]);
		sum=sum-a[0][i]+a[1][i];
		if(sum>max)
		max=sum;
	}
	printf("%d\n",max);
	return 0;
}
