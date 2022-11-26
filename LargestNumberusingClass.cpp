#include<bits/stdc++.h>
using namespace std;
class max
{
	int m,n;
	int largest(void);
	public:
		void getdata(void);
		void putdata(void);
};
 
  int max::largest(void)
  {
  	if(m>n)
  	{
  		cout<<m<<endl;
	  }
	  else
	  {
	  	cout<<n<<endl;
	  }
	  void max::getdata(void)
	  {
	  	cout<<"Enter two Numbers"<<endl;
	  	cin>>m>>n;
	  }
	  void max::putdata(void)
	  {
	  	cout<<"largest"<<largest();
	  }
	  int main()
	  {
	  	max obj;
	  	obj.getdata();
	  	obj.putdata();
	  	
	  	return 0;
	  }
  }
