#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>	
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,a=0,b=0,i,j;
		scanf("%d%d",&n,&k);
		char s[n][k];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			scanf("%s",s[i]);
		}

		for ( i = 0; i < n; ++i)
		{
			for ( j = 0; j < k; )
			{
				if((i+j)%2==0&&s[i][j]=='R')
					j++;
				else if((i+j)%2==1&&s[i][j]=='G')
					j++;
				else if((i+j)%2==0&&s[i][j]=='G')
				{
					a=a+3;
					j++;
				}
				else if((i+j)%2==1&&s[i][j]=='R')
				{
					a=a+5;
					j++;
				}
			}
		}

		for ( i = 0; i < n; ++i)
		{
			for ( j = 0; j < k; )
			{
				if((i+j)%2==0&&s[i][j]=='G')
					j++;
				else if((i+j)%2==1&&s[i][j]=='R')
					j++;
				else if((i+j)%2==0&&s[i][j]=='R')
				{
					b=b+5;
					j++;
				}
				else if((i+j)%2==1&&s[i][j]=='G')
				{
					b=b+3;
					j++;
				}
			}
		}

		if(a>b)
			printf("%d\n",b);
		else
			printf("%d\n",a);
	}	
	return 0;
}


