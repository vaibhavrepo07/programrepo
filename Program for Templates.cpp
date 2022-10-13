//Program to Write the Templates
#include<bits/stdc++.h>
using namespace std;
template <class type>
type max1(type a, type b)

{
	if(a>b)
	return a;
	else 
	return b;
}
int main()
{
	cout<<"Fun1 is ="<<max1(10,20)<<endl;
	cout<<"Fun1 is ="<<max1(10.20, 10.50)<<endl;
	
	return 0;
}
