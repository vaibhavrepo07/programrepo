//Program for Switch statement with expression
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a ;
	cout<<"Expression we written in Switch Statement"<<endl;
	cin>> a;
	switch(a*2)
	{
		case 1: cout<<"Is there any point to talk on unecessary topic"<<endl;
		break;
		case 2: cout<<"Yes , there is point in talk on valuable thing "<<endl;
		break;
		case 3: cout<<"The solutiono f the expression is ="<<a*2<<endl;
		break;
		
		default : 
		 cout<<"Hey, you forget me "<<endl;
		 
	}
}
