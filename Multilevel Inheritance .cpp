//Program for Multilevel Inheritance 
#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		int a ;
		void geta(void)
		{
			cout<<"Enter a :"<<endl;
			cin>> a;
		}
};
class B : public A
{
	public:
		int b;
		void getb(void)
		{
			cout<<"Enter b"<<endl;
			cin>> b;
		}
};
class C : public B
{
	int c;
	public:
		void sum(void)
		{
			c=a+b;
			cout<<"Sum ="<< c<<endl;
		}
};
int main()
{
	C c;
	c.geta();
	c.getb();
	c.sum();
	
	return 0;
}
