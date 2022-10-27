//Program for Scope Resolution Operator
#include<bits/stdc++.h>
using namespace std;
int n=1;
int main()
{
	int a=3;
	{
		int s=4;
		{
			cout<<"inner "<< a;
		}
		cout<<"inner"<<s<<endl;
		
	}
	return 0;
	
}
