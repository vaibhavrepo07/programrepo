#include<bits/stdc++.h>
using namespace std;
class A
{
	int a;
	public:
		void getval_a(int);
		int get_a();
};
 
  class B :public A
  {
  	 int b,c ;
  	 public:
  	 	void getval_b(int );
  	 	void add();
  	 	void dispval();
  };
  
  void A :: getval_a(int x)
  {
  	a=x;
  	
  }
  int A :: get_a()
  {
  	return a;
  }
  void B :: getval_b (int x)
  {
  	b=x;
  }
  void B :: add()
  {
  	c=get_a();
  	c=c+b;
  }
  void B :: dispval()
  {
  	cout<<"Value of A "<<get_a();
  	cout<<"Value of B "<<b;
  	cout<<"Value of C "<<c;
  }
  int main()
  {
  	 int a, b ;
  	 B obj;
  	 cin>>a;
  	 cin>>b;
  	 
  	 obj.getval_a(a);
  	 obj.getval_b(b);
  	 obj.add();
  	 obj.dispval();
  	 
  	 return 0;
  }
