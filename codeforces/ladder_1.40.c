#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,i,k=0,c=0,p;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		if(p==5)
			k++;
		else
			c++;
	}

	
	if(c==0)
		printf("-1\n");
	else if(k>8)
	{
		for(i=0;i<((k/9)*9);i++)
			printf("5");
		for(i=0;i<c;i++)
			printf("0");
		printf("\n");
	}
	else
		printf("0\n");

	return 0;
}
