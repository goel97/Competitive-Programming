#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
        int n,m,x,sum=0;  
        scanf("%d%d",&n,&m);
        sum=n;
        x=n/m;
        while(x>0)
        {
			sum=sum+x;
			x=x/m;
		}
		if(sum%m==0)
		printf("%d\n",sum+1);
		else
		printf("%d\n",sum);
		
    
    return 0;
}
