//Write a program for Printing the Quotient and Remainder
#include<bits/stdc++.h>
using namespace std;
int main()

{
	int x, y , Quotient , Remainder ;
	cout<<"Printing the Quotient and Remainder "<<endl;
	cin>> x >> y ;

	Quotient = x / y ;
	cout<<"Calculate the Quotient of Two Numbers = "<< Quotient <<endl;
	
	Remainder = x % y ;
	cout<<"Calculate the Remaindere of Two Numbers = "<<Remainder <<endl;
	
	return 0;
}
