
#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>

using namespace std;

int cake(int mid,int a,int b,int n)
{
	if((a/mid)+(b/mid)>=n)
		return 1;
	else 
		return 0;
}

int main() 
{
	int n,a,b,x;

	scanf("%d%d%d",&n,&a,&b);
	int lo=1, hi=min(a,b)+1,mid;
	while(lo+1<hi)
	{
		mid= (lo+hi)/2;
		if(cake(mid,a,b,n)==1)
		{
			lo=mid;
		}
		else
		hi=mid;
	}	
	printf("%d\n",lo);
	return 0;
}
