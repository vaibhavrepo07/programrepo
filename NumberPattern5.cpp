#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=4;
	int x=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>1;j--)
		{
			if(i>=j)
			{
				cout<<setw(4)<<(x*x);
			    x++;
			}
			else
			{
				cout<<setw(4)<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

