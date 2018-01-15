#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t,i,j=0,k=0,sum=0,a[n],b[n],x,y;
    scanf("%d%d",&n,&t);
    for(i=0;i<n;i++)
    { 
        a[i]=0;
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        if(y==1)
        {    
            a[j]=x;
            j++;
        }
        else
        {  
            b[k]=x;
            k++;
        }
        
    }
    
    sort(a,a+j);
     
    for(i=0;i<k;i++)
    {
        sum=sum+b[i];
        cout<<sum<<endl;
    }
    if(j>=t)
    {for(i=j-1;i>j-t-1;i--)
    {    
        sum=sum+a[i];
        cout<<sum<<endl;
    }
    for(i=0;i<j-t;i++)
    {
        sum=sum-a[i];
        cout<<sum<<endl;
    }}
    
    cout<<sum<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
