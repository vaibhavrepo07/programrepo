//Progarm for Introduce Refrence Variable 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a; 
	float b ;
	
	//declare refrence variables 
	int& x=a;
	float& y=b;
	
	a=23;
	cout<<"Value of a "<<a <<endl;
	cout<<"Value of a refrence "<< x << endl;
	
	b=78.34;
	cout<<"value of b :"<< b<<endl;
	cout<<"Value fo b refrence "<< y <<endl;
	
	return 0;
}
