//Progarm for ambiguity in single level inheritance 
#include<bits/stdc++.h>
using namespace std;
class A 
{
	public:
		void display(void);
};
class B : public A
{
	public:
		void display(void);
};
void A :: display(void)
{
	cout<<"This is base class "<<endl;
}
void B ::display(void )
{
	cout<<"This is derived class "<<endl;
}
main()
{
	B b;
	b.display();   // This will call derived class function b.A :: display();
	
	 //Calling  base class member Function 
	 b.display();
	 
	 return 0;
	 
}
