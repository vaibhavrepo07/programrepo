//Program for Factorial Number using Function
#include<bits/stdc++.h>
using namespace std;
long int factorial(int n);
int main()
{
	int n;
	cout<<"Enter the Number "<<endl;
	cin>>n;
	cout<<"Factorial of "<<n<<"is"<<factorial(n);
	
}
long int factorial(int n)
{
	if(n<=1)
	{
		return (1);
	}
	else 
	{
		n=n*factorial(n-1);
		return(n);
	}
}
