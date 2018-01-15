#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char p[102];
	scanf("%s",p);
	int k=0;
	for(int i=0;i<strlen(p);i++)
	{
		if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
		{
			printf("YES\n");
			k=1;
			break;
		}	
	}
	if(k!=1)
		printf("NO\n");
	
	return 0;
}
