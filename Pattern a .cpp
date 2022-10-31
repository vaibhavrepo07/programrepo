//Program for Pattern 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, j, k;
	
	for(int i=0 ;i<5 ;i++)
	{
		for(int k=4; k>=i; k--)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<char(i+65)<<" ";  
		}
		cout<<endl;
	}
	return 0;
}
