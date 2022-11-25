#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str1[20]="fanctsic";
	char str2[20]="FANTASTIC";
	int i;
	
	i = strcmpi(str1, str2);
	if(i==0)
	{
		cout<<"String are Equal "<<endl;
	}
	else
	{
		cout<<"Strings are not Equal"<<endl;
	}
	
	return 0;
}
