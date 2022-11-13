#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, x,y,z;
	cin>>n;
	cout<<"Coding with Fibonacci Series"<<endl;
	x=0;
	y=1;
	z=0;
	while(z<=n)
	{
		cout<<"\n"<<z;
		x=y;
		y=z;
		z=x+y;
		
	}
	return 0;
	
}
