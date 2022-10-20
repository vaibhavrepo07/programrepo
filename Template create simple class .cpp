//Progarm for template 
#include<bits/stdc++.h>
using namespace std ;
template <class T>
class A
{
	private:
		T x ;
		public:
			A()
			{
				
			}
			A(T a)
			{
				x=a;
			}
			void show()
			{
				cout<<"X ="<<x <<endl;
			}
			
};
int main()
{
	A <char> a1('B');
	a1.show();
	
	return 0;
}
