#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);

		int a[n],min,k=1,i;

		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		min=a[0];

		for(i=1;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				k=i+1;
			}
		}

		printf("%d\n",k);
	}
}