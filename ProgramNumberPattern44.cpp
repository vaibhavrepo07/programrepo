#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, j, k=0;
	int n=4; // size
	
	for(int i=1;i<=n;i++)
	{
		k+=i;
		for(int j=k; j>k-i; j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
	
}
