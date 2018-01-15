#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	7
	int min=a[n-1];
	int max=a[0],s=0,t=n-1;
	for(i=1;i<n;i++)
	if(a[i]>max)
	{
		s=i;
		max=a[i];
	}
	for(i=n-1;i>-1;i--)
	if(a[i]<min)
	{
		t=i;
		min=a[i];
	}
	
	if(s<t)
	printf("%d\n",s+(n-1-t));
	else
	printf("%d\n",s+(n-1-t));
	
	
	
	return 0;
}
