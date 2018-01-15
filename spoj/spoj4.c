#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
   for(i=0;i<t;i++)
    {
		int a,b,j,max,maxx;
		scanf("%d%d",&a,&b);
		int g[a],m[b];
		for(j=0;j<a;j++)
		scanf("%d",&g[j]);
		for(j=0;j<b;j++)
		scanf("%d",&m[j]);
		max=g[0];
		for(j=1;j<a;j++)
		{
			if(g[j]>max)
			max=g[j];
		}
		maxx=m[0];
		for(j=1;j<b;j++)
		{
			if(m[j]>maxx)
			maxx=m[j];
		}	
		if(max>=maxx)
		printf("Godzilla\n");
		else 
		printf("MechaGodzilla\n");	
	}
	return 0;
}
