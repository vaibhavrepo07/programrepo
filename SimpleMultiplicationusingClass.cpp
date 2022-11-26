#include<bits/stdc++.h>
using namespace std;
class mul
{
	int a,b,c;
	public:
		void getdata(void);
		void putdata(void);
};

 void mul::getdata(void)
 {
 	cout<<"Let's catch the value of MUltiplication "<<endl;
 	cin>>a>>b;
 }
 void mul :: putdata(void)
 {
 	c = a*b ;
 	cout<<"The Multiplication of Two Numbers is = "<<c<<endl;
 	
 }
 int main()
 {
 	mul ob1;
 	ob1.getdata();
 	ob1.putdata();
 	
 	return 0;
 }
