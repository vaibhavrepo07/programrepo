//Program for Passing two different types of Argument in the template
#include<bits/stdc++.h>
using namespace std;

template <class t1, class t2>
float sum(t1 x , t2 y)
{
	return x+y;
}
int main()
{
	cout<<"Int sum ="<<sum(10,20)<<endl;
	cout<<"Float sum ="<<sum(3.2, 4.4)<<endl;
	cout<<"Int ,Float sum ="<< sum(4, 6.5)<<endl;
	cout<<"Float Int sum= "<< sum(1.1, 4)<<endl;
	
	return 0;
}
