//Program for Constant and Variable Definition 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	float rad;
	const float PI=3.1415;
	
	cout<<"Enter Radius of Sphere :::"<<endl;
	cin>>rad;
	
	float vol=(4.0 /3.0)*PI * rad *rad *rad;
	
	cout<<"Volume of Sphere is = "<< vol<<endl;
	
	return 0;
}
