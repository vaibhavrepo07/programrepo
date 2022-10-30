#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i , n;
	float arr[100];
	
	cout<<"Enter total number of elements (1 to 100)"<<endl;
	cin>>n;
	
	cout<<endl;
	
	for(i=0 ;i<n ;i++)
	{
		cout<<"Enter number"<<i+1<<";"<<endl;
		cin>>arr[i];
	}
	
	for(i=1;i<n ;++i)
	{
		if(arr[0]<arr[i])
		arr[0]=arr[i];
	}
	cout<<"Largest Element"<<arr[0]<<endl;
	
	return 0;
}
