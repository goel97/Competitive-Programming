
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main() 
{
	int n,a,b,c,maxxx=0,maxx=0,t,r,s,tp=0,sp=0,rp=0,i,j,k;
	scanf("%d%d%d%d",&n,&a,&b,&c);
	for(i=0;i<n+1;i++)
		for (j = 0	; j < n+1; ++j)
		{
			t=n-(b*i)-(c*j);
			if(t%a==0&&t>0)
			{	
				k=t/a;
				tp=i+j+k;
				maxx=max(tp,maxx);
				//printf("%d %d %d %d\n",i,j,k,tp);
			}

			s=n-(a*i)-(b*j);
			if(s%c==0&&s>0)
			{	
				k=s/c;
				sp=i+j+k;
				maxx=max(sp,maxx);
				//printf("%d %d %d %d\n",i,j,k,sp);
			}

			r=n-(c*i)-(a*j);
			if(r%b==0&&r>0)
			{	
				k=r/b;
				rp=i+j+k;
				maxx=max(rp,maxx);
				//printf("%d %d %d %d\n",i,j,k,rp);
			}
			maxxx=max(maxx,maxxx);

		}
	printf("%d\n",maxxx);
	return 0;
}
