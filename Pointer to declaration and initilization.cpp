//Progarm for Pinter declaration and Initilization
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5], i  , sum= 0;
	int *ptr;
	cout<<"Enter any 5 number"<<endl;
	for(i=0 ;i<5 ;i++)
	{
		cin>> arr[i];
	}
	ptr=arr;
	for(i=0 ;i<5;i++)
	{
		sum=sum+ *(ptr + i);
	}
	cout<<"Sum of Array Element "<<sum <<endl;
	
	return 0 ;
}
