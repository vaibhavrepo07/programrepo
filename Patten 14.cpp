//Program for pattern 14
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int x ;
	for(int i=1;i<=n;i++)
	{
		x=n-i+1;
		for(int j=1;j<=n;j++)
		{
			cout<<x<<" ";
			x=x+n;
		}
		cout<<endl;
	}
	return 0;
}
