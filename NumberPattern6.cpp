#include<bits/stdc++.h>
using  namespace std;
int main()
{
	int n=5;
	int px;
	
	for(int i=1;i<=n;i++)
	{
		for(int s=n-1;s>=i;s--)
		{
			cout<<" ";
		}
		px=1;
		for(int j=1;j<=i;j++)
		{
			cout<<px<<" ";
			px=px*(i-j)/j;
		}
		cout<<endl;
	}
	return 0;
}
