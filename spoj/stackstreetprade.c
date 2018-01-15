#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   while(n!=0)
   {
	   int a[n],b[n],top=-1,j=1,i,k=0;
	   for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	   i=0;
	   while(j<=n-1&&i<n-1)
	   {
		   while(a[i]!=j&&i<n)
		   {
			   if(top==-1)
			   b[++top]=a[i];
			   else if (b[top]<a[i]&&b[top]<=j)
			  {
				   while(b[top]<=j&&top>-1)
			   {
				   top--;
				   j++;
				}
				if (a[i]==j)
				j++;
				else if(a[i]>j)
				b[++top]=a[i];
			}
			   else if (b[top]>a[i])
			   b[++top]=a[i];
			   else 
			   {
				   printf("no\n");
				   k=1;
				   break;
			   }
			   i++;
			}
			if(k==1)
			break;
			i++;
			j++;
		}
		if(k!=1)
		printf("yes\n");
		scanf("%d",&n);
	}   
	return 0;
}

