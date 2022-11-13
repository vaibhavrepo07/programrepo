#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,x,y,pro=1;
	cin>>x>>y;
	i=1;
	while(i<=y)
	{
		pro=pro*i;
		i=i+1;
		
	}
	cout<<"Final Value "<<pro;
	
	return 0;
}
