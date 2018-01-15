#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>	

int main()
{
	char s[25];
	scanf("%s",s);
	while(s!=NULL)
	{
		int a=0,b=0,i,p=0;
		for(i=0;i<6;i++)
		{
			if(i%2==0&&s[i]=='1')
				a++;
			else if (i%2==1&&s[i]=='1')
				b++;
		}	

		if(a>b+2)
			printf("TEAM-A %d\n",6);
		else if(b>a+2)
			printf("TEAM-B %d\n",6);
		else
		{
			for(i=6;i<10;i++)
			{
				if(i%2==0&&s[i]=='1'&&p!=1)
				{
					if((a-b)>2)
					{
						p=1;
						printf("TEAM-A %d\n",6);
					}
					a++;
					if((a-b)>2&&p!=1)
					{
						p=1;
						printf("TEAM-A %d\n",7);
					}
					else if((a-b)>1&&i>7&&p!=1)
					{
						printf("TEAM-A %d\n",9);
						p=1;
					}
				}
				else if (i%2==1&&s[i]=='1'&&p!=1)
				{
					if((b-a)>1&&p!=1)
					{
						p=1;
						printf("TEAM-B %d\n",7);
					}
					b++;
					if((b-a)>1&&p!=1)
					{
						p=1;
						printf("TEAM-B %d\n",8);
					}
					else if((b>a)&&i>8&&p!=1)
					{
						p=1;
						printf("TEAM-B %d\n",10);
					}
				}
			}
			//printf("%d %d ttttt\n",a,b );
			if(p!=1&&a>b)
				printf("TEAM-A %d\n",10);
			else if (p!=1&&b>a)
				printf("TEAM-B %d\n",10);
			else if(p==0&&a==b)
			{
				i=10;
				while(p!=1&&i<19)
				{
					if(s[i]=='1'&&s[i+1]=='0')
					{
						p=1;
						printf("TEAM-A %d\n",i+2);
					}	
					else if(s[i]=='0'&&s[i+1]=='1')
					{
						p=1;
						printf("TEAM-B %d\n",i+2);
					}
					i=i+2;
				}
				if(i==20&&p!=1)
					printf("TIE\n");
			}	

		}	
		scanf("%s",s);
	}
}


