//Program for Function Template 3
#include<iostream>
using namespace std;
template <class T> // syntax of function template
T sum (T a, T b)
{
	cout<<"Total is :"<< a+b<<endl;
}
  int main()
{
	sum (2.3 , 3.5);
	
       return 0 ;
}
