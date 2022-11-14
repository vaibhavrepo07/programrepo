#include<bits/stdc++.h>
using namespace std;
int add(int x=10, int y=20, int z=30)
{
	return(x+y+z);
}
  int main()
  {
  	cout<<add();
  	cout<<add(10);
  	cout<<add(40,20);
  	cout<<add(20,40,30);
  	
  	return 0;
  }
