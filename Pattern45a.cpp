#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=6,x=1;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cout<<x<<" ";
			x+=2;
		}
		cout<<endl;
	}
	return 0;
}
