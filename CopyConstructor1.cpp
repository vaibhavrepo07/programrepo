#include<bits/stdc++.h>
using namespace std;
class test
{
	int code ;
	float price;
	
	public:
		test(int c, float p);
		test(const test &t);
		void disp();
		
};
  
   test::test(int c , float p)
   {
   	 code = c;
   	 price = p;
   }
   test :: test (const test &t)
   {
   	code =t.code;
   	price=t.price;
   	
   }
   test::disp()
   {
   	cout<<"Code "<<code;
   	cout<<"price"<<price;
   }

int main()
{
	test t1(101, 50.4);
	
	test t2(t1);
	test t3=t2;
	
	cout<<"t1 object"<<endl;
	t1.disp();
	cout<<"t2 object"<<endl;
	t2.disp();
    
    
    return 0;
	
}
