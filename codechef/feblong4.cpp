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
		int n,c,d,s;
		scanf("%d",&n);
		int a[n],max=-1;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
			if(a[i]>max)
				max=a[i];
		}
		scanf("%d%d%d",&c,&d,&s);

		printf("%lld\n",(long long int)max*(c-1));

	}
	
	return 0;
}