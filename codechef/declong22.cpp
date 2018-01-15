#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	while(!s.empty())
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
				if(s[i]=='1'&&s[i+1]=='1')
				{
					if((a-b)>1&&p!=1)
					{
						p=1;
						printf("TEAM-A %d\n",i+1);
					}
					else if	((b-a)>1&&p!=1)
					{
						p=1;
						printf("TEAM-B %d\n",i+2);
					}
					else if((a-b)==1&&i>7&&p!=1)
					{
						p=1;
						printf("TEAM-A %d\n",i+1);
					}	
						a++;
						b++;
				}
				else if(s[i]=='1'&&s[i+1]=='0')
				{
					if((a-b)>1&&p!=1)
					{
						p=1;
						printf("TEAM-A %d\n",i+1);
					}
					else if((a-b)==1&&i>7&&p!=1)
					{
						p=1;
						printf("TEAM-A %d\n",i+1);
					}
					else if((a-b)>=1&&p!=1)
					{
						p=1;
						printf("TEAM-A %d\n",i+2);
					}
					a++;		
				}
				else if(s[i]=='0'&&s[i+1]=='1')
				{
					if	((b-a)>1&&p!=1)
					{
						p=1;
						printf("TEAM-B %d\n",i+1);
					}
					else if	((b-a)==1&&i>7&&p!=1)
					{
						p=1;
						printf("TEAM-B %d\n",i+1);
					}
					else if	((b-a)>=1&&p!=1)
					{
						p=1;
						printf("TEAM-B %d\n",i+2);
					}

					b++; 
				}

				i=i+2;
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
		getline(cin,s);
	}
	return 0;
}
