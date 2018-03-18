#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>

using namespace std;


int main() 
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		char s[100000];
		scanf("%s",s);
		int n=strlen(s);
		int a[26][n];
		int b[26],t[n],m[n];
		for (int i = 0; i < 26; ++i)
		{
			b[i]=0;
		}

		for (int i = 0; i < n; ++i)
		{
			a[s[i]-97][b[s[i]-97]]=i;
			b[s[i]-97]++;
		}
		int p=0;
		int j=0,c=0,flag=0,flag1=0,l=0;
		if(n%2==0)
		{
			for (int i = 0; i < 26; ++i)
			{
				if(b[i]%2!=0)
				{	
					printf("-1");
					flag=1;
					break;
				}
				else
					for (int k= 0; k <b[i] ; k++)
					{
						t[j]=a[i][k];
						k++;
						t[n-1-j]=a[i][k];
						j++;
					}
			}
			if(flag==0)
				for (int i = 0; i < n; ++i)
				{
					printf("%d ",t[i]+1);
				}
		}
		else
		{
			if(n==1)
				printf("1");
			else
				for (int i = 0; i < 26; ++i)
				{
					if(b[i]%2!=0)
					{
						if(p==0)	
						{
							p=1;
							m[n/2]=a[i][0];
							for (int k= 1,l=0; k <b[i] ; k++)
							{
								m[(n/2)-1-l]=a[i][k];
								k++;
								m[(n/2)+1+l]=a[i][k];
								l++;
							}
						}
						else
						{	
							printf("-1");
							flag1=1;
							break;
						}	
					}
					else
						for (int k= 0; k <b[i] ; k++)
						{
							m[c]=a[i][k];
							k++;
							m[n-1-c]=a[i][k];
							c++;
						}
				}
				if(flag1==0)
				for (int i = 0; i < n; ++i)
				{
					printf("%d ",m[i]+1);
				}
		}
		printf("\n");

	}
	
	return 0;
}