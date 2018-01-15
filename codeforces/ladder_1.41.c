#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,t;
	scanf("%d%d",&n,&t);
	int a[n],i,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	int x=sum+(n-1)*10;

	if(t<x)
		printf("-1\n");
	else
		printf("%d\n",2*(n-1)+((t-x)/5));
	return 0;
}
