#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100002];
		scanf("%s",s);
		int i,c=1,k=1,max1=1,max=1,n=strlen(s);
		for(i=0;i<n;i++)
		{
			if(s[i]=='<')
			{
				c++;
				if(c>max)
				max=c;
				if(k>1)
				k--;
				else
				max1++;
			}
			else if(s[i]=='>')
			{
				if(c>1)
				c--;
				else
				max++;
				k++;
				if(k>max1)
				max1=k;
			}
		}
		if(max>max1)
		printf("%d\n",max);
		else
		printf("%d\n",max1);
	}
	return 0;
}
