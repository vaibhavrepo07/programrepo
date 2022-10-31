#include<bits/stdc++.h>
using namespace std;

int main()
{
	float r,h;
	float volume ;
	
	cout<<"Enter radius of the Cone "<<endl;
	cin>>r;
	
	cout<<"Enter height of the cone"<<endl;
	cin>>h;
	
	volume =(3.14*r*r*h)/3;
	
	cout<<"Volume of Cone is :"<<volume <<endl;
	
	return 0;
}
