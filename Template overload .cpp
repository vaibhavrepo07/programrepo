//Program for overload template
#include<bits/stdc++.h>
using namespace std;

template <class t>
t sum(t a, t b)
{
	return a+b;
}

template <class t>
t sum(t a, t b ,t c)
{
	return a+b+c;
}
int main()
{
	cout<<"Two Integer "<<sum(10,20)<<endl;
	cout<<"Two Float "<< sum(3.4, 5.4)<<endl;
	cout<<"Three Integer "<<sum(5,3,2)<<endl;
	cout<<"Three Float "<< sum(4.5, 2.5, 6.4)<<endl;
	
	return 0;
}
