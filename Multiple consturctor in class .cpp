// Progaram for demonstrate multiple consturctor
#include<bits/stdc++.h>
using namespace std;
class integer 
{
	int m,n;
	public:
		integer(void);      // default consturctor 
		integer(int , int );   //parametrized constructor declaration 
		void putdata(void);
 };
  integer :: integer(void)   // default constructor 
  {
  	
  	m = 0 ;
  	n = 0 ;
  }
  integer :: integer (int x, int y)   // parametrized consturctor body
  {
  	m=x;
  	n=y;
  }
  void integer :: putdata(void)
  {
  	 cout<<"m = "<<m<<endl;
  	 cout<<"n = "<<n<<endl;
   } 
   main()
   {
   	integer k;  //default constructor call
   	cout<<"Data from the First object"<<endl;
   	k.putdata();
   	integer i(10,20);  // implicit call of the consturctor
   	cout<<"Data form the second object "<<endl;
    i.putdata();
    integer j = integer(1,2); //explicit call of the consturctor
    cout<<"Data form the third object "<<endl;
    j.putdata();
    return 0 ;
    }
