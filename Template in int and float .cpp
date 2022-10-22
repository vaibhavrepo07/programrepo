//Program for Template in c++
#include<bits/stdc++.h>
using namespace std;

template <class t>
//int sum (int a , int b) // function parameter , function definition 

t sum ( t a, t b)
{
	return a+b;
}
int main()
{
	cout<<"Integer sum "<< sum(5,6)<<endl;
	cout<<"Float sum "<<sum(3.3, 5.3)<<endl;
	
	return 0;
}
