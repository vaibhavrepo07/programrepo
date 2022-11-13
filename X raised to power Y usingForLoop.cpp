#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,x,y,pro=1;
	cin>>x>>y;
	cout<<"Enter the Power VAlue "<<endl;
	for(i=1;i<=y;i=i+1)
	 pro = pro*x;
	 
	 cout<<"Final Value ="<<pro;
	 return 0;
}
