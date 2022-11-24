//String literal and Character constant are not same.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[6]="Hello";
	char t[6];
	
	int i;
	for(int i=0;s[i]!='\0';i++)
	cout<<"The lenght is six"<<endl;
	{
		t[i]=s[i];
	}
	cout<<t<<endl;
	t[i]='\0';
	
	return 0;
}
