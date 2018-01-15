#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    int t,a0; 
    scanf("%d",&t);
    for( a0 = 0; a0 < t; a0++)
    {
        int p,q,r,j=0,k=0,i; 
        unsigned long long sum=0;
        scanf("%d%d%d",&p,&q,&r);
        int x[p],y[q],z[r];
        for(i=0;i<p;i++)
			scanf("%d",&x[i]);
        for(i=0;i<q;i++)
			scanf("%d",&y[i]);
        for(i=0;i<r;i++)
			scanf("%d",&z[i]);
		sort(x,x+p);
		sort(y,y+q);
		sort(z,z+r);
		
		for(i=0;i<q;i++)
		{
			j=0;
			while(x[j]<=y[i]&&j<p)
			{
				k=0;
				while(z[k]<=y[i]&&k<r)
				{
					sum=(sum+(x[j]+y[i])*(z[k]+y[i]))%1000000007;
					k++;
				}
				j++;
			}
		}
		printf("%llu\n",sum);
    }
    return 0;
}
