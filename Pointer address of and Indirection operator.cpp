//Program for Pointer address of and Indirection operator
#include<bits/stdc++.h>
using namespace std;
void main()
{
	int a=10, b=0 , c;
	int *p,*q;
	p=&a;
	q=&b;
	c=*p;
	cout<<"Value of a is="<<a;
	cout<<"Value of a is="<<p<<endl;
	cout<<"Address of a is="<<a<<endl;
	cout<<"Address of a is ="<<p<<endl;
	cout<<c<<endl;
	
	return 0 ;
	
	
	}
