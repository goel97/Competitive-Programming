#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,p=0,b[7];
		scanf("%d",&n);
		int a[n];
		for(i=0;i<7;i++)
		b[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>7||a[i]<1)
			{
				p=1;
				printf("no\n");
				break;
			}
			else
			b[a[i]-1]++;
		}
		if(p!=1)
		{
			for(i=0;i<n;i++)
				if(a[i]!=a[n-1-i])
				{
					p=2;
					printf("no\n");
					break;
				}
			if(p!=2)
			{
				for(i=0;i<7;i++)
				if(b[i]==0)
				{
					p=3;
					printf("no\n");
					break;
				}
				if(p!=3)
				{
					for(i=0;i<(n/2);i++)
					if((a[i+1]-a[i])!=0&&(a[i+1]-a[i])!=1)
					{
						p=4;
						printf("no\n");
						break;
					}
					if(p!=4)
					printf("yes\n");
				}
			}	
		}
	}	
	return 0;
}


