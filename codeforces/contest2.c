#include<stdio.h>
#include<stdlib.h>
#include <string.h>	
int main()
{
	int n,k,a[100000],i,j;
	
	double t;
	scanf("%d%d",&n,&k);
	unsigned long long s=0,sum[n-k+1];
	memset(sum,0,n-k+1);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n-k+1;j++)
	sum[j]=0;
	
	for(i=0;i<k;i++)
	sum[0]=sum[0]+a[i];
	for(j=1;j<n-k+1;j++)
	sum[j]=sum[j-1]-a[j-1]+a[j+k-1];
	for(j=0;j<n-k+1;j++)
	s=s+sum[j];
	t=(double)s/(n-k+1);
	printf("%lf\n",t);
	return 0;
}

