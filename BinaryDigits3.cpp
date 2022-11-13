#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=7;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<((i+j)%2)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
