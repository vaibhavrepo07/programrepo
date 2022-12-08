#include<bits/stdc++.h>
#define PI 3.14
using namespace std;

class Circle 
{
	private :
		float radius;
		public:
			void getRadius()
			{
				cout<<"Enter Radius ";
				cin>>radius;
			}
			void area()
			{
				float ar ;
				ar=PI *radius *radius;
				cout<<"Area of Circle"<<ar;
			}
			void showRadius()
			{
				cout<<"Radius"<<radius;
			}
};
 
   int main()
   { 
      
       Circle c1, c2;
       
       c1.getRadius();
       c2.getRadius();
       c1.showRadius();
       c2.showRadius();
       c1.area();
       c1.area();
       
       return 0;
   }
