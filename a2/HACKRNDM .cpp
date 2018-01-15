#include <stdio.h>
#include <algorithm>

using namespace std;
int main()
{
	int n,k,i,p=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	sort(a,a+n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	for(i=1;i<n;i++)
	if((a[i]-a[i-1])==k)
	p++;
	printf("%d\n",p);
	return 0;
}


