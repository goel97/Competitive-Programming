#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
	int n,k,l,c,d,p,nl,np;
	scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
	int t=min((k*l)/nl,c*d);
	int q=min(t,p/np);
	printf("%d\n",q/n);	
	return 0;
}
