#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i ;
    
    cout<<"Enter The Number ::::"<<endl;
    cin>>n;
    
    for(i=2;i<n/2;i++)
    {
    	if(n%i==0)
    	{
    		cout<<n;
    		exit(0);
		}
		cout<<n;
		
		return 0;
	}
}
