#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<algorithm>
use namespace std;	
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,m,k,j,p=1;
		scanf("%d%d",&n,&m);
		int a[n][m];
		for(j=0;j<n;j++)
		for(k=0;k<m;k++)
		scanf("%d",&a[j][k]);
		for(j=0;j<n;j++)
		for(k=0;k<m;k++)
		b[j][k]=0;
		
		while(p==1)
		{
			for(j=0;j<n;j++)
			for(k=0;k<m;k++)
			max(a[i][j],a[i+1][j],a[i][j+1],a[i+1][j+1])
			for(j=0;j<n;j++)
			for(k=0;k<m;k++)
			b[j][k]=0;
		
	return 0;
}


