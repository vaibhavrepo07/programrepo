//Program for Overloading Template
#include<bits/stdc++.h>
using namespace std;
template <class T>
void show(T a )

{
	cout<<"Template function ::: a ="<< a <<endl;
}
void show(int a )
{
	cout<<"Simple function ::: a= "<< a<<endl;
}
 int main()
 {
 	show(12);
 	show('N');
 	show(10.23);
 	show("NUll");
 	
 	return 0;
 }
