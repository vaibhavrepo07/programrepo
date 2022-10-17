//Program for Single INheritance 
#include<bits/stdc++.h>
using namespace std;
class A
{
	int x ;
	public:
		int y;
		void get_xy(void);
		int get_x(void);
		void show_x(void);
	
		
};
class B : public A               //derived class B
{
	int z;
	public:
		void mul(void);
		void display(void);
	};
	void A :: get_xy(void)
	{
	  x=5;
	  y=10;
	}
	int A :: get_x(void)
	{
		return x;
	}
	void A::show_x(void)
	{
		cout<<"x ="<<x<< endl;
	}
	void B::mul(void)
	{
		cout<<"x="<<get_x();
		cout<<"y="<<y;
		cout<<"z="<<z;
	}
	int main()
	{
		B b;
		b.get_xy();
		b.mul();
		b.show_x();
		b.display();
		b.y=20;
		b.mul();
		b.display();
		
		return 0;
	}
