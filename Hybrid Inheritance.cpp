//Progarm for Hybrid Inheritance 
#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		int a;
		void geta(void)
		{
			cout<<"Enter a:"<<endl;
            cin>> a;			
		}
};
class B : public A
{
	public:
		int b;
		void getb(void)
		{
			cout<<"Enter b:"<<endl;
			cin>> b;
		}
};
class D 
{
	public:
		int d ;
		void getd(void)
		{
			cout<<"Enter d:"<<endl;
			cin>> d;
		}
};
class C : public B , public D
{
	int c ;
	public:
		void sum(void)
		{
			c=a+b+d;
			cout<<"Sum= "<<c<<endl;
		}
};
int main()
{
	C c;
	c.geta();
	c.getb();
	c.getd();
	c.sum();
	
	return 0;
}
