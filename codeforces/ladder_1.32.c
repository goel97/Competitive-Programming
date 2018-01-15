#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,m,i,j,c=0;
	scanf("%d%d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=m)
			a[i]=-1;
		else
		{
			a[i]=a[i]-m;
			if(a[i]<=0)
				a[i]=-1;
		}
	}
	j=n-1;
	i=0;
	while(c<n)
	{
		if(a[i]==-1)
		{
			c++;
			j=i;
			a[i]=-2;
		}
		else if(a[i]!=-2)
		{
			a[i]=a[i]-m;
			if(a[i]<=0)
				a[i]=-1;
		}
		i=(i+1)%n;
	}
	printf("%d\n",j+1);
	return 0;
}
