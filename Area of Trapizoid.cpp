#include<bits/stdc++.h>
using namespace std;

int main()
{
	int b1,b2,h;
	float area;
	
	cout<<"Enter value of the bases"<<endl;
	cin>> b1>>b2;
	
	cout<<"Enter the value of the height "<<endl;
	cin>>h;
	
	area=(float )((b1+b2)*h)/2;
	
	cout<<"Area of a Trapizoid"<<area<<endl;
	
	return 0;
	
}
