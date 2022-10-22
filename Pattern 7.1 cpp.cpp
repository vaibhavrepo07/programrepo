//Progarm to Pattern 7 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=5;
	int x=5;
	cout<<"Coding with Table of 5 multiple"<<endl;
	for(int i=1 ;i<=a;i++)
	{
		for(int j=1 ;j<=a;j++)
		{
			cout<<x<<" ";
			x+=5;
		}
		cout<<endl;
	}
	return 0;
}
