#include<bits/stdc++.h>
using namespace std;

class test
{
	int no;
	static int count ;
	
	public:
		void getval(int );
		void putval(void);
};

   void test::getval(int x)
   {
   	no=x;
   	cout<<"Number = "<<no<<endl;
   	count++;
   }
   void test :: putval(void)
   {
   	cout<<"Counter ="<<count <<endl;
   }
   int test :: count ;     //define static dtate meneber 
   
   int main()
   {
   	test t1,t2,t3;
   	t1.putval();
   	t2.putval();
   	t3.putval();
   	
   	t1.getval(100);
   	t2.getval(200);
   	t3.getval(300);
   	
   	t1.putval();
   	t2.putval();
   	t3.putval();
   	
   	return 0;
   }
   
