#include<bits/stdc++.h>
using namespace std;
class sum 
{
	int a,b,t;
	public:
		void getdata(void);
		void putdata(void);
};

  void sum :: getdata(void)
  {
  	cout<<"Sum of Two Numbers"<<endl;
  	cin>>a>>b;
  }
  void sum :: putdata(void)
  {
  	cout<<"The Value of Two Sum is = "<<endl;
  	t=a+b;
  	cout<<"The Total is = "<<t<<endl;
  	
  }
  int main()
  {
  	sum ob1;
  	ob1.getdata();
  	ob1.putdata();
  	
  	return 0;
  }
