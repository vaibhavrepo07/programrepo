//Program for Pattern 12
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int x;
	for(int i=1 ;i<=n;i++)
	{
		x=i;
		for(int j=1;j<=n;j++)
		{
			cout<<x<<" ";
			x+=n;
		}
		cout<<endl;
	}
	return 0;
}
