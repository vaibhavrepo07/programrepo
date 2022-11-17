#include<bits/stdc++.h>
using namespace std;
int Swap_INT(int,int);
int main()
{
	int a,b,z;
	z = Swap_INT(a,b);
	cout<<"The Value of A and B is = "<<(z);
	
	return 0;
}
  
   int Swap_INT(int x, int y)
   {
   	int z;
   	cin>>x>>y;
   	 z = x*y;
   	 
   	 return (z);
   }

