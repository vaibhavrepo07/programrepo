//Program for Create constant using #define 
#include<bits/stdc++.h>
#define PI 3.14 

using namespace std;

int main()
{
	float r , vol ;
	
	cout<<"Enter Radius of Hemi-sphere"<<endl;
	cin>> r;
	
	vol = (2.0 / 3.0) *PI *r* r* r;
	
	cout<<"Volume of Hemi-sphere = "<<vol << endl;
	
	return 0 ;
}
