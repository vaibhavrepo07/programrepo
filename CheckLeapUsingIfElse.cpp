#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y;
	cin>>y;
	cout<<"Checking the given year is leap or ain't"<<endl;
	
	if(y%100==0)
	{
		if(y%400==0)
		cout<<"This is leap year "<<endl;
		else
		cout<<"This is not  a leap year"<<endl;
	}
	else if(y%4==0)
	cout<<"It is a leap year "<<endl;
	else
	cout<<"It is not  a leap year"<<endl;
	
	return 0 ;
}
