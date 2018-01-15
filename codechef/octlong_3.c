#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		unsigned int a[n],i,k;
		a[1]=1;
		k=4294967295;
		for(i=2;i<n;i++)
		{
			a[i]=(4294967295/n);
			k=k-(4294967295/n);
		}
		if(k%2==0)
			a[0]=(k/2);
		else
		{
			a[n-1]=a[n-1]+1;
			k=k-1;
			a[0]=k/2;
		}
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
	}

	return 0;
}
