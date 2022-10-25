//Program for Calculate sum of Natural numbers using Recursion
#include<bits/stdc++.h>
using namespace std;

int add(int n);

int main()
{
	int n;
	
	cout<<"Enter a Positive Integer"<<endl;
	cin>>n;
	
	cout<<"sum="<<add(n)<<endl;
	
	return 0;
}
int add (int n)
{
	if(n!=0)
	{
		return n+add(n-1);
	
	}
	return 0;
}
