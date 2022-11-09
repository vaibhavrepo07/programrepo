#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n ,r ,sum;
	
	cout<<"Enter any Number"<<endl;
	cin>>n;
	
	sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<"The Sum of the Digits "<<endl;
	
	return 0 ;
}
