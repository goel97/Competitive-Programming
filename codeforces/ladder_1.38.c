#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,i,flag=0,k=0,min;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
		if(a[i]<min)
		{
			min=a[i];
			k=i;
			flag=0;
		}
		else if(a[i]==min)
			flag=1;
	if(flag==0)
		printf("%d\n",k+1);
	else
		printf("Still Rozdil\n");
	return 0;
}
