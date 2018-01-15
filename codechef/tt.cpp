
#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>

using namespace std;

int main() 
{
	for (int i = 0; i < 10; ++i)
	{
		cout<<i;
		if(i==5)
		{
			i=8;
			break;
		}
	}
	return 0;
}
