#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t,i; 
    scanf("%d",&t);
    int a[1000];
    for(i=0;i<1000;i++)
    a[i]=0;
    for(i=0;i<t;i++)
    {
        int n;  
        scanf("%d",&n);
        a[n]++;
        if(a[n]==2)
        {
			printf("%d\n",n);
			return 0;
		} 
    }
    return 0;
}

