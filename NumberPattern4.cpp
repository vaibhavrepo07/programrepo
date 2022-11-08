#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	
	for(int i=1;i<=n;i++)
	{
		for(int s=n-1;s>=i;s--)
		{
			cout<<setw(3)<<" ";
			
		}
		for(int j=1;j<=i;j++)
		{
			cout<<setw(3)<<(i*j);
		}
		cout<<endl;
	}
	return 0;
}
