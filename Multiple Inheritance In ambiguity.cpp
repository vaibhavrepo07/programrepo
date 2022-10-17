//Progarm for Ambiguity of Multiple Inheritance 
#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		void display(void);
		
};
class B{
	
	 public:
	 	void display(void);
};
class C :public A, public B
{
	public :
		void display(void);
		
};
void A :: display(void)
{
	cout<<"This is base class A "<<endl;
}
void B :: display(void)
{
	cout<<"This is base class B"<<endl;
}
void C :: display(void)
{
	cout<<"This si derived class "<<endl;
	
	}
	int main()
	{
		C c;
		c.display();
		c.A:: display(); // calling base class member function 
		c.B::display(); // calling base class member function
		
		return 0;
	}
