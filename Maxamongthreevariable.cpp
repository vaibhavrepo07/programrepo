#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b , c;
	cout<<"Enter the three Numbers in the streak "<<endl;
	cin>>a>>b>>c;
	if((a>b) && (a>c))
	cout<<"A is Greater than b and c"<<a<<endl;
	else if((b>a) && (b>c))
	cout<<"B is Greater than a and c"<<b<<endl;
	else
	cout<<"C is Greater than a and b"<<c<<endl;
	
	return 0;
}
