#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[7];
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	while(n>0)
	{
		n=n-a[i];
		j=i;
		i=(i+1)%7;
	}
	printf("%d\n",j+1);

	return 0;
}
