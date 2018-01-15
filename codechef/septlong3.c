#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100005];
		int a[4],b[10],x,j,i;
		for(i=0;i<4;i++)
			a[i]=0;
		for(i=0;i<10;i++)
			b[i]=0;
		scanf("%s",s);
		int n=strlen(s);
		for(i=0;i<n;i++)
		{
			if(s[i]=='6')
			{
				a[0]=6;
				b[6]++;
			}
			else if(s[i]=='7')
			{
				a[1]=7;
				b[7]++;
			}
			else if(s[i]=='8')
			{
				a[2]=8;
				b[8]++;
			}
			else if(s[i]=='9')
			{
				a[3]=9;
				b[9]++;
			}
			else
				b[s[i]-48]++;
		}
		for(i=5;i<10;i++)
			if((b[i]!=0)&&(a[0]!=0))
			{
				x=(a[0]*10)+(1*i);
				if(x==66)
				{
					if(b[6]>1)
						printf("%c",x);
				}
				else
					printf("%c",x);
			}
		for(j=1;j<3;j++)
		for(i=0;i<10;i++)
			if(b[i]!=0&&(a[j]!=0))
			{
				x=(a[j]*10)+(1*i);
				if(x==77)
				{
					if(b[7]>1)
						printf("%c",x);
				}
				else if(x==88)
				{
					if(b[8]>1)
						printf("%c",x);
				}
				else
					printf("%c",x);
			}
		if((b[9]!=0)&&(b[0]!=0))
			printf("Z");
		printf("\n");
	}

	return 0;
}