#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int n, pro=1;
	int sum=0, digit ;
	cin>>n;
	
	cout<<"Enter the Number "<<endl;
	while(n>0)
	{
		digit =n%10;
		if(digit%2==0)
		sum=sum+digit;
		else
		pro=digit*pro;
		
		n=n/10;
		
	}
	cout<<"Sum of Even Number is = "<<sum <<endl;
	cout<<endl;
	cout<<"Product of Odd Number is ="<<pro<<endl;
	
	return 0;
	
}
