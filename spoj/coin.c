#include<stdio.h>
int main(){
	unsigned long int n,sum;
	scanf("%lu",&n);
	while(n!='\0')
	{
		sum=(n/2)+(n/3)+(n/4);
		if(sum>n)
		printf("%lu\n",sum);
		else 
		printf("%lu\n",n);
		scanf("%lu",&n);
	}
return 0;
}
