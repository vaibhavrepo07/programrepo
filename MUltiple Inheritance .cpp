//Progaram Multiple inheritance in C++
#include<bits/stdc++.h>
using namespace std;

class A
{
	public:
		int a ;
		void geta(void)
		{
			cout<<"Enter a:"<<endl;
			cin>> a;	
		}		
};
class B
{
	public:
		int b;
		void getb(void)
		{
			cout<<"Enter b :"<<endl;
			cin>> b;
		}
};
class C : public A, public B
{
	public:
		void display(void)
		{
			cout<<"Sum ="<< a+b<<endl;
			
					}
};
int main()
{
	C c;
	c.geta();
	c.getb();
	c.display();
	
	return 0;
	
}
