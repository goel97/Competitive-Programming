#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[105],b[105];
	scanf("%s%s",a,b);
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[i])
		printf("0");
		else
		printf("1");
	}
	printf("\n");	
	return 0;
}
