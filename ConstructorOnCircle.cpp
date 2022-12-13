#include<bits/stdc++.h>
using namespace std;
class circle 
{
	public:
		void centre();
		void diameter();
		void radius();
		void arc();
		
};
    
     void circle ::centre()
     {
     	cout<<"From center we made Circle";
	 cout<<endl;
	 }
	 void circle:: diameter()
	 {
	 	cout<<"Diameter gives full length of Circle";
	 	cout<<endl;
	 }
	 void circle:: radius()
	 {
	 	cout<<"Radius is half of Diameter";
	 cout<<endl;
	 }
	 void circle:: arc()
	 {
	 	cout<<"Arc is one fourth of Circle";
	 cout<<endl;
	 }
	 
	 int main()
	 {
	 	circle c1;
	 	c1.centre();
	 	c1.diameter();
	 	c1.radius();
	 	c1.arc();
	 	
	 	cout<<"Full Fledge Circle is Appear"<<endl;
	 	
	 	return 0;
	 }
