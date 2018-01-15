#include <math.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int cow(int,int,int [],int);

int main()
{
    int t,a0; 
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++)
    {
        int n,c,i;  
        scanf("%d %d",&n,&c);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        
        int lo=0,hi=a[n-1]-a[0]+1,mid;
        while(lo+1<hi)
        {
			mid= (lo+hi)/2;
			if(cow(mid,c,a,n)==1)
			{
				lo=mid;
			}
			else
			hi=mid;
		}
		printf("%d\n",lo);
    }
    return 0;
}
int cow(int mid,int c,int a[],int n)
{
	int cows=1,pos=a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]-pos>=mid)
        {
            pos=a[i];
            cows++;
            if (cows==c)
                return 1;
        }
    }
	return 0;
}
	
	
	

