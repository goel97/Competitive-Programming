#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		unsigned int n,p,i,j;
		scanf("%d%d",&n,&p);
		
		if(p%2==0&&p>2)
		{
			for(i=0;i<(n/p);i++)
			{
				printf("a");
				for(j=0;j<p-2;j++)
					printf("b");
				printf("a");
			}
			printf("\n");
		}
		else
		{
			if(p==2||p==1)
			{
				printf("impossible\n");
			}	
			else
			{
					for(i=0;i<(n/p);i++)
					{
						printf("a");
						for(j=0;j<p-2;j++)
						{
							if(j%2==0)
								printf("b");
							else
								printf("a");
						}
						printf("a");
					}
					printf("\n");
			}
		}
	}

	return 0;
}
