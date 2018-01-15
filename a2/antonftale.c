#include<stdio.h>
#include<stdlib.h>
#include <string.h>	
int main()
{
	long long n,k,i=1,x,p=0;
	scanf("%lld%lld",&n,&k);
	x=n;
	while(x>0)
	{	
		x=x+k;
		if(x>n)
		x=n;
		x=x-i;
		i++;
		p++;
	}
	printf("%lld\n",p);
	return 0;
}


