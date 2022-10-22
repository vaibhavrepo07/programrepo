//Program for Array in Template
#include<bits/stdc++.h>
using namespace std;

template <class t>
t sum (t a[] , int size)
{
	t s=0;
	for(int i=0 ;i<size;i++)
	s = s+a[i];
	return s;
}
int main()
{
	int x[5]={10,20,30,40,50};
	float y[3]={2.3, 4.2 , 6.7};
	
	cout<<"Int array element sum"<<endl<<sum(x,5)<<endl;
	cout<<"Float array element sum"<<endl<<sum(y,3)<<endl;
	
	
}
