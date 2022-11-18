//Program for REverse An Array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[9]={34,56,32,67,89,90,32,21};
	
	
	int i;
	for( i=0;i<9;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
        cout<<endl;
        for(i=8;i>=0;i--)
        {
        	cout<<a[i]<<" ";
		}
		cout<<endl;
	return 0;
}
