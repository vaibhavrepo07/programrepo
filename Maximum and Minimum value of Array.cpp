#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, min, max, a[5];
	cout<<"Coding with Maximum and Minimum NUmber "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	min=a[0];
	max=a[0];
	
	for(i=0;i<5;i++)
	{
		if( min > a [ i ] )
		{
		min = arr [ i ];
		}
		else
		{
			cout<<"It's "<<endl;
		}
		if( max < a [ i ] )
		{
		max = arr [ i ] ;
		}
		else{
			cout<<"Not"<<endl;
		}
	}
	cout<<"The Maximum Value is = "<<max<<endl;
	cout<<"The Minimum Value is = "<<min<<endl;
	
	return 0;
}
