#include<bits/stdc++.h>
using namespace std;
class integer
{
	int m,n;
	public:
		integer(int ,int );     //parametrized constructor declaration
		void putdata(void);
};

   integer::integer(int x, int y)
   {
   	   m=x;
   	   n=y;
   }
   void integer::putdata(void)
   {
   	 cout<<"m"<<m;
   	 
   	 cout<<"n"<<n;
   }
   int main()
   {
   	  integer i(10,20); //implicit call of the constructor 
   	  cout<<"Data from the first object"<<endl;
   	  i.putdata();
   	  cout<<endl;
   	  integer j= integer(1,2);  //explicit call of the constructor 
   	  cout<<"Data from the Second object "<<endl;
   	  cout<<endl;
   	  j.putdata();
   	  
   	  return 0;
   }
   
