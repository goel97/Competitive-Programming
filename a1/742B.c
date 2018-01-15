#include<stdio.h>
#include<stdlib.h>
#include <string.h>	
int main()
{
	int n,k,i,j,p=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if((((~a[i])&a[j])|((~a[j])&a[i]))==k)
				p++;
	printf("%d\n",p);
	return 0;
}


