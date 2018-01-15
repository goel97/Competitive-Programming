#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned long long n;
	int a;
	scanf("%lld",&n);
	if(n%10==0)
	printf("2\n");
	else
	{
		a=n%10;
		printf("1\n%d\n",a);
	}
	return 0;
}



