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
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&b[i]);
		}

		int p=0,q=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]>b[i])
			{
				p=1;
				break;
			}

		}

		for (int i = n-1; i > -1; i--)
		{
			if(a[(n-1)-i]>b[i])
			{
				q=1;
				break;
			}
		}

		if(p==0&&q==0)
			printf("both\n");
		else if(p==0&&q==1)
			printf("front\n");
		else if(p==1&&q==0)
			printf("back\n");
		else
			printf("none\n");

	}
	
	return 0;
}

