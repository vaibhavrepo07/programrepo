//Program for Check the type of Character 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	cout<<"The character of Alphabets "<<endl;
	cin>> ch;
	if(ch>='A' && ch<='Z')
	{
		cout<<"Uppercase Alphabets "<<endl;
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<"LowerCase Alphabets "<<endl;
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"Numeric Constant"<<endl;
	}
	else
	{
		cout<<"Symbol constant"<<endl;
	}
	return 0;
}
