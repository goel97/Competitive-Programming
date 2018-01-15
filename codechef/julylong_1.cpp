#include<iostream>
#include<string>
#include<string.h>
#include<ctype.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string name;
		getline(cin,name);
		int n=name.length(),i,a[3],c=0;
		for(i=0;i<n;i++)
		if(name[i]==' ')
		{
			a[c]=i;
			c++;
		}
		if(c==0)
		{
			name[0]=toupper(name[0]);
			for(i=1;i<n;i++)
			name[i]=tolower(name[i]);
			cout<<name<<endl;
		}
		else if (c==1)
		{
			name[0]=toupper(name[0]);
			cout<<name[0]<<". ";
			name[a[0]+1]=toupper(name[a[0]+1]);
			cout<<name[a[0]+1];
			for(i=a[0]+2;i<n;i++)
			{
				name[i]=tolower(name[i]);
				cout<<name[i];
			}
			cout<<endl;
		}
		else
		{
			name[0]=toupper(name[0]);
			cout<<name[0]<<". ";
			name[a[0]+1]=toupper(name[a[0]+1]);
			cout<<name[a[0]+1]<<". ";
			name[a[1]+1]=toupper(name[a[1]+1]);
			cout<<name[a[1]+1];
			for(i=a[1]+2;i<n;i++)
			{
				name[i]=tolower(name[i]);
				cout<<name[i];
			}
			cout<<endl;
		}
					
	}
	return 0;
}
