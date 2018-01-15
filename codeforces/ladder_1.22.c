#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int i,t=strlen(s),a[26],k=0;
	for(i=0;i<26;i++)
	a[i]=0;
	for(i=0;i<t;i++)
	{
		if(a[s[i]-97]==0)
		a[s[i]-97]=1;
		else
		k++;
	}
	if((t-k)%2!=0)
	printf("IGNORE HIM!\n");
	else
	printf("CHAT WITH HER!\n");
	
	return 0;
}
