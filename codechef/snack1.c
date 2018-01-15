#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,i; 
    scanf("%d",&t);
    for(i = 0; i< t; i++)
    {
        int n,j,c,s;  
        unsigned long int p=0,max=-1;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
			scanf("%d",&a[j]);
			if(max<a[j])
			{max=a[j];
			s=j;}
		}
		int l=s;
		while((max-a[l])>=(s-l)&&l>=0)
			l--;
		int	r=s;
		while((max-a[r])>=(s-r)&&r<=n-1)
			r++;
		for(c=l;c<s+1;c++)
		p=p+(a[c]-(c-l+1));
		for(c=0;c<l;c++)
		p=p+a[c];
		
		for(c=r;c>s;c--)
		p=p+(a[c]-(r-c+1));
		for(c=n-1;c>r;c--)
		p=p+a[c];
		
		printf("%lu\n",p);		
	}	
    return 0;
}
