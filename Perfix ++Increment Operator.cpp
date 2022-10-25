//Program for Prefix ++ Increment operator
#include<bits/stdc++.h>
using namespace std;

class check 
{
	private:
		int i ;
		public:
			check():i(0){
			}
			void operator ++()
			{
				++i;
				
			}
			void display()
			{
				cout<<"i="<<i<<endl;
			}
			
};

int main()
{
	check obj;
	//display the value of data memeber i for object obj 
	
	obj.display();
	
	//Invokes operator function void opeator ++()
	++obj;
	
	//Displays the value of data member i for object obj 
	obj.display();
	
	return 0 ;
	
}
