
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
		int n,m;
		scanf("%d%d",&n,&m);
		char a[n],b[m],s[n+m],t[n+m];

		scanf("%s%s",a,b);
		int i=0,j=0,k=0,x=1,y=1,f1=0,flag1=0;
		s[k]=a[0];
		f1=1;
		i++;
		while(i<n&&j<m)
		{
			if(s[k]==a[i])
			{
				k++;
				s[k]=a[i];
				i++;
				f1=1;
			}
			else if(s[k]==b[j])
			{
				k++;
				s[k]=b[j];
				j++;
				f1=0;
			}
			else
			{
				if(f1==1)
				{
					k++;
					s[k]=b[j];
					j++;
				}
				else
				{
					k++;
					s[k]=a[i];
					i++;
				}	
			}		
		}
		while(j<m)
		{
			k++;
			s[k]=b[j];
			j++;
		}
		while(i<n)
		{
			k++;
			s[k]=a[i];
			i++;
		}
		//printf("%s\n",s);
		for (int i = 0; i < n+m-1; ++i)
		{
			if(s[i]!=s[i+1])
				x++;
		}
		i=0,j=0,k=0;
		t[k]=b[0];
		flag1=1;
		j++;
		while(i<n&&j<m)
		{
			if(t[k]==a[i])
			{
				k++;
				t[k]=a[i];
				i++;
				flag1=0;
			}
			else if(t[k]==b[j])
			{
				k++;
				t[k]=b[j];
				j++;
				flag1=1;
			}
			else
			{
				if(flag1==1)
				{
					k++;
					t[k]=a[i];
					i++;
				}
				else
				{
					k++;
					t[k]=b[j];
					j++;
				}	
			}	
		}
		while(j<m)
		{
			k++;
			t[k]=b[j];
			j++;
		}
		while(i<n)
		{
			k++;
			t[k]=a[i];
			i++;
		}
		//printf("%s\n",t);
		for (int i = 0; i < n+m-1; ++i)
		{
			if(t[i]!=t[i+1])
				y++;
		}
		printf("%d\n",min(x,y));
	}
	return 0;
}
