#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
	char s[100];
	scanf("%s",s);
	int n=strlen(s);
	int a[n],j=0,i;
	for(i=0;i<n;i=i+2)
	a[j++]=s[i]-48;
	
	sort(a,a+j);
	for(i=0;i<j;i++)
	{
		if(i<j-1)
		printf("%d+",a[i]);
		else
		printf("%d\n",a[i]);
	}
	
	return 0;
}

