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
		int n,m,x,k;

		scanf("%d%d%d%d",&n,&m,&x,&k);
		char s[k];
		scanf("%s",s);
		int e=0,o=0;
		for (int i = 0; i < k; ++i)
		{
			if(s[i]=='E')
				e++;
			else
				o++;
		}
		int m1=1;
		while(n>0&&m1<=m)
		{
			if(m1%2==0)
			{
				if(e>x)
				{
					n=n-x;
					e=e-x;
				}
				else
				{
					n=n-e;
					e=0;
				}
			}
			else
			{
				if(o>x)
				{
					n=n-x;
					o=o-x;
				}
				else
				{
					n=n-o;
					o=0;
				}
			}
			m1++;	
		}
		if(n>0)
			printf("no\n");
		else
			printf("yes\n");	
	}
	
	return 0;
}

