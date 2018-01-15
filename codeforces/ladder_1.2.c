#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			scanf("%d",&k[i][j]);
			if(k[i][j])
			{
				printf("%d\n",abs(2-i)+abs(2-j));
				return 0;
			}
		}
	return 0;
}
