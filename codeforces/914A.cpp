#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main() 
{
	int n,i,root;
	scanf("%d",&n);
	int a[n],ans=-10000000;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d",&a[i]);
		if(a[i]>=0)
		{
			root=round(sqrt(a[i]));
			if(root*root!=a[i]&&a[i]>ans)
				ans=a[i];
		}
		else
			if(a[i]>ans)
				ans=a[i];
	}
	printf("%d\n",ans);
	return 0;
}

