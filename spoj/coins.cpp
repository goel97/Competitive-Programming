
#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>

using namespace std;

map<long long, long long> dp;

long long sum(long long n)
{
	if(n==0)
		return 0;
	if(dp[n]!=0)
		return dp[n];
	else
	{
		long long t =(sum(n/2)+sum(n/3)+sum(n/4));
		if(t>n)
			dp[n]=t;
		else
			dp[n]=n;
		return max (t,n);
	} 
}

int main() 
{
	long long n;

	while(scanf("%lld",&n)!=EOF)
		printf("%lld\n",sum(n));
	return 0;
}
