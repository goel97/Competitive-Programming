#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t,i;
   
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {	int j=0,k=0,l=0,n,val1,val2;
		char str[100];
		char a[100],b[100];
		fgets (str,100,stdin);
		n=strlen(str);
		while(str[j]!=43)
			j++;
		while(str[k]!=61)
			k++;
		while(str[l]!=109)
			l++;
		if(l>=0&&l<j-1)
		{
			strncpy(a,str+j+2,k-j-3);
			val1=atoi(a);
			strncpy(b,str+k+2,n-k-2);
			val2=atoi(b);
			printf("%d + %d = %d\n",val2-val1,val1,val2);
		}	
		else if(l>j+1&&l<k-1)
		{
			strncpy(a,str,j-1);
			val1=atoi(a);
			strncpy(b,str+k+2,n-k-2);
			val2=atoi(b);
			printf("%d + %d = %d\n",val1,val2-val1,val2);
		}
		else if(l>k+1)
		{
			strncpy(a,str,j-1);
			val1=atoi(a);
			strncpy(b,str+j+2,k-j-3);
			val2=atoi(b);
			printf("%d + %d = %d\n",val1,val2,val1+val2);
		}
		printf("\n");
	}	

    return 0;
}
