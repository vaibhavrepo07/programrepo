//Program to use Function templates multiparameter 

#include<bits/stdc++.h>
using namespace std;

template <class t1, class t2>
void show(t1 a, t2 b)
{
	cout<<"a ="<< a<< "b ="<< b<<endl;
}
int  main()
{
	show(10 , 'B');
	show('B', 20.75);
	show(10.30 ,'B');
	
	return 0 ;
}
