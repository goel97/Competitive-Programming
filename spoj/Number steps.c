#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int x[t],y[t],i,p;
	for(i=0;i<t;i++)
	scanf("%d%d",&x[i],&y[i]);
	
	for(i=0;i<t;i++)
	{
		if(x[i]<y[i]||x[i]>(y[i]+2)||(x[i]+y[i])%2!=0)
		printf("No Number\n");
		else{
			
		if(x[i]==y[i]&&(x[i]+y[i])%4==0)
		p=0;
		else if(x[i]==y[i]&&(x[i]+y[i])%4!=0)
		p=1;
		else if(x[i]-2==y[i]&&(x[i]+y[i])%4==0)
		p=1;	
		else if(x[i]-2==y[i]&&(x[i]+y[i])%4!=0)
		p=0;
		printf("%d\n",x[i]+y[i]-p);
	}
	}
	return 0;
}
