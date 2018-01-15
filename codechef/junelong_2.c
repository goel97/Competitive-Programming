#include <stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	
	for( i=0;i<t;i++)
	{
		unsigned long long int u,v;
		scanf("%llu%llu",&u,&v);
		unsigned long long int n=u+v+1;
		printf("%llu\n", (((n*n)-n)/2)+1+u);
	}
	return 0;
}
