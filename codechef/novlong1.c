#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a=0,b=0,i,sa=0,sb=0;
		char s[100000];
		scanf("%s",s);
		
		int n=strlen(s);
		for(i=0;i<n;i++)
		{
			if(s[i]=='A')
			{
				a=1;
				sa++;
				i++;
				a=0;
				while((s[i]=='A'||s[i]=='.')&&i<n)
				{
					a++;
					if(s[i]=='A')
					{
						sa=sa+a;
						i--;
						sa--;
						break;
					}
					i++;		
				}
				if(s[i]=='B')
					i--;
			}
			else if(s[i]=='B')
			{
				b=1;
				sb++;
				i++;
				b=0;
				while((s[i]=='B'||s[i]=='.')&&i<n)
				{
					b++;
					if(s[i]=='B')
					{
						sb=sb+b;
						i--;
						sb--;
						break;
					}
					i++;		
				}
				if(s[i]=='A')
					i--;
			}
		}
		printf("%d %d\n",sa,sb);
		
	}
	return 0;
}
