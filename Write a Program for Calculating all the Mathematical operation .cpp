//Program for Initilization of 2-D Arrays 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x ,y , Summation, Difference , Fraction , Product ;
	float Module ;
	
	cout<<"Let's calculate the Numbers in Different format "<<endl;
	cin>> x >> y ;
	
	Summation  = x+y;
	Difference = x-y;
	Fraction   = x/y;
	Product    = x*y;
	Module     = x%y;
	
	cout<<"The Summation of Two Numbers are   =" <<Summation <<endl;
	cout<<"The Difference of Two Numbers are  =" <<Difference <<endl;
	cout<<"The Fraction of Two Numbers are    =" << Fraction <<endl;
	cout<<"The Product of Two Numbers are     =" << Product <<endl;
	cout<<"The Module of Two Numbers are      =" <<Module <<endl;
	
	return 0;
}
