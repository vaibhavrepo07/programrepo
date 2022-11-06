//Program for Nested If Else Statement
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Three Number"<<endl;
    cin>>a>>b>>c;
    
    if(a>b)
    {
    	if(a>c)
    	cout<<"A is Largest than C"<<endl;
    	else
    	cout<<"B is Largest than A"<<endl;
	}
	else{
		if(c>a)
		cout<<"C is Largest than A"<<endl;
		else
		cout<<"A is largest than C"<<endl;
	}
	return 0 ;
}
