#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[105],a[105],b[105];
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",s);
	int i,p=strlen(a),q=strlen(b),t=strlen(s),m[26],n[26];
	if(t==(p+q))
	{
		for(i=0;i<26;i++)
		{
			m[i]=0;
			n[i]=0;
		}
		for(i=0;i<p;i++)
		m[a[i]-65]=m[a[i]-65]+1;
		for(i=0;i<q;i++)
		m[b[i]-65]=m[b[i]-65]+1;
		for(i=0;i<t;i++)
		n[s[i]-65]=n[s[i]-65]+1;
			
		for(i=0;i<26;i++)
		if(m[i]!=n[i])
		{
			printf("NO\n");
			return 0;
		}
		
		printf("YES\n");
	}
	else
	printf("NO\n");
	
	return 0;
}
