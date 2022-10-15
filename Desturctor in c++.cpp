//Progarm for Destructor in c++
#include<bits/stdc++.h>
using namespace std;
class A
{
	static int count ;
	public:
		A()
		{
			count ++;
			cout<<"Number of Object created"<<endl;
		}
		~A()
		{
			cout<<"Number of Object destoryed"<<endl;
			count --;
		}	
};
int A:: count =0 ;
main()
{
	A a1,a2,a3,a4;
	{
		cout<<"Block one "<<endl;
		A a5;
	}
	{
		cout<<"Block two "<<endl;
		A a6;
	}
	cout<<"In main block "<<endl;
	
	return 0;
}
