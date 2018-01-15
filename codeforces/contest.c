#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int y,a[9],i,k=0,j=1,p;
	scanf("%ld",&y);
	y++;
	while(1)
	{
		i=0;
		p=y;
		while(p>0&&k<2)
		{		
			a[i]=p%10;
			if(a[i]>0)
			k++;
			p=p/10;
			i++;
		}
		if(k<2)
		{
			printf("%ld\n",j);
			return 0;
		}
		else
		{
			y++;
			j++;
			k=0;
		}
	}
	return 0;
}

