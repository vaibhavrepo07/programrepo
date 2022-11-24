#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str1[6]="Hello";
	char str2[4];
	strncpy(str2,str1,sizeof(str2));
	cout<<str2<<endl;
	
	return 0;
}
