//Program for String Concatnination 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[80];
	char s2[80];
	
	cout<<"Enter the First String "<<endl;
	cin.getline(s1,80);
	cout<<"Enter the Second String "<<endl;
	cin.getline(s2,80);
	strcat(s1,s2);
	cout<<s1<<endl;
	
	return 0;
	
}
