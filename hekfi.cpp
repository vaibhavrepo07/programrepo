#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=7;
	int x;
	for(int i=1;i<=n;i++)
	{
		x=i;
		for(int j=1;j<=n;j++)
		{
			cout<<x<<" ";
			x=n+x;
		}
		cout<<endl;
	}
	return  0;
}
