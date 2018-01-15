#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[18];
	int i,u=0;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	if(s[i]==52||s[i]==55)
	u++;
	if(u==4||u==7)
	printf("YES\n");
	else 
	printf("NO\n");
	return 0;
}
