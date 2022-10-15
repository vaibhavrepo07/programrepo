//Program for copy constructor
#include<bits/stdc++.h>
using namespace std;
class integer 
{
	int m;
	public:
		integer(void){     //default constructor
		                  	
		} 
		integer(int x )    // parametrized consturctor
		{
			m = x;
		}
		integer(integer &x)     //copy consturctor 
		{
			m= x.m ;
		}
		void putdata(void);
};

void integer :: putdata(void)
{
	cout<<" m= "<<m ;
	
}main()
{
	integer i(10); //object i is created and initilized 
	integer j(i); //copy constuctor call 
	integer k = i; // copy consturctor call again 
	integer a ; // object a is created but not initilized 
	a = i ;     // copy constuctor not called 
	cout<<"Data of Object i "<<endl;
	i.putdata();
	cout<<"Data of Object j"<<endl;
	j.putdata();
	cout<<"Data of Object k"<<endl;
	k.putdata();
	cout<<"Data of Object a"<<endl;
	a.putdata();
	
	return 0 ;
}
