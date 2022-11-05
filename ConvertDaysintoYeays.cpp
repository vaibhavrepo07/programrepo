#include<bits/stdc++.h>
using namespace std;

int main()
{
     int y,m,w,d;
	 cin>>d	;
	 
	 y= d/365;
	 d=d%365;
	 m=d/30;
	 m=d%30;
	 w=d/7;
	 w=d%7;
	 
	 cout<<"Years"<<y<<endl;
	 cout<<"Months"<<m<<endl;
	 cout<<"Weeks"<<w<<endl;
	 cout<<"Days "<<d<<endl;
	 
	 return 0;
}
