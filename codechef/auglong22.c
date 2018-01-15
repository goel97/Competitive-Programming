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
		int n,d,i,k=0,j=0;
		long long int sum=0;
		scanf("%d%d",&n,&d);
		int a[n];
		long long int sum[n-d];
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
			for(j=0;j<n-d,j++)
			{
				for(i=0;i<n-d;i=i+d)
					sum[j]=sum[j]+a[i];
				if(sum)
			
			
	}	
	return 0;
}


