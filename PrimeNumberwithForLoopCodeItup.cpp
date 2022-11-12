#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i , j ,count=0;
	cout<<"Enter Number"<<endl;
	cin>>i;
	
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		count++;
	}
	if(count==2)
	cout<<"Prime Number ";
	else
	cout<<"Composite Number";
	
	return 0;
}
