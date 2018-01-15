#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	long long int n,k;
	scanf("%lld%lld",&n,&k);
	if(k>((n+1)/2))
		printf("%lld\n",(k-((n+1)/2))*2);
	else
		printf("%lld\n", 2*k-1);
	return 0;
}
