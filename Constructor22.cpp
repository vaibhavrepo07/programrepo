#include<bits/stdc++.h>
using namespace std;
class integer
{
	int m,n;
	public:
		integer(void);
		void putdata(void);
		
};
 
  integer :: integer(void)
  {
  	 m=0;
  	 n=0;
  	 
  }
  void integer :: putdata(void)
  {
  	cout<<"m ="<<m;
  	cout<<"n = "<<n;
  }
  
  int main()
  {
  	integer i;
  	i.putdata();
  	
  	return 0;
  }
