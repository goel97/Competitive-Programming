#include <math.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main(){
    int t,a0; 
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++)
    {
        int n,c,i;  
        scanf("%d %d",&n,&c);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n;i++)
        printf("%d\n",a[i]);
        
    }
    return 0;
}

