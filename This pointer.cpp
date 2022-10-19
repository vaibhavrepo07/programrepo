//Progarm for This Pointer 
#include<bits/stdc++.h>
using namespace std;
class max
{
	int no ;
	public:
		max(int no = 0)
	{
		this -> no= no;
	} 
}
max &greater (Max &x)
{
	if(x.no> no)
	{
		return x;
	}
	else 
	{
		return *this;
	}
}
void disp(void)
{
	cout<<"Greater value :"<< no<<endl;
} 
int main()
{
	max obj1 (10), obj2(20), obj3;
	obj3= obj1.greater(obj2);
	obj3.disp();
	
	return 0; 
}
