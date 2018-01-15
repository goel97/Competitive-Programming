#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int k,l,m,n,d;
	scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
	int sum=0;
	
		sum=sum+(d/k);
		sum=sum+(d/l);
		sum=sum+(d/m);
		sum=sum+(d/n);
		sum=sum-(d/(k*l));
		sum=sum-(d/(m*l));
		sum=sum-(d/(m*n));
		sum=sum-(d/(k*m));
		sum=sum-(d/(l*n));
		sum=sum-(d/(k*n));
		sum=sum+(d/(k*l*m));
		sum=sum+(d/(k*l*n));
		sum=sum+(d/(k*n*m));	
		sum=sum+(d/(n*l*m));
		sum=sum-(d/(k*l*m*n));	
	
	printf("%d\n",sum);
	return 0;
}
