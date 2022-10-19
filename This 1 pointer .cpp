//Program for This pointer
#include<bits/stdc++.h>
using namespace std;
class temp 
{
	public:
		void addr (void)
		
	{
		cout<<"MY object address is"<<this<<endl;
	}
};
int main()
{
	temp t1,t2,t3;
	t1.addr();
	t2.addr();
	t3.addr();
	
	return 0;
}
