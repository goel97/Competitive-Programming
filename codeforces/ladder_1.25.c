#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char p[102],q[102];
	scanf("%s%s",p,q);
	int k=0;
	for(int i=0;i<strlen(p);i++)
	{
		if(p[i]>96)
			p[i]=p[i]-32;
		if(q[i]>96)
			q[i]=q[i]-32;
	}
	for(int i=0;i<strlen(p);i++)
	{
		if(p[i]<q[i])
		{
			printf("-1\n");
			k=1;
			break;
		}
		else if(p[i]>q[i])
		{
			printf("1\n");
			k=1;
			break;
		}	
	}
	if(k!=1)
		printf("0\n");
	
	return 0;
}
