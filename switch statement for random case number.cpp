//Program for Switch Statement for random case number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a ;
	cout<<"Random Case Number we can write"<<endl;
	cin>> a;
	switch(a)                           // Writting case number in sequential order is not 
	                                    //mandatory you can write random number instead of that .
	{
		case 23: cout<<"1"<<endl; 
		break;
		case 45: cout<<"2"<<endl;
		break;
		case 56: cout<<"4"<<endl;
		break;
		
		default :
			cout<<"456"<<endl;
			
	}
}
