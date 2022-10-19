//Program for Abstract classed and pure virtual function 
#include<bits/stdc++.h>
using namespace std;
class Base 
{
	public:
		virtual void disp() = 0;
		
};
class D : public Base 
{
	void disp()
	{
		cout<<"Derived class "<<endl;
	}
};
int main()
{
	D obj ;
	obj .disp();
	
	return 0 ;
}
