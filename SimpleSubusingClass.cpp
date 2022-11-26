#include<bits/stdc++.h>
using namespace std;
class sub
{
 
    int p,q,r;
    public:
	void putdata(void);
	void getdata(void);
};
  
   void sub :: putdata(void)
   {
   	cout<<"Cope up with "<<endl;
   	
   }
   void sub :: getdata(void)
   {
   	cin>>p>>q;
   	r=p-q;
   	cout<<"We can Cope up with Multiplication"<<r<<endl;
   }
   int main()
   {
   	sub op1;
   	op1.getdata();
   	op1.putdata();
   	
   	return 0;
   }
 
