#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,r,temp;
	cin>>n;
	cout<<"Enter Armstrong NUmber"<<endl;
	temp=n;
	while(n>0)
	{
	    r=n%10;
	    sum=sum+(r*r*r);
	    n=n/10;
	}
	if(temp==sum)
	cout<<"This is Armstrong Number"<<endl;
	else
	cout<<"This is not Armstrong Number"<<endl;
	
	return 0;
}
