#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long n;  
        scanf("%lld",&n);
        printf("%lld\n",((n*(3*n+1))/2)%1000007);
    }
    return 0;
}
