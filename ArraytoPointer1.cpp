#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={3,4,5,6,7};
	int *ptr[5];
	
	cout<<"Code for Array of Pointer"<<endl;
	for(int i=0;i<5;i++)
	{
		ptr[i]=&a[i];          //This for loop store the value 
	}
	cout<<"After the Code Enter the Element"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<ptr[i]<<" "<<endl;
		cout<<*ptr[i]<<" "<<endl;
		cout<<&ptr[i]<< " "<<endl;
		cout<<++ptr[i]<<" "<<endl;
		cout<<i+ptr[i]<< " "<<endl;
		
	}
	return 0;
}
