//Program for Pattern numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i ,j , k;
	
	for(int i=1;i<=5;i++)
	{
		for(int k=4;k>=i;k--)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
