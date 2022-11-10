#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i ,rev=0;
	cout<<"REverse the Number"<<endl;
	cin>>i;
	
	for(i=1;i>0;i=i/10)
	rev=(rev*10)+i/10;
	
	cout<<"Reverse the Number "<<rev<<endl;
	
	return 0;
	
}
