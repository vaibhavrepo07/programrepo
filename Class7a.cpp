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
    			cout<<"Enter the Radius ";
    			cin>>radius;
			}
			void area()
			{
				int ar;
				ar= PI*radius*radius;
				cout<<endl;
				cout<<"The Radius of Circle is ="<<ar<<" ";
			}
			void display()
			{
				cout<<endl;
				cout<<"The value is = "<<radius;
			}
};
    int main()
    {
    	Circle a1;
    	a1.getRadius();
    	a1.area();
    	a1.display();
    	
    	
    	return 0;
	}
