//Program for Stricmp
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str1[20]="fantastic";
	char str2[20]="FANTASTIC";
	
	int i;
	
	i=strcmpi(str1, str2);
	if(i==0)
	{
		cout<<"Strings are equal"<<endl;
	}
	else
	{
		cout<<"String are not equal"<<endl;
	}
	return 0;
}
