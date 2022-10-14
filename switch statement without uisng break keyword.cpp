//progarm for switch statement with out using break keyword
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a ;
	cout<<"Switch statement without using break keyword"<<endl;
	cin>> a;
	switch(a)
	{
		case 35: cout<<"Sun"<<endl;
		//break;
		case 45: cout<<"Mercury"<<endl;
		break;
		case 55:cout<<"Venus"<<endl;
		break;
		
		default :
			cout<<"Star and Planet"<<endl;
	}
}
