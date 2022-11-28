#include<bits/stdc++.h>
using namespace std;
class moneyed 
{
	int a,b;
	public:
		moneyed(int x, int y)
		{
			a=x;
			b=y;
		}
		void disp(void)
		{
			cout<<"The Value of A is ="<<a;
			cout<<endl;
			cout<<"The Value of B is ="<<b;
		}
};
 
     int main()
     {
     	moneyed t1(1000,2000);
     	t1.disp();
     	
     	return 0;
		  
	 }
