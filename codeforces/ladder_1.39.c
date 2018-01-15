#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	int k=0,p=0,k1=1,temp1=0;
	while(k<n)
	{
		k=p+k1;
		temp1=p;
		p=k1;
		k1=k;
	}
	int a=0,b=0,c=1,temp=0;

	while(a<temp1)
	{
		a=b+c;
		temp=b;
		b=c;
		c=a;
	}	

	printf("%d %d %d\n",temp,b,p);

	return 0;
}
