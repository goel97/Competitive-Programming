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
		double p,q,d,ans=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%lf%lf%lf",&p,&q,&d);
			ans=ans+q*(p-((p+(p*(d/100)))-((p+(p*(d/100)))*(d/100))));
		}

		printf("%lf\n",ans);
		
	}
	
	return 0;
}

