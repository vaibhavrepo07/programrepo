#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	
	int x=1, y=n;
	int t1,t2;
	int r1,r2;
	
	for(int i=n;i>=1;i--)
	{
		t1=x;
		t2=y;
		r1=i;
		r2=i+1;
		
		for(int s=1;s<i;s++)
		{
			cout<<setw(3)<<" ";
		}
		for(int j=n;j>=i;j--)
		{
			if((i+j)%2==0)
			{
				cout<<setw(3)<<t1;
			}
			else
			{
				cout<<setw(3)<<t2;
			}
			t1=t1-r1++;
			t2=t2-r2++;
		}
		y=y+i-1;
		x=x+i;
		cout<<endl;
	}
	return 0;
}
