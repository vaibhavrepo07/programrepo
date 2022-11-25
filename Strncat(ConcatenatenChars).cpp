#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[20];
	char s2[20];
	unsigned int len;
	
	cout<<"Enter the First String"<<endl;
	cin.getline(s1, 20);
	cout<<"Enter the Second String"<<endl;
	cin.getline(s2,20);
	
	len=19-strlen(s1);
	strncat(s1,s2,len);
	cout<<s1<<endl;
	
	
	return 0;
}
