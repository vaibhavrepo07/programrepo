#include<bits/stdc++.h>
#define e 2.7
using namespace std;

class exponential
{
	private :
		float no;
		
		public:
			void getNumber()
			{
				cout<<"Enter the Exponential Value";
				cin>>no;
			}
			void actualValue()
			{
				int val;
				val = 2.7;
				cout<<"The value of Exponential is = "<<val<<endl;
			}
			void putval()
			{
				cout<<"The Expression is "<<no;
			}
};
   int main()
   {
   	 exponential val1;
   	 val1.getNumber();
   	 val1.actualValue();
   	 val1.putval();
   	 
   	 return 0;
   }
