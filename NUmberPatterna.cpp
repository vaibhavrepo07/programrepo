#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,x ,n ,r, j,sum;
	
	cout<<"Enter any Number";
	cin>>n;
	
	x=n;
	sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==x)
	cout<<j;
	else
	cout<<j;
}
