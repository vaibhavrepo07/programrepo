//Program to write overload operator to compare two strings
#include<bits/stdc++.h>
using namespace std;
class string 
{
	char *ptr;
	public:
		string (char *p)
		{
			ptr= p ;
		}
		void operator == (string dest)
		{
			if(strcmp (ptr,dest.ptr)==0)
			cout<<"Both strings are same"<<endl;
			else 
			cout<<"Both strings are not same"<<endl;
		}
};
main()
{
	char *str1, *str2;
	cout<<"Enter first string "<<endl;
	cin>> str1;
	cout<<"Enter second string"<<endl;
	cin>> str2;
	string s1(str1);
	string s2(str2);
	s1==s2;
	
	return 0 ;
}
