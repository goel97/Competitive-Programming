#include<stdio.h>
#include<stdlib.h>
#include <string.h>	
#include <algorithm.h>

int main()
{
	int n,k,i,p=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	sort(a,a+n);
	
	for(i=1;i<n;i++)
	if((a[i]-a[i-1])==k)
	p++;
	printf("%d",p);
	return 0;
}


