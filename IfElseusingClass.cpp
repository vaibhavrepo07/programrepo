#include<bits/stdc++.h>
using namespace std;
class max
{
	int m,n;
	int largest (void)
	{
		if(m>n)
		return m;
		else
		return n;
	}
	public:
		void getdata(void)
		{
			cout<<"Enter two Numbers"<<endl;
			cin>>m>>n;
		}
		void putdata(void)
		{
			cout<<"Largest ="<<largest();
		}
};
int main()
{
	max obj;
	obj.getdata();
	obj.putdata();
	
	return 0;
}
