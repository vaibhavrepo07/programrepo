#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int x=1,y,t;
	
	for(int i=n;i>=1;i--)
	{
		y=i;
		t=x;
		for(int s=1;s<i;s++)
		{
			cout<<setw(3)<<" ";
		}
		for(int j=n;j>=i;j--)
		{
			cout<<setw(3)<<t;
			t = t-y;
			y++;
		}
		x=x+i;
		cout<<endl;
	}
	return 0;
}
