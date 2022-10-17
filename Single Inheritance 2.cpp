//Progarm for Single iNheritance
#include<bits/stdc++.h>
using namespace std;
class A
{
	int x;
	public:
         int y;
         void get_xy(void);
         int get_x(void);
         void show_x (void);
};
class B: private A
{
	int z;
	public:
		void mul(void);
		void display(void);
};
void A :: get_xy(void)
{
	cout<<"Enter  x and y"<<endl;
	cin>> x>> y;
};
int A :: get_x(void)
{
	return x;
}
void A :: show_x(void)
{
	cout<<"x ="<<x<<endl;
}
void B :: mul(void)
{
	get_xy();
	z=y*get_x();
	
}
void B :: display(void)
{
	show_x();
	cout<<"y ="<< y <<endl;
	cout<<"z ="<< z <<endl;
}
  int main()
  {
  	B b;
  	b.mul();
  	b.display();
  	
  	return 0;
  }

