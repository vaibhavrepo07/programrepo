//Progarm for Hierarchical Inheritance
#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		int a,b;
		void getab(void)
		{
			cout<<"Enter a and b"<<endl;
			cin>> a>> b;
		}
};
class B : public A
{
	int c ;
	public :
		void sum(void)
		{
			c= a+b;
			cout<<"sum ="<< c<<endl;
		}
};
class C : public A 
{
	int c;
	public:
		void mul(void)
		{
			c=a*b;
			cout<<"Multiplication = "<< c<<endl;
		}
};
 
   int main()
   {
   	B b;
   	b.getab();
   	b.sum();
   	C c;
   	c.gettab();
   	c.mul();
   	
   	return 0 ;
   }
