//Program for Nested if Else statement
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m ;
	cout<<"Enter the Marks "<<endl;
	cin>>m;
	
	if(m>70)
	{
		cout<<"Grade A"<<endl;
	}
	else
	{
		if(m>60)
		{
			cout<<"Grade A"<<endl;
		}
		else
	{
		if(m>50)
		{
			cout<<"Grade B"<<endl;
		}
	}
	return 0;
}
}
