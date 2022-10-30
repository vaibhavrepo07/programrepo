#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1, num2, num, i , digit ,sum ;
	cout<<"Enter First Number"<<endl;
	cin>> num1;
	cout<<"Enter second Number"<<endl;
	cin>> num2;
	
	cout<<"Armstrong NUmbers between"<<num1 <<"and "<<num2<<"are:"<<endl;
	for(i=num1;i<=num2;i++)
	{
		sum=0;
		num=i;
		for(;num>0;num/=10)
		{
			digit = num%10;
			sum=sum+digit*digit*digit;
		}
		if(sum==i)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
