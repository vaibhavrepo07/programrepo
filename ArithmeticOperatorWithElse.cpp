//Program for Arithmetic Operator using ifelse 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char op;
	int a , b ,res;
	cin>>a>>b;
	
	cout<<"The Operator for Arithmetic "<<endl;
	if(op=='+')
	{
		cout<<"The Addition of Two Number is ="<<endl;
		res = a+b;
	}
	else if(op=='-')
	{
		cout<<"The Subtration of Two Number is = "<<endl;
		res = a-b;
	}
	else if(op=='*')
	{
		cout<<"The Multiplication of Two Number is = "<<endl;
		res = a*b;
	}
	else if(op=='/')
	{
		cout<<"The Divisiion of Two Number is ="<<endl;
		res = a/b;
	}
	else if(op=='%')
	{
		cout<<"The Modulus of Two Number is ="<< endl;
		res = a%b;
	}
	else
	{
		cout<<"The Operator is Invalid "<<endl;
	}
	cout<<a<<" "<<op<<" "<< b <<" "<<res<<" "<<endl;
	
	return 0;
}
