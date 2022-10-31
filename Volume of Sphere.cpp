//Program for sphere
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float radius;
	float volume ;
	
	cout<<"Enter radius of the sphere"<<endl;
	cin>>radius;
	
	volume = (4*3.14*radius*radius*radius)/3;
	
	cout<<"Volume of sphere "<<volume<<endl;
	
	return 0;
	
}
