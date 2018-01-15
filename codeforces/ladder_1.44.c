#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100];
	int a[4],i;
	scanf("%s",s);

	for (int i = 0; i < 4; ++i)
	{
		/* code */
		a[i]=0;
	}
	for (i = 0; i < strlen(s); ++i)
	{
		/* code */
		if(s[i]=='h')
			a[0]=a[0]+1;
		else if(s[i]=='e'&&a[0]>0)
			a[1]=a[1]+1;
		else if(s[i]=='l'&&a[0]>0&&a[1]>0)
			a[2]=a[2]+1;
		else if(s[i]=='o'&&a[0]>0&&a[1]>0&&a[2]>1)
			a[3]=a[3]+1;
		if(a[0]>=1&&a[1]>=1&&a[2]>=2&&a[3]>=1)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");

	return 0;
}
