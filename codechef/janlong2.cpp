
#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>

using namespace std;

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n][n],k=0,i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
			sort(a[i],a[i]+n);
		}
		long long sum=0,p;
		p=a[n-1][n-1];
		sum=sum+a[n-1][n-1];
		for(i=n-2;i>-1;i--)
		{
			j=n-1;
			while(a[i][j]>=p&&j>=0)
			j--;
			if(j==-1)
			{
				printf("-1\n");
				k=1;
				break;
			}
			else
			{
				p=a[i][j];
				sum=sum+p;
			}
		}
		if(k!=1)
			printf("%lld\n", sum);
	}
	return 0;
}
