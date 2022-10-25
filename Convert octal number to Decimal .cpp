//Program for Reverse a sentence using recursion
#include<bits/stdc++.h>
using namespace std;

void reverse(const string& a);

int main()
{
	string str;
	cout<<"Please enter a string "<<endl;
	getline(cin,str);
	reverse(str);
	return 0;
}
void reverse(const string& str)
{
	size_t numofChars=str.size();
	
	if(numofChars==1)
	cout<<str<<endl;
	else
	{
		cout<<str<<endl;
		reverse (str.substr(0,numofChars-1));
	}
}

