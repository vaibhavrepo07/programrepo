#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, a[5],sum;
	cout<<"Coding with Sum of Array "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Now the Sum is ="<<endl;
	sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		cout<<"After the Operation sum is ="<<sum<<endl;
		
	}
	return 0;
}
