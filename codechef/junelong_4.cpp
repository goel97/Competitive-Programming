#include <math.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
        int n,i,c=0;
        long long k=0,p=0,cal=0,max=0,sum=0;  
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n;i++)
		if(a[i]<0)
			k=k+a[i];
		else
		{
			p=p+a[i];
			c++;
		}
		if(a[n-1]<=0)
		printf("%lld\n",c*p+k);  
		else if (c<n)
		{
			max=c*p+k;
			p=p+a[n-1-c];
			k=k-a[n-1-c];
			c++;
			cal=(c)*(p)+(k);
			if(max>cal)
			{
				printf("%lld\n",max);
				break;
			}
			while(cal>max&&(n-c-1)>=0)
			{
				p=p+a[n-1-c];
				k=k-a[n-1-c];
				c++;
				sum=(c)*(p)+(k);
				if(sum>cal)
				cal=sum;
				else 
				break;
			}
			printf("%lld\n",cal);
		}
		else
		printf("%lld\n",c*p+k);  
			
	}
    return 0;
}


	
	
	

