#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str1[10]="Hello";
	char str2[10];
	char str3[10];
	
	strcpy(str3, strcpy(str2, str1));
	cout<<str2<<str3<<endl;
	
	return 0;
}
