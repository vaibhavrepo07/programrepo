#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,a[100];
	char choice ;
	
	do
	{
		cout<<"Enter the"<<i+1<<"Element";
		cin>>a[i];
		i=i+1;
		cout<<"Do you Want to Enter again "<<endl;
		cin>>choice;
	}
	while(choice == 'Y'|| choice == 'y');
	cout<<"Enter the Element ";
	for(int k=0;k<i;k=k+1)
	{
		cout<<a[k];
	}
	return 0;
}
