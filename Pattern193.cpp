#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i+j<=n+1)
			{
				cout<<"1";
			}
			else
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
