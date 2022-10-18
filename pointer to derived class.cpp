//program for pointer to derived class 
#include<bits/stdc++.h>
using namespace std;
class BC
{
	public:
		int b;
		void show()
		{
			cout<<"b ="<< b<<endl;
		}
};

class DC : public BC
{
	public :
		int d ;
		void show()
		{
			cout<<"b ="<< b<< "d ="<< d<< endl;
		}
};
int main()
{
	BC *bptr ; //base pointer
	BC base;
	bptr = &base ; // base address
	
	return 0;
}

