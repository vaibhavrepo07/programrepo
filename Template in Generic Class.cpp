//Program for Generic Class in Template
#include<bits/stdc++.h>
using namespace std;
template <class t>
class test 
{
	t a,b;
	public:
		void get()
		{
			cin>>a>>b;
		}
		t sum();  // function declaration 
};
template <class t> // function definition

	t test <t> :: sum()
	{
		return a+b;
	}
	int main()
	{
		test<int >t1;
		test <float >t2;
		cout<<"Enter Two INteger"<<endl;
		t1.get();
		cout<<"Sum ="<<t1.get()<<endl;
		cout<<"Enter two Float "<<endl;
		t2.get();
		cout<<" The sum is "<< t2.sum();
		return 0;
	}
