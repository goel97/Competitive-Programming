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
		string s;
		cin>>s;
		int n=0,j,f,e,h,c;
		int y=s.length();

		for (int i = 0; i < y-3; ++i)
		{
			int f=0,e=0,h=0,c=0;
			for(j=i;j<i+4;j++)
			{
				if(s[j]=='f')
					f=1;
				else if(s[j]=='e')
					e=1;
				else if(s[j]=='h')
					h=1;
				else if(s[j]=='c')
					c=1;
			}
			if(f+e+h+c==4)
				n++;		
		}
		if(n>0)
			printf("lovely %d\n", n);
		else
			printf("normal\n");
	}
	
	return 0;
}

