#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5, x=1;
	
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=n;j++)
		{
			if(i<=j)
			{
				cout<<setw(3)<<x;
				x+=2;
			}
			else
			{
				cout<<setw(3)<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
