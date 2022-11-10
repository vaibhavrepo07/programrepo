#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i , rev=0;
    cout<<"Coding with Reverse the Number "<<endl;
    cin>>i;
    while(i>0)
    {
		rev= (rev*10)%10;  
    	i=i/10;
	}
	cout<<"Reverse the Number "<<rev<<endl;
	
	return 0;
	
}
