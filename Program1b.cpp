#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, j;
	
	for(i=0;i<4;i++)
	{
		for(j=i;j<i+4;j++)
		{
			cout<<(j%4)+1;
			
		}
		cout<<endl;
	}
	return 0;
}
