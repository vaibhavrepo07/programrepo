#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=n/2)
			cout<<"0";
			else
			cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}
