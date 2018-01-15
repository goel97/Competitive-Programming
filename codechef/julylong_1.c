#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		char name[100],str[4][15];
		gets(name);
		printf("%s\n",name);
		int n=strlen(name),i,c=0,k=0;
		for(i=0;i<=n;i++)
		{
			if(name[i]==' '||name[i]=='\0')
			{
				strncpy(str[c],name+k,(i-k));
				k=i+1;
				c++;
			}
		}
		printf("%d\n",c);
		for(i=0;i<c;i++)
		printf("%s\n",str[i]);
	}
	return 0;
}
