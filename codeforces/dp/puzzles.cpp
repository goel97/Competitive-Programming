
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main() 
{
	int n,m,min=9999,p,i;
	scanf("%d%d",&n,&m);
	int a[m];

	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	
	sort(a,a+m);
	if(n==m)
		printf("%d\n",a[m-1]-a[0]);
	else
	{
		for(i=0;i<m-n+1;i++)
		{
			p=a[i+n-1]-a[i];

			if(p<min)
				min=p;
		}
		printf("%d\n",min);
	}
	return 0;
}
