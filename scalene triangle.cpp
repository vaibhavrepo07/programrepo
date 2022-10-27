//Program for Area of Triangle 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	float s,a,b,c,ar;
	cout<<"a,b,c";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"the area is  "<<ar;
	return 0;
}
