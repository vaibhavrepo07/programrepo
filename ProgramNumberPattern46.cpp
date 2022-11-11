#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5, x=2;
	
	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<x<<" ";
			x+=2;
		}
		cout<<endl;
	}
	return 0;
}
