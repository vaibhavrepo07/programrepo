//Program to sum of natural number using loop
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , sum=0;
	cout<<"Enter the sum all the positive integer number "<<endl;
	cin>>n ;
	for( int i=0 ;i<=n ; i++)
	{
		sum+=i;
	}
	cout<< "Sum ="<<sum ;
	
	return 0;
}
