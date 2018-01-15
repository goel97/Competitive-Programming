#include<stdio.h>
#include<string.h>

int main()
{
	int t,left=0,top=0,i,j;
	
	scanf("%d",&t);
	char a[100],exp[t][100];
	for(i=0;i<t;i++)
		scanf("%s",&exp[i]);
	for(i=0;i<t;i++)
	{
		for(j=0;j<strlen(exp[i]);j++)
			if(exp[i][j]=='(')
				left++;
			else if(exp[i][j]<=122&&exp[i][j]>=97)
				printf("%c",exp[i][j]);
			else if(exp[i][j]=='+'||exp[i][j]=='-'||exp[i][j]=='*'||exp[i][j]=='/'||exp[i][j]=='^')
				a[top++]=exp[i][j];	
			else if(exp[i][j]==')')
			{
				left--;
				printf("%c",a[--top]);
			}
		printf("\n");
	}
	return 0;
}
