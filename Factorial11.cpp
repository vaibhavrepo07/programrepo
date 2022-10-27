//Program for Factorial Number 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,fact=1,i;
	cout<<"The Number of Factorial "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<" "<<n<<" = "<<fact<<endl;
	
	return 0;
}
