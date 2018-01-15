#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std
int main()
{
	int n,k,t,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		a[k]=i+1;
	}
	int m;
	long long sum1=0,sum2=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&t);
		sum1=sum1+a[t];
		sum2=sum2+n+1-a[t];
	}

	cout<<sum1<<" "<<sum2<<endl;

	return 0;
}