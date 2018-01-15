#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,p,i,k=0,j=0,a;
		scanf("%d%d",&n,&p);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a>=(p/2))
				k++;
			else if(a<=(p/10))
				j++;
		}
		if(k==1&&j==2)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}
