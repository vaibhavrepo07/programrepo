#include<bits/stdc++.h>
using namespace std;

template <class t>
t diff (t a, t b)
{
	return a-b;
}
int main()
{
	cout<<"Int Difference"<< diff(6,2)<<endl;
	cout<<"Float Difference"<<diff(14.2, 6.3)<<endl;
	
	return 0;
}
