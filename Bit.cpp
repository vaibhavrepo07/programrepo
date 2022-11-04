#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a , b , c ;
	cin>> a>> b ;
	cout<<"Enter the Bitwise Operator "<<endl;
	
	c = (a&b);
	cout<<"The value of Bitwise AND Operator is ="<<c<<endl;
	
	c = (a|b);
    cout<<"The Value of Bitwise OR Operator is ="<< c<<endl;
	
	c= ( a<<b);
	cout<<"The value of Bitwise Right Shift Operator is ="<<c<<endl;
	
	c=(a>>b);
	cout<<"The Value of Bitwise Left Shift Operator is ="<<c<<endl;
	
	c=(a^b);
	cout<<"The Value of Bitwise XOR Operator is ="<<c<<endl;
	
	c= ~a;
	cout<<"The Value of Bitwise Not Operator is ="<<c <<endl;
	
	
	return 0;	
}
