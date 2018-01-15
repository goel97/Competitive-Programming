#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,j;
	char s[200];
	scanf("%s",s);
	n=strlen(s);
	while(j<n)
	if(s[j]=='-')
	{
		if(s[j+1]=='.')
		printf("1");
		else
		printf("2");
		j=j+2;
	}
	else 
	{
		printf("0");
		j++;
	}
	printf("\n");
	
	
	
	return 0;
}
