#include<bits/stdc++.h>
using namespace std;
int calc(int );
int calc(int ,int );
int main()
{
	int s, a, b;
	cout<<"Coding with Function Overloading "<<endl;
	cin>>s;
	cout<<"Square of "<<s<<"is"<<calc(s);
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"Addition is "<<calc(a,b)<<endl;
	
	return 0;
}
   
    int calc(int x)
    {
    	return (x*x);
	}
	int calc(int x , int y)
	{
		return (x+y);
	}
	
