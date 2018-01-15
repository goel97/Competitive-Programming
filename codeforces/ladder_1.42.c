#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[18],i;
	scanf("%s",s);

	for(i=0;i<strlen(s);i++)
		if(s[i]>52)
			if(s[i]==57&&i==0)
				s[i]=s[i];
			else
			s[i]=57-s[i]+48;
	printf("%s\n",s);
	
	return 0;
}
