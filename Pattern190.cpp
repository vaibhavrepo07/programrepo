#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=n-i)
			{
				cout<<(i+j-1)<<" ";
			}
			else
			{
				cout<<n<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}
