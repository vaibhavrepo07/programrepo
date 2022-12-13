#include<bits/stdc++.h>
using namespace std;
class table
{
	int a,b;
	public:
		table(void) ; // constructor declaration
		void putdata(void);
};

   table::table(void)
   {
   	   a=0;
   	   b=10;
   }
   
   void table::putdata(void) 
   {
   	 cout<<"The value of a is = "<<a<<endl;
   	 cout<<"The value of b is = "<<b<<endl;
   }
   
   int main()
   {
   	  table t1;       //default constructor
   	  t1.putdata();   
   	  
   	  return 0;
   }
