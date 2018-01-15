#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char s[100];
		scanf("%s",s);
		int t=strlen(s);
		if(t<11)
		printf("%s\n",s);
		else
		printf("%c%d%c\n",s[0],t-2,s[t-1]);
	}	
	return 0;
}
