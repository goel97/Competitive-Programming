#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,sum=0,k,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		sum=sum+k;
	}
	int t,c=0,new_sum;

	if(sum%(n+1)==0)
		new_sum=sum/(n+1)-1;
	else
		new_sum=sum/(n+1);
	t=1+(n+1)*(new_sum+1)-sum;
	if(t>5)
		printf("5\n");
	else
	{
		while(t<6)
		{
			c++;
			t=t+(n+1);
		}
		printf("%d\n",5-c);
	}
	
	return 0;
}
