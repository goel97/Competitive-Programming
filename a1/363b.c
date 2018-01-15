#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,k,i,j,min,p=1;
	scanf("%d%d",&n,&k);
	int sum[n-k+1],a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n-k+1;j++)
		sum[j]=0;
	
	for(i=0;i<k;i++)
		sum[0]=sum[0]+a[i];
	
	min=sum[0];
	
	for(j=1;j<n-k+1;j++)
	{
		sum[j]=sum[j-1]+a[j+k-1]-a[j-1];
		if(sum[j]<min)
		{
			min=sum[j];
			p=j+1;
		}
	}
	printf("%d\n",p);
	return 0;
}
