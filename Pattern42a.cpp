#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	
	for(int i=1; i<=4; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<(i+j-1)<<endl;
		}
		cout<<endl;
	}
	return 0;
}
