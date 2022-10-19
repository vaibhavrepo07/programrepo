//Pointer to Object in c++
#include<bits/stdc++.h>
using namespace std;
class temp;
{
	int x;
	public:
		void getdata(void)
		{
			cout<<"Enter the Value of x"<<endl;
			cin>> x;
		}
		void putdata(void)
		{
			cout<<"x"<< x<<endl;
		}
};
int main()
{
	temp *a;
	a->getdata();
	(*a).putdata();
	
	return 0;
}
