//Program to overload +opertor to add to complex numbers
#include<bits/stdc++.h>
using namespace std;
class complex 
{
	float real;
	float img ;
	public:
		void getdata(void)
		{
			cout<<"Enter real part of the complex number"<<endl;
			cin>> real ;
			cout<<"Enter the Imaginary part of the complex number"<<endl;
			cin>> img ;
		}
		void display(void)
		{
			cout<<real <<"+ i"<<img <<endl;
		}
		complex operator +=(complex);
};
complex complex :: operator +=(complex a)
{
	real =real +a.real ;
	img =img+a.img ;
	return (*this);
 } 
 int main()
 {
 	complex c1,c2;
 	cout<<"Enter the data for first object"<<endl;
 	c1.getdata();
 	cout<<"Enter teh Data for second object "<<endl;
 	c2.getdata();
 	c1+=c2;
 	cout<<"Addition fo two Complex number "<<endl;
 	c1.display();
 	
 	return 0;
 }
