#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		unsigned int n,r,i;
		scanf("%d%d",&n,&r);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int max,min,p=0,q=0,t=0;

		if(a[0]==r)
			printf("YES\n");
		else
		{	
			if(a[0]>r)
			{
				p=1;
				max=a[0];
			}
			else if (a[0]<r)
			{
				/* code */
				q=1;
				min=a[0];
			}

			if(p==1)
			{
				for (int i = 1; i < n; ++i)
				{
					/* code */
					if(a[i]<r&&q==0)
					{
						q=1;
						min=a[i];
					}	
					else if(a[i]>max)
					{
						t=1;
						printf("NO\n");
						break;

					}
					else if(q==1&&a[i]<min)
					{
						t=1;
						printf("NO\n");
						break;
					}
					else if(q==1&&a[i]<r)
					{
						min=a[i];
					}	
					else if(a[i]<max)
					{
						max=a[i];
					}	
				}
				if(t!=1)
					printf("YES\n");

			}
			else if(q==1)
			{
				for (int i = 1; i < n; ++i)
				{
					/* code */
					if(a[i]>r&&p==0)
					{
						p=1;
						max=a[i];
					}	
					else if(a[i]<min)
					{
						t=1;
						printf("NO\n");
						break;
					}
					else if(p==1&&a[i]>max)
					{
						t=1;
						printf("NO\n");
						break;
					}
					else if(p==1&&a[i]>r)
					{
						max=a[i];
					}	
					else if(a[i]>min)
					{
						min=a[i];
					}	
				}
				if(t!=1)
					printf("YES\n");
			}
		}


	}

	return 0;
}
