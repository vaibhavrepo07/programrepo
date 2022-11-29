#include<bits/stdc++.h>
using namespace std;
class vabz
{
	int a,b,c;
	public:
		vabz();
		vabz(int x);
		vabz(int x, int y);
		void disp();
};
 
    
     vabz::vabz()
 {
 	 a=0;
 	 b=0;
 }
   vabz :: vabz(int x)
   {
   	   a=b=x;
   }
   vabz :: vabz(int x ,int y)
   {
       a=x ;
       b=y ;
   }
   void vabz::disp()
   {
   	  cout<<"The value of A is " <<a;
   	  cout<<endl;
   	  cout<<"The value of B is "<<b;
   }
   
   int main()
   {
   	  vabz t1;
   	  vabz t2(100);
   	  vabz t3(200, 300);
   	  cout<<"Object A "<<endl;
   	  t1.disp();
   	  cout<<endl;
   	  cout<<"Object B" <<endl;
   	  t2.disp();
   	  cout<<endl;
   	  cout<<"Object C"<<endl;
   	  t3.disp();
   	  cout<<endl;
   	  
   	  
   	  return 0;
   	  
   }
