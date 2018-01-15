#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,b;
		scanf("%d%d",&n,&b);
		long long int p=n/2;
		double k=(double)p*(n-p)/b;
		printf("%lld\n",(long long int)k);
	}
	return 0;
}
