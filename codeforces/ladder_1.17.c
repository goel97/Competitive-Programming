#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[2][n],i,c[4];
	for(i=0;i<n;i++)
	scanf("%d%d",&a[0][i],&a[1][i]);
	
	for(i=0;i<4;i++)
	c[i]=0;
	for(i=0;i<n;i++)
	{
		if(a[0][i]==0)
		c[0]++;
		if(a[1][i]==1)
		c[0]++;
		if(a[0][i]==1)
		c[1]++;
		if(a[1][i]==0)
		c[1]++;
		if(a[0][i]==1)
		c[2]++;
		if(a[1][i]==1)
		c[2]++;
		if(a[0][i]==0)
		c[3]++;
		if(a[1][i]==0)
		c[3]++;
		
	}
	int min=c[0];
	for(i=1;i<4;i++)
	if(c[i]<min)
	min=c[i];
	printf("%d\n",min);
	return 0;
}
