//Program for Calculate Compound Interest 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float ci, r,n,a,p;
	
	cout<<"Enter Principal ,Rate of Interest and Time ";
	cin>>p>>r>>n;
	
	a=p*pow((1+(r/100)),n);
	cout<< "The value of Compund Interest is ="<<a<<endl;
	
	return 0;
	
	}
	
	
	
