//Program To print the Transpose of a  Matrix 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,a[2][3];
	cout<<"Enter the Code in the 2D Array"<<endl;
	cin>> i >> j;
	for(i=0; i<2 ;i++)
	{
		for(j=0 ;j<3 ;j++)
		{
			cin>>a[i][j];
		}
		for(i=0 ;i<3 ;i++)
		{
			for(j=0 ;j<2; j++)
			{
				cout<<a[j][i]<<endl;
			}
			cout<< endl;
		}
		return 0 ;
	}
}
