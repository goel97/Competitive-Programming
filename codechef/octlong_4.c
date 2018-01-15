#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100005];
		scanf("%s",s);
		int ka,kb,a=0,b=0,i=0,k=0,aa=0,bb=0,m=0,n=0,m1=0,n1=0;
		int ara[100005],arb[100005];
		scanf("%d%d",&ka,&kb);

		while(i<strlen(s))
		{
			if(s[i]=='a')
			{
				ara[m]=i;
				m++;	
				a++;
			}
			else
			{
				arb[n]=i;
				b++;
				n++;
			}
			i++;
		}
		int l=strlen(s);
		while(k<l)
		{
			if(s[k]=='a')
			{
				if(aa<ka)
				{
					aa++;
					s[k]=0;
					ara[m1]=-1;
					m1++;
					printf("a");
					k++;
				}
				else if(aa>=ka&&b>0)
				{
					printf("ba");
					s[arb[n1]]=0;
					s[k]=0;
					ara[m1]=-1;
					m1++;
					n1++;
					b--;
					aa=1;
					k++;
				}
				else
				{
					printf("*a");
					s[k]=0;
					m1++;
					aa=1;
					k++;
				}
			}
			else if(s[k]=='b')
			{
				if(bb<kb)
				{
					bb++;
					s[k]=0;
					s[arb[n1]]=0;
					arb[n1]=-1;
					n1++;
					printf("b");
					k++;
				}
				else if(bb>=kb&&a>0)
				{
					printf("ab");
					s[ara[m1]]=0;
					m1++;
					n1++;
					s[k]=0;
					a--;
					bb=1;
					k++;
				}
				else
				{
					printf("*b");
					n1++;
					s[k]=0;
					bb=1;
					k++;
				}

			}
			else
			k++;	
		//printf("%d\n",k);
		}

		printf("\n");
	}

	return 0;
}
