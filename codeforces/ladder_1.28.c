#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int t,s=0;
	scanf("%d",&t);
	while(t--)
	{
		int p=0,i,k;
		for(i=0;i<3;i++)
		{
			scanf("%d",&k);
			if(k==1)
				p++;
		}
		if(p>=2)
		s++;	
	}
	printf("%d\n",s);
	
	return 0;
}
