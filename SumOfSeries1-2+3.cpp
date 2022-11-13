#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cout<<"Enter the Number of Terms "<<endl;
	cin>>N;
	
	int S=0;
	int sign=1;
	
	for(int i=1;i<=N;i++)
	{
		S=S+(sign*i);
		sign=sign*-1;
	}
	cout<<"Sum of First "<<N<<"Terms ="<<S<<endl;
	
	return 0;
}
