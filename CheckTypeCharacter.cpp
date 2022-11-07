//Program for Character 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	cin>> a;
	
	if(a>30 && a<50)
	{
		cout<<"The value of a is incorrect "<<endl;
		
	}
	else if(a>=97&&a<=122)
	{
		cout<<"The value of a is correct "<<endl;
	}
	else if(a<=50 && a>=23)
	{
		cout<<"The value of a is not appropiate "<<endl;
	}
	return 0;
	
}
