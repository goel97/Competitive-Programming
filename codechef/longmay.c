#include<stdio.h>
#include<string.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{	
		unsigned long long n=0,c=0,e=0,s=0,j,k=0;
		char str[1000001];
		scanf("%s",str);
		n=strlen(str);
		for(j=0;j<n;j++)
		{	
			if(str[j]=='C')
			c++;
			else if(str[j]=='E')
			{
				if(j==0)
				{
					printf("no\n");
					k=1;
					break;
				}else
				e++;
			}
			else if(str[j]=='S')
			{
				if(j==0)
				{
					printf("no\n");
					k=1;
					break;
				}else
				s++;
			}
			if(c>=s&&c>=e)
			continue;
			else if(e>0&&e<s)
			{
				printf("no\n");
				k=1;
				break;
			}
		}
		if(k!=1)
		printf("yes\n");
	}
			
	return 1;
}
		
