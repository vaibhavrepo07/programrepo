//Program for Marksheet using Nested If Statement
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a  ;
	cin>> a;
	cout<<"Coding with Markseet Using Nested If Statement"<<endl;
	if(a>90)
	{
		if(a>80)
		cout<<"Excellent"<<endl;
		else
		cout<<"your good"<<endl;
	}
	else
	{
		if(a>70)
		cout<<"Brilliant"<<endl;
		else
		cout<<"your nice"<<endl;
	}
	if(a>60)
	{
		if(a>50)
		cout<<"Amazing "<<endl;
		else
		cout<<"your pretty "<<endl;
	}else
	{
		if(a>40)
		cout<<"Good"<<endl;
		else
		cout<<"well"<<endl;
	}
	if(a>30)
	{
		if(a>20)
		 cout<<"Yo'ur fail"<<endl;
	     else
	     cout<<"Your not trying well "<<endl;
	
	
	
	}
	return 0 ;
}
