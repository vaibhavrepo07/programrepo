#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=5;
	
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n-1;j>=i;j--)
		{
			cout<<(char )(j+65)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
