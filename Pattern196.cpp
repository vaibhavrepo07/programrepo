#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<=3;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=i)
			cout<<"0";
			else
			cout<<i+j;
		}
		cout<<endl;
	}
	return 0;
}
