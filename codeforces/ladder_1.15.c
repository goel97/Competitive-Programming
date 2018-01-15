#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,m,i,j,k,key;
	long long sum1=0,sum2=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(i=0;i<m;i++)
	{
		key=b[i];
		for(j=0;j<n;j++)
		if(a[j]==key)
		{
			sum1=sum1+j+1;
			break;
		}
		for(k=n-1;k>-1;k--)
		if(a[k]==key)
		{
			sum2=sum2+(n-1-k)+1;
			break;
		}
	}
	printf("%lld %lld\n",sum1,sum2);
	
	return 0;
}
