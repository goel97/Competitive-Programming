#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,a[200005],s,j=0,flag=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<200005;i++)
			a[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&s);
			a[s]=1;
		}
		while(flag!=1)
		{
			if(a[j]==1)
				j++;
			else if(k>0)
			{
				a[j]=1;
				k--;
				j++;
			}
			else
			{
				printf("%d\n",j);
				flag=1;
			}
		}
	}

	return 0;
}
