#include<bits/stdc++.h>
using namespace std;


	inline float volume(int r)
	{
		return (4*3.14*r*r*r)/3;
	}
	int main()
	{
	
	int r;
	cout<<"Enter radius"<<endl;
	cin>>r ;
	cout<<"Volume of Sphere"<<volume(r);
	
	return 0;

}
