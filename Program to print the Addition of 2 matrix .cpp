//Program to print addition of 2 matrix 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[2][3], b[2][3], c[2][3],i,j;
	cout<<"To Print the Addition of 2 matrix "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<endl;
    for(i=0; i<2;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		cout<<a[i][j]<<endl;
		}
	}
	for(i=0 ;i<2;i++)
	{
		for(j=0 ;j<3;j++)
		{
			cout<<b[i][j]<<endl;
		}
	}
	for(i=0 ;i<2;i++)
	{
		for(j=0 ;j<3 ;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<endl;
		}
		cout<<endl;
	}
    return 0; 
}
