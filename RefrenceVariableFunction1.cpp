#include<bits/stdc++.h>
using namespace std;
void swap(int &, int &);
int main()
{
	int a,b;
	cout<<"Enter the value of A and B"<<endl;
	cin>>a >>b;
	cout<<"Before Swapping "<<endl;
	cout<<"A"<<a<<"B"<<b<<endl;
	swap(a,b);
	cout<<"After swapping ";
	cout<<"A "<<a;
	cout<<"B"<<b;
	
	return 0;
}

  void swap(int &x, int &y)
  {
  	int temp;
  	temp = x;
  	x  = y;
  	y  = temp;
  }
  
