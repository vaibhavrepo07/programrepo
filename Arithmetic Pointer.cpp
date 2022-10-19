//Progarm for Pointer Arithmetic 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i , *p1;
	float f, *p3;
	p1=&i;
	p3=&f;
	cout<<"p1 ="<<p1<<endl;
	cout<<"p3 ="<<p3<<endl;
	p1++;
	p3++;
	cout<<"p1"<<p1<<endl;
	cout<<"p3"<<p3<<endl;
	
	return 0;
}
