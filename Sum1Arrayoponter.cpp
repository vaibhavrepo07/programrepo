#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=10;
	float f=2.32;
	char c='A';
	
	int *ptr=&i;
	float *ptr1=&f;
	char *ptr2=&c;
	
	cout<<"Value of i is "<<i<<endl;
	cout<<"value of f is "<<f <<endl;
	cout<<"Value of c is "<<c<<endl;
	
	cout<<"Address of i is "<<&i<<endl;
	cout<<"Address of f is "<<&f<<endl;
	cout<<" Address fo c is "<<&c<<endl;
	
	return 0;
}
