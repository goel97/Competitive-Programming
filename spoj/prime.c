
#include<stdio.h>
#include<math.h>
int prime(unsigned long int s){
	unsigned long int k;
	for( k=2;k<s;k++)
		if(s%k==0)
			return 0;
			
	if(s==k)
		return 1;
}
int main() {
	int t,i;

		scanf("%d",&t);
	unsigned long int m[t],n[t],j,k;
	for(i=0;i<t;i++)
	scanf("%lu%lu",&m[i],&n[i]);
	
	for(i=0;i<t;i++){
		for(j=m[i];j<=n[i];j++){
		if(j==2)
		printf("2\n");
		else{		
		k=prime(m[i]);
		if(k==1)
		printf("%lu\n",j);}
	}
		printf("\n");
	}
	return 0;
}	

	
	
