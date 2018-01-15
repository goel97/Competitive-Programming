#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
	int n,b[100],i;

	scanf("%d",&n);
	int a[n];
	for(i=0;i<100;i++)
		b[i]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]=i+1;
	}
	sort(a,a+n);

	for(i=0;i<(n/2);i++)
	printf("%d %d\n",b[a[i]],b[a[n-1-i]]);	
			return 0;
}
