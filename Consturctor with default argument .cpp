//Progarm for consturctor with default argument
#include<bits/stdc++.h>
using namespace std;
class integer 
{
	int m,n;
	public:
		integer(int ,int =0);//parametrized constructor declaration with default value
		void putdata(void);
};
integer::integer(int x ,int y)
{
	m = x;
	n = y;
}
void integer::putdata(void)
{
	cout<<"m ="<<m<<endl;
	cout<<"n ="<<n<<endl;
}
main()
{
	integer i (10);
	cout<<"Data from the first object "<<endl;
	i.putdata();
	integer j (1,2);  //call of the constructor with complete parameters
	cout<<"Data from the second object "<<endl;
	j.putdata();
	return 0 ;
}
	

