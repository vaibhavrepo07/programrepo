#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k=0;
	int n=6;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=k;j>k-i;j--)
		{
			cout<<j<<i;
		}
		cout<<endl;
	}
	return 0;
}
