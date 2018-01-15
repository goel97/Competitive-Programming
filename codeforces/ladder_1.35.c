#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int x,y,z,a,b,c;
	scanf("%d%d%d",&x,&y,&z);

	a=sqrt((x*y)/z);
	b=sqrt((x*z)/y);
	c=sqrt((z*y)/x);

	printf("%d\n",(4*a)+(4*b)+(4*c));
	return 0;
}
