#include<bits/stdc++.h>
using namespace std;
int main()
{
	int digit , pro=1, sum=0, n;
	cout<<"Coding with Even and Odd Number "<<endl;
	cin>> n;
	while(n>0)
	{
		digit = n%10;
		if(digit%2==0)
		sum=sum+digit;
		else
		pro=pro*digit;
	    n = n/10;
	}
	cout<<"Sum of Even Numbers is ="<<sum<<endl;
	cout<<"Product of Odd Numbers is ="<<pro<<endl;
	
	return 0;
}
