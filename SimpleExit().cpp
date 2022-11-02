#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	
	cout<<"Enter the NUmber"<<endl;
	cin>> n;
	
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			cout<<n<<"is not a Prime Number"<<endl;
			
			exit(0);
		}
	}
	cout<<n<<"is  a Prime Number"<<endl;
	return 0;
}
