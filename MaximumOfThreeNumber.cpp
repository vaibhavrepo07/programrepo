//Program for Maximum of three number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,  b ,c;
	cout<<"The Maximum Number is ON"<<endl;
	cin>>a>>b>>c;
	cout<<"The values of a , b , c are distinct "<<endl;
	
	if(a>b)
	cout<<"A is greater than b"<<endl;
	else if(a>=b)
	cout<<"A is greater than equal to b "<<endl;
	else if(b<a)
	cout<<"B is less than A"<<endl;
	else if(b==a)
	cout<<"B is Equal to A"<<endl;
	else if(c>=a)
	cout<<"C is greater than A"<<endl;
	
	return 0;
	
}
