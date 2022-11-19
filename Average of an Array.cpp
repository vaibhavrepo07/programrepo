#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a[5];
	
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	float s=0;
	for(i=0;i<5;i++)
	{
		s=s+a[i];
	}
	
	float avg;
	avg=s/5;
	cout<<"The Average is = "<< avg;
	
	
	return 0;
}
