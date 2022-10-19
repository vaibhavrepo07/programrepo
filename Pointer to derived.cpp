//Program to Derived pointer 
#include<bits/stdc++.h>
using namespace std;
class base 
{
	protected:
		int b;
		public:
			void setb(int x)
			{
				b=x;
			}
};
void disp(void)
{
	cout<<"Base class"<<endl;
	cout<<"Value of B "<<endl;
};

class derived : public base
{
	int d ;
	public :
		void setd(int y)
		{
			d = y;
		}
		void disp(void)
		{
			cout<<"Derived class "<<endl;
			cout<<"The value of D "<< d <<endl;
			cout<<"The value of B "<<b<<endl;
		}
};
int main()
{
	int b , d, bp;
	Base *bp ;
	Base b;
	bp = &b;
	bp -> setb(100);
	cout<<"bp points to Base object "<<endl;
	bp-> disp();
	Derived d ;
	bp = &d;
	bp->setd(200); 
	cout<<"bp now point to derived object "<<endl;
	bp->disp();
	Derived *dp;
	dp = &d ;
	dp ->setd(500);
	cout<<"Derived type pointer"<<endl;
	dp->disp();
	bp = &b;
	bp = &d; 
	
	return 0;
}


