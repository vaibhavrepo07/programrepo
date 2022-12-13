#include<bits/stdc++.h>
using namespace std;
class space 
{ 
    int x ,y , z;
    public:
    	void getdata(int a, int b ,int c)
    	{ 
    	  x= a;
    	  y=b;
    	  z=c;
    	  
		}
		void display(void)
		{
			 cout<<"x "<<x << " y "<<y << " z"<< z<<endl; 
		}
		void operator  -(void);
};
  void space  :: operator -(void)
  { 
    x =-x ;
    y= -y;
    z=-z;
    
  }
  int main()
   {
   	  space s;
   	  s.getdata(10, -20 , 30);
   	  cout<<"Original data";
   	  s.display();
   	  -s;
   	  cout<<"Data after unary operator overloading ";
   	  s.display();
   	  
   	  return 0;
   }
