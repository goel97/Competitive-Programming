#include<stdio.h>
#include<math.h>
int main()
{
    double g,b;
    scanf("%lf%lf",&g,&b);
   while(g!=-1&&b!=-1)
   {
	   double k;
	   if(g==0)
	   printf("%.0lf\n",b);
	   else if(g==0)
	   printf("%.0lf\n",g);  
	   else if(g>=b)
	   {
		   k=g/(b+1);
	        printf("%.0lf\n",ceil(k));
	    }
	   else  
	   {
		   k=b/(g+1);
		    printf("%.0lf\n",ceil(k));
		}
		scanf("%lf%lf",&g,&b);
	}   
	return 0;
}

