# include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>

using namespace std;
int main() 
{
	int n,i,max=0,p;
	scanf("%d",&n);
	int a[n],dp[n];
	memset(dp,0,n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
		if(i==0)
			dp[i]=1;
		else if(a[i-1]<=a[i])
			dp[i]=dp[i-1]+1;
		else
			dp[i]=1;
	}	
	
	for(i=0;i<n;i++)
	{
		p=dp[i];
		if(p>max)
			max=p;
	}	
	printf("%d\n",max);
	return 0;
}
