//Program to write a Void Pointer in c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
	void *vp;
	
	int a=5;
	float b=1.56;
	char ch='c';
	
	vp=&a;
	cout<<"The Value of Void Pointer in int "<<*(int *)vp<<endl;
	
	vp=&b;
	cout<<"The Value of Void Pointer in Float "<<*(float *)vp<<endl;
	
	return  0;
	
}
