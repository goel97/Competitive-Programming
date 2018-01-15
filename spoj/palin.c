#include<stdio.h>
#include<string.h>
int main(){
	unsigned long long int t,n,a,b,i,j,k;
	char s[1000001];
	scanf("%lld",&t);
for(j=0;j<t;j++)
{	scanf("%s",s);
	n=strlen(s);
	
	if(n%2==0)
	{	a=n/2-1;
		b=n/2;
		while(a>=0&&b<n)
			if(s[a]==s[b])
			{
				a--;
				b++;
				k=0;
				continue;
			}
			else if(s[a]>s[b])
			{
				a--;
				b++;
				k=1;
				break;
			}
			else if(s[a]<s[b])
			{	
				a--;
				b++;
				k=-1;
				break;
			}
	printf("%lld \n",k);
		if(k<=0)
		{
			s[(n/2)-1]++;
			for(i=0;i<n/2;i++)
				s[(n/2)+i]=s[(n/2)-i-1];
			printf("%s\n",s);
			
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
		a=(n/2)-1;
		b=(n/2)+1;
		while(a>=0&&b<n)
			if(s[a]==s[b])
			{	
				
				a--;
				b++;
				k=0;
				
				continue;
			}
			else if(s[a]>s[b])
			{	
			
				a--;
				b++;
				k=1;
			
				break;
			}
			else if(s[a]<s[b])
			{	
					
				a--;
				b++;
				k=-1;
				
				
				break;
			}
			
		if(k<=0)
		{	if(s[(n/2)]==57)
			{s[(n/2)]='0';
			s[(n/2)-1]++;}
			else
			s[(n/2)]++;
			for(i=1;i<=n/2;i++)
				s[(n/2)+i]=s[(n/2)-i];
			printf("%s\n",s);
			
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
