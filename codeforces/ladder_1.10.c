#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for(i=n+1;i<=m;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(j==i&&i==m)
		{
			printf("YES\n");
			return 0;
		}
		else if (j==i&&i!=m)
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
