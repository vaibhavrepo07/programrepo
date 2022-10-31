#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int p_height = 5;
	
	for(int i=p_height ;i>=1;i--)
	{
		for(int k=p_height-1;k>=i;k--)
		{
			cout<<"";
		}
		for(int j=i ;j>=1;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}
