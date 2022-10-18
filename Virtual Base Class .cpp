//Progarm for Virtual Base Class 
//  class C : public virtual A 
// class C : virtual public A
#include<bits/stdc++.h>
using namespace std;
class A
{
	int a ;
	public:
		void dispa ()
		{
			a = 10 ;
			cout<<"Class A "<< a <<endl;
		}
};
 class B : public virtual A
 {
 	int b;
 	public :
 		void dispb()
 		{
 			b=20;
 			cout<<"Class B"<<b<<endl;
		 }
 };
 class C : public virtual A
 {
 	int c,b;
 	public: 
 	void dispc()
 	{
 		c=30 ;
 		cout<<"Class C"<< b<<endl;
	 }
 };
 class D : public B, public C
{
	int d;
	public:
		void dispd()
		{
			d=40;
			cout<<"Class D"<< d<<endl;
		}
};

  int main()
  {
  	D obj;
  	obj.dispa();
  	obj .dispb();
  	obj .dispc();
  	obj .dispd();
  	
  	return 0;
  }
