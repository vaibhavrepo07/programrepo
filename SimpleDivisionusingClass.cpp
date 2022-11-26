#include<bits/stdc++.h>
using namespace std;
class div
{
	int w,x,y;
	public:
		void putdata(void);
		void getdata(void);
};
  
   void div::getdata(void)
   {
   	cin>>w>>x;
	}
	void div::putdata(void)
	{
		y=w+x;
		cout<<"The Value is = "<<y<<endl;
	 } 
	 
	 int main()
	 {
	 	div t1;
	 	t1.getdata();
	 	t1.putdata();
	 	
	 	return 0;
	 }
