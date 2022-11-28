#include<bits/stdc++.h>
using namespace std;
class A
{
	static int count ;
	public:
		A()
		{
			count ++;
			cout<<"Number of oBject created "<<count ;
		}
		~A()
		{
			cout<<"Number of object destroyed "<<count ;
			count--;
		}
};

    int A :: count =0;
    
    int main()
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
		cout<<"In Main Block"<<endl;
		
		return 0;
	}
