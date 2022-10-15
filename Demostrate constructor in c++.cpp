#include<bits/stdc++.h>
using namespace std;

class integer 
{
	
	int m,n;
	public:
		integer(void);     //constructor declaration
		void putdata(void) ; 
};
integer::integer(void)
{
	m=0;                 //constructor to initilize values
	n=0;
}
void integer::putdata(void)
{
	cout<<"m ="<<m<<endl;
	cout<<"n ="<<n<<endl;
}
main()
{
	integer i;            //default constructor invoked 
	i.putdata();
	 
	return 0;
}
