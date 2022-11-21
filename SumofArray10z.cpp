//Program for Sum of Array of 10 Numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5];
	int sum=0;
	cout<<"Coding with Arrays"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"The Summation of 10 Elements are :"<<endl;
	
	for(int i=0 ;i<5 ;i++)
	{
		sum=sum+a[i];
		cout<<a[i]<<" ";
			
	}
	cout<<"The Sum of All 5 digits are "<<" = "<<sum;
	
	return 0;
}
