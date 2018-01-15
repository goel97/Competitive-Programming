#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int a[4],i,k=0;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	
	if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3])
	k++;
	if(a[1]!=a[2]&&a[1]!=a[3])
	k++;
	if(a[2]!=a[3])
	k++;
	
	if(k==4)
	printf("0\n");
	else
	printf("%d\n",4-k-1);
	return 0;
}
