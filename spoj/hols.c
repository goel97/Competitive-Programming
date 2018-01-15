#include<stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
   for(i=0;i<t;i++)
    {	unsigned long long n;
		scanf("%lld",&n);
		
		printf("%lld\n",(n*(n+2)*(2*n+1))/8 );
		
	}
	return 0;
}

