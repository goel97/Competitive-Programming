
#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>

using namespace std;

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,x,i;
		scanf("%d%d",&x,&n);
		char s[n+1];
		for(i=0;i<n;i++)
		{
			if(i==(x-1))
				s[i]='2';
			else
				s[i]='0';
		}	
		long long p = (((n*(n+1))/2)-x)/2,sum=0;
		if((((n*(n+1))/2)-x)%2!=0)
			printf("impossible\n");	
		else if(x!=n&&(((n*(n+1))/2)-x)/2<n)
			printf("impossible\n");
		else if(x==n&&(((n*(n+1))/2)-x)/2<(n-1))
			printf("impossible\n");
		else
		{
			i=n;
			//printf("%lld\n",p);
			while(sum<p&&i>0)
			{
				if(sum+i<=p&&i!=x)
				{
					sum=sum+i;
					s[i-1]='1';
				}	
				i--;
			}
			s[n]='\0';
			printf("%s\n",s);
		}

		
	}
	return 0;
}
