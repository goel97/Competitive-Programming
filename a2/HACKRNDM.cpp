#include <math.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int bs(int,int,int [],int);

int main()
{
        int n,c,i,k=0;  
        scanf("%d %d",&n,&c);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        
        for(i=0;i<n;i++)
        k=k+bs(i,c,a,n);
        
		printf("%d\n",k);
    
    return 0;
}
int bs(int i,int c,int a[],int n)
{
	int p;
	p=a[i]+c;
	int lo=i,hi=n;
	while(lo<=hi)
	{
		int mid=(lo+hi)/2;
		if(a[mid]==p)
		return 1;
		else if(a[mid]<p)
		lo=mid+1;
		else
		hi=mid-1;
	}
	return 0;
}
		

	
	
	

