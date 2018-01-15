#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int t,k=0,j=0,p=1;
		scanf("%d",&t);
		char s[t];
		scanf("%s",s);
		
		for(j=0;j<t;j++)
		{
			if(s[j]=='H')
			{
				if(k==0)
				k=1;
				else
				{
					printf("Invalid\n");
					p=0;
					break;
				}
			}
			else if(s[j]=='T') 
			{
				if(k!=1)
				{
					printf("Invalid\n");
					p=0;
					break;
				}
				else
				k=0;
			}
			else
			continue;		
		}
		if(k==0&&p!=0)
		printf("Valid\n");
		else if(k!=0&&p!=0)
		printf("Invalid\n");
			
	}
	
	return 0;
}

