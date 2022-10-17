//Program for Single Inheritance 
#include<bits/stdc++.h>
using namespace std;

class A 
{
	public:
		int a , b;
		void getdata(void)
		{
			cout<<"Enter a and b"<<endl;
			cin>> a>> b;	
		}
};
   class B : public A 
   {
   	int c;
   	public:
   		void sum (void)
   		{
   			c = a+b;
   			cout<<"Sum = "<<c<<endl;
		   }
   };
  int  main()
   {
   	B b;
   	b.getdata();
   	b.sum();
   	
   	
   	return 0 ;
   }

