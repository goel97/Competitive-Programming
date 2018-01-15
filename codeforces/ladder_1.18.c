#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,i,min,max,k=0;
	scanf("%d",&a);
	min=a;
	max=a;
	for(i=1;i<n;i++)
	{
		scanf("%d",&b);
		if(b>max)
		{
			max=b;
			k++;
		}
		if(b<min)
		{
			min=b;
			k++;
		}
	}
	
	printf("%d\n",k);
	return 0;
}
