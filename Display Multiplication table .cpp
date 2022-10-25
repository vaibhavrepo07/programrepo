//Progarm for Display Multiplication table up to a given range
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ,range;
	
	cout<<"Enter an Integer"<<endl;
	cin>> n;
	
	cout<<"Enter range"<<endl;
	cin>> range;
	
	for(int i=1; i<=range ; i++)
	{
		cout<<n<< " * "<<i<<" = "<<n*i<<endl;
	}
	
	return 0;
}
