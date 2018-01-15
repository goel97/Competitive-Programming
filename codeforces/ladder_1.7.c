#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[1000];
	scanf("%s",s);
	
	if(s[0]>96)
	s[0] = toupper(s[0]);
	printf("%s\n",s);

	return 0;
}
