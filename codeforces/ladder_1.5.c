#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y,a[4];
	scanf("%d",&y);
	y++;
	a[0]=(y/1000)%10;
	a[1]=(y/100)%10;
	a[2]=(y/10)%10;
	a[3]=y%10;
	while(a[0]==a[1]||a[0]==a[2]||a[0]==a[3]||a[1]==a[2]||a[1]==a[3]||a[2]==a[3])
	{
		y++;
		a[0]=(y/1000)%10;
		a[1]=(y/100)%10;
		a[2]=(y/10)%10;
		a[3]=y%10;
	}
	printf("%d\n",y);	
	return 0;
}
