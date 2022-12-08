#include<bits/stdc++.h>
using namespace std;
class Distance
{
	int feet , inches;
	public:
		void getdata()
		{
			cout<<"Enter the Feet ";
			cin>>feet;
			cout<<"Enter the Inches";
			cin>>inches;
		}
		void putdata()
		{
			cout<<"The Feet is "<<feet;
			cout<<"The Inches is"<<inches;
		}
};

 int main()
 { 
    Distance d1,d2;
    d1.getdata();
    d1.putdata();
    d2.getdata();
    d2.putdata();
    
    return 0;
 }
