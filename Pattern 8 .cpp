//Program for Pattern 8 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int x=2;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<x<<" ";
			x+=2;
		}
		cout<<endl;
	}
	return 0;
}
