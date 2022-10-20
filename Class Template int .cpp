//Program for Class Template 
#include<bits/stdc++.h>
using namespace std;
template<class x>
class demo
{
	private :
		 x num1 ,num2;
		 
		 public:
		 	demo(x n1, x n2)
		 	{
		 		num1=n1;
		 		num2=n2;
			 }
			 void check()
			 {
			 	if(num1>num2){
			 		cout<<num1<<"is the largest number "<<endl;
				 }else{
				 	cout<< num2<<"is the largest number"<<endl;
				 }
			 }
};
int main()
{
	demo <int > obj1(5, 6);
	obj1.check();
	
	return 0;
}
