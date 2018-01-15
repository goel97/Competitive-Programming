#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);

		if(n%2==0)
		{
			for(i=1;i<=n;i++)
			if(i%2!=0)
				printf("%d ",i+1);
			else
				printf("%d ",i-1);
		}
		else
		{
			for(i=1;i<=n-2;i++)
			if(i%2!=0)
				printf("%d ",i+1);
			else
				printf("%d ",i-1);
			printf("%d ",n);
			printf("%d",n-2);
		}
		printf("\n");
	}

}