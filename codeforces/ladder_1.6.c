#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[100];
	int i,l=0,u=0;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	if(s[i]<91)
	u++;
	else
	l++;
	
	if(l>=u)
	for(i=0;i<strlen(s);i++)
	{
		s[i] = tolower(s[i]);
	}
	else
	for(i=0;i<strlen(s);i++)
	{
		s[i] = toupper(s[i]);
	}
	printf("%s\n",s);
	return 0;
}
