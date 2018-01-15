#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int t,s=0;
	scanf("%d",&t);
	while(t--)
	{
		char p[4];
		scanf("%s",p);
		if(p[1]=='+')
			s++;
		else if(p[1]=='-')
			s--;
	}
	printf("%d\n",s);
	
	return 0;
}
