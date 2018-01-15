#include<stdio.h>
#include<string.h>
int main(){
	unsigned long long int t;
	int k;
	char s[1000001],s1[500001];
	scanf("%lld",&t);
for(j=0;j<t;j++)
{	scanf("%s",&s);
	n=strlen(s);
	if(n%2==0)
	{	
		strncopy(s1,s+(n/2),n/2);
		k=strncmp(s,s1,n/2); //ERROR!!! in 2343 have to compare 2-3 & 3-4 not 2-4 & 3-3
		if(k<=0)
		{
			s[(n/2)-1]++;
			for(i=0;i<n/2;i++)
			{
				s[(n/2)+i]=s[(n/2)-i-1];
				printf("%s\n",s);
			}
		}
		else if(k>0)
		{
			for(i=0;i<n/2;i++)
				s[(n/2)+i]=s[(n/2)-i-1];
			printf("%s\n",s);
		}
	}
	else
	{	
		strncopy(s1,s+(n/2)+1,n/2);
		k=strncmp(s,s1,(n/2)-1);
		if(k<=0)
		{
			s[(n/2)]++;
			for(i=1;i<=n/2;i++)
			{
				s[(n/2)+i]=s[(n/2)-i];
				printf("%s\n",s);
			}
		}
		else if(k>0)
		{
			for(i=1;i<=n/2;i++)
				s[(n/2)+i]=s[(n/2)-i];
			printf("%s\n",s);
		}
	}
		
		
}
return 0;
}
