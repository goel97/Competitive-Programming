#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n,i,j,min;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int x=0,y=n-1;
	min=abs(a[0]-a[n-1]);
	for(i=0;i<n-1;i++)
		if((abs(a[i]-a[i+1]))<min)
		{
			min=abs(a[i]-a[i+1]);
			x=i;
			y=i+1;
		}	


	printf("%d %d\n",x+1,y+1);
	return 0;
}
