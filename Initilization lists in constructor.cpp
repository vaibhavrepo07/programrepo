//Progarm for Initilization Lists in Constructors
#include<bits/stdc++.h>
using namespace std;
class Base 
{
	int a;
	public:
		Base(int x)
		{
			a=x;
		}
		void dispa(void)
		{
			cout<<"Value of A "<<a <<endl;
		}
		
};
class Derived 
{
	int b ,x,y;
	public:
	    Derived(int x, int y) : Base (x), b(y)
	    {
	    	cout<<"Derived class constructor initilized"<<endl;
		}
		void dispb(void)
		{
			cout<<"Value of B "<<b<<endl;
		}
};
int main()
{
	Derived obj(10,20);
	obj.dispa();
	obj.dispb();
	
	return 0;
}
