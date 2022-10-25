//Progarm for Sum of Natural Numbers using loop
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter a positive integer"<<endl;
	cin>> n;
	
	for(int i=1; i<=n ; i++)
	{
		sum+=i;
	}
	
	cout<<"Sum = "<< sum<< endl;
	return 0;
	
}
