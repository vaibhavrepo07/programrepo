#include<bits/stdc++.h>
using namespace std;

const int MAX = 30;
int main()
{
	char str1[30]="C++ Programming Examples";
	char str2[MAX];
	
	for(int j=0; str1[j]!='\0';j++)
	{
		str2[j]=str1[j];
		str2[j]='\0';
		
		
	}
	cout<<"Str1 ="<<str1;
	cout<<"Str2 ="<<str2;
	
	return 0;
}
