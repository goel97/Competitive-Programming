#include <stdio.h>
#include <stdlib.h>
#include <math.h>p
#include <string.h>	
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,d,i,k=0;
		long long int sum=0;
		scanf("%d%d",&n,&d);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}

		if((sum%n)!=0)
		{
			printf("-1\n");
			break;
		}
		else
		{
			for(i=0;i<n-d;i++)
			if(a[i]<=(sum/n))
			{
				if(a[i+d]-((sum/n)-a[i])>=0)
				{
					a[i]=(sum/n);
					a[i+d]=a[i+d]+a[i]-(sum/n);
					k=k+(sum/n)-a[i];
				}
				else
				{
					printf("-1\n");
					break;
				}	
			}
			else
			{
					a[i]=(sum/n);
					a[i+d]=a[i+d]+a[i]-(sum/n);
					k=k+(sum/n)-a[i];
				}
				else
				{
					printf("-1\n");
					break;
				}	

			}
			
			
	}	
	return 0;
}


