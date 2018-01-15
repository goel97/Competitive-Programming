#include<stdio.h>
unsigned long long fac(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	unsigned long long fact[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		fact[i]=fac(a[i]);
		printf("%llu\n",fact[i]);
	}

return 0;
}

unsigned long long fac(int m)
{
	if(m==1)
	return 1;
	else 
	return m*fac(m-1);
	
}
