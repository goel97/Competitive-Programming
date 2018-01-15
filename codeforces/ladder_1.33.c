#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,i,p[4],k=0,j;
	scanf("%d",&n);
	int a[n][2];
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
	
	for(i=0;i<n;i++)
	{
		p[0]=0,p[1]=0,p[2]=0,p[3]=0;
		for(j=0;j<n;j++)
		{
			if(a[i][0]==a[j][0]&&a[i][1]<a[j][1])
			{
				p[0]++;
				if(p[0]>0&&p[1]>0&&p[2]>0&&p[3]>0)
				{
					k++;
					break;
				}
			}
			else if(a[i][0]==a[j][0]&&a[i][1]>a[j][1])
			{
				p[1]++;
				if(p[0]>0&&p[1]>0&&p[2]>0&&p[3]>0)
				{
					k++;
					break;
				}
			}
			else if(a[i][0]>a[j][0]&&a[i][1]==a[j][1])
			{
				p[2]++;
				if(p[0]>0&&p[1]>0&&p[2]>0&&p[3]>0)
				{
					k++;
					break;
				}
			}
			else if(a[i][0]<a[j][0]&&a[i][1]==a[j][1])
			{
				p[3]++;
				if(p[0]>0&&p[1]>0&&p[2]>0&&p[3]>0)
				{
					k++;
					break;
				}
			}
		}
	}
	printf("%d\n",k);

	return 0;
}
