#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x , y ,z , mul(int ,int );
	cout<<"Enter the value of x and y "<<endl;
	cin>>x>>y;
	z=mul(x,y);
	cout<<"MUltiplication is :"<<z;
}
int mul(int p, int q)
{
	return (p*q);
}
