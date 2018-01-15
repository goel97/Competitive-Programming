#include<stdio.h>
void mergesort(int *a,int lo,int hi);
void merge(int *a,int lo, int mid, int hi);
int main()
{ 
	int t,n,i,j;
	int m[1001],w[1001];
	unsigned long long int sum;
	scanf("%d",&t);
		for(j=0;j<t;j++)
		{
			scanf("%d",&n);
		
			for(i=0;i<n;i++)
				scanf("%d",&m[i]);
			for(i=0;i<n;i++)
				scanf("%d",&w[i]);
			mergesort(m,0,n-1);
			mergesort(w,0,n-1);
			sum=0;
			for(i=0;i<n;i++)
				sum=sum+m[i]*w[i];
			printf("%lld\n",sum);
		}			
		

return 0;
}
void mergesort(int *a,int lo,int hi){
     int mid;
    if(lo<hi){
        mid=(lo+hi)/2;
        mergesort(a,lo,mid);
        mergesort(a,mid+1,hi);
        merge(a,lo,mid,hi);
    }
    
}
int b[20000];
void merge( int *a, int lo, int mid, int hi){
	
	unsigned long int i=lo,j=mid+1,k=lo;
	
		while((i<=mid)&&(j<=hi))
		if(a[i]<a[j])
			b[k++]=a[i++];
		else if (a[i]>a[j])
			b[k++]=a[j++];
		else
			{
				b[k++]=a[i++];
				b[k++]=a[j++];
			}
			
		while(i<=mid)
		b[k++]=a[i++];
		
		while(j<=hi)
		b[k++]=a[j++];
		
		for(i=0;i<k;i++)
		a[i]=b[i]; 
}
