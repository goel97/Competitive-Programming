#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,k=0,j,n;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	for(i=0,j=i+1;i<n&&j<n;j++)
	if(s[i]==s[j])
	{
		i++;
		k++;
	}
	else
		i++;
	printf("%d\n",k);
	return 0;
}
