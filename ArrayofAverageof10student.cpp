#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,sum=0,a[100];
	float avg;
	cout<<"Enter the Average of 100 Numbers"<<endl;
	cin>>i;
	
	for(int i=0;i<=99;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=99;i++)
	{
		sum = sum+a[i];
		avg = sum/100.0;
		cout<<"Average of 100 number is "<<avg<<endl;
	}
	cout<<endl;
	
	return 0;
}
