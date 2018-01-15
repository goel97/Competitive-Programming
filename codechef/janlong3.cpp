
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
		int n,k;
		scanf("%d%d",&n,&k);
		int a[n];
		long long dp[n];
		long long t=0;
		for (int i = 0; i < (n); ++i)
		{
			scanf("%d",&a[i]);
			t=t+a[i];
			dp[i]=a[i];
		}
		long long maxi=-1e16,may=-1e16,p=0,q=0;
		for(int i=0;i<n;i++)
		{
			p=p+a[i];
			if(maxi<p)
			{
				maxi=p;
			}
		}
		for(int i=n-1;i>-1;i--)
		{
			q=q+a[i];
			if(may<q)
			{
				may=q;
			}
		}
		for (int i = 1; i < n; ++i)
		{
			if(dp[i-1]+a[i]>dp[i])
				dp[i]=dp[i-1]+a[i];
		}
		long long maxx=-1e16;
		for (int i = 0; i < n; ++i)
		{
			if(dp[i]>maxx)
				maxx=dp[i];
		}
		if(t>=0)
		{
			if(k==1)
				printf("%lld\n", maxx);
			else
				printf("%lld\n",max(maxx,may+(t*(k-2))+maxi));
		}
		else
		{
			if(k==1)
				printf("%lld\n", maxx);
			else
				printf("%lld\n",max(maxx,maxi+may));
		}	
		
	}
	return 0;
}
