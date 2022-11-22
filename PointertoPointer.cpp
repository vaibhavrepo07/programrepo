#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=20;
	int *b=&a;
	int *c;
	
	int **d=&c;
	
	cout<<"The Value of C is "<<a <<" "<<endl;
	cout<<"The Value of Pointer of b"<<*b<<" "<<endl;
	cout<<"The Value of pointer to pOinter "<<d<<endl;
	cout<<"The Value of ampersand of C is" <<c<<endl;
	cout<<"The Value of Pointer to c "<<" "<<**d<<endl;
	
	return 0;
}
