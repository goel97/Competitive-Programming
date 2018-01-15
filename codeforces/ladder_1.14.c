#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	double a[n],sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
		sum=sum+a[i];
	}
	printf("%lf\n",(double)(sum/n));	
	
	return 0;
}
