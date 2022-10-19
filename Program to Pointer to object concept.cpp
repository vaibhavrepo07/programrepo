//Program to pointer to object concept 
#include<bits/stdc++.h>
using namespace std;
class max ;
{
	int n,m;
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
			cout<<"largest"<<largest()<<endl;
		}
		
};
int main()
{
	max *obj ; // declaration of pointer to object 
	obj ->getdata(); // accessing class memeber using pointer 
	(*obj ).putdata(); // another way of accessing members
	
	return 0;
}
