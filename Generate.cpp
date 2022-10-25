//Progarm for Generate Fibonacci Sequence up to a certain number
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t1=0, t2=1, nextTerm=0 , n;
	
	cout<<"Enter a Positive Number"<<endl;
	cin>>n;
	
	//Display the First two Terms which is always 0 and 1
	cout<<"Fibonacci Series"<<t1<<" , "<< t2 <<" , "<<endl;
	
	nextTerm=t1+t2;
	
	while(nextTerm<=n)
	{
		cout<<nextTerm<<" , "<<endl;
		t1=t2;
		t2=nextTerm;
		nextTerm=t1+t2;
		
	}
	return 0 ;
}
