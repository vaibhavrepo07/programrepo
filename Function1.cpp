#include<bits/stdc++.h>
using namespace std;
void add(int a, int t);
int main()

{
	int a,  b;
	cout<<"Enter the First Number"<<endl;
	cin>>a;
	cout<<"Enter the Second Number "<<endl;
	cin>>b;
	
	add(a,b);
	
	
	
	return 0;
}

  void add(int x ,int y)
  {
  	 int c;
  	 c = x + y ;
  	 cout<<"Addition of Two Number is = "<<c<<endl;
  }
