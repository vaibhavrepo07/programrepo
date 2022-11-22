#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=6, x=4;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<x<<" ";
			x=x+4;
		}
		cout<<endl;
	}
	return 0;
}
