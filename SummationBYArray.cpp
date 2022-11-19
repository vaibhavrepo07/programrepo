#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a[6],sum=0;
	cout<<"Enter the Array summation"<<endl;
	for(i=0;i<6;i++)
	{
		cin>>a[i];
		
	}
	for(i=0;i<6;i++)
	{
		sum=sum+a[i];
		cout<<"The Sum of all Six digits are"<<sum<<endl;
	}
	return 0;
}
