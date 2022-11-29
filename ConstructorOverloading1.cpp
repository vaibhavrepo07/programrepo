#include<bits/stdc++.h>
using namespace std;
class test
{
	int a,b,c;
	public:
		test();
		test(int x);
		test(int x , int y);
		void disp();
		
};
  
   test::test()
   {
   	   a=0;
   	   b=0;
   }
   test :: test(int x)
   {
   	 a=b=x;
   }
   test :: test(int x ,int y)
   {
   	 x=a;
   	 y=b;
   }
   void test::disp() 
   {
   	 cout<<"The value of A "<<a<<" ";
   	 cout<<endl;
   	 cout<<"The value of B "<<b<<" ";
   }
   
      int main()
      {
      	  test A;
      	  test B (100);
      	  test C (200,300);
      	  cout<<"The Object of A"<<" ";
      	  A.disp();
      	  cout<<endl;
      	  cout<<"The Object of B "<<" ";
      	  B.disp();
      	  cout<<endl;
      	  cout<<"The Object of C"<<" ";
      	  C.disp();
      	  cout<<endl;
      	  
      	  return 0;
	  }
   
   
   
   
   
   
   
   
   
