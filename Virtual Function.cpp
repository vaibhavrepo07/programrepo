//Program for Virtual Function
#include<bits/stdc++.h>
using namespace std;
class base
{
	public:
		void disp(void)
		{
			cout<<"Base class disp"<<endl;
		}
		virtual void show(void)
		{
			cout<<"Base class"<<endl;
		}
};
class Derived: public base
{
	void disp(void)
	{
		cout<<"Derived class disp"<<endl;
	}
	void show(void)
	{
		cout<<"Derived class show"<<endl;
	}
};

int main()
{
	Base *p
	Base objb;
	Derived objd;
	p = &objb;
	p ->disp();
	p ->show();
	p = &obj d;
	p ->disp();
	p ->show();
	
	return 0;
	
}
