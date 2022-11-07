//Program for Maximum of three numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a , b, c ,max;
	cout<<"The Maximum of Three Number of Checking the Largest One"<<endl;
	cin>>a>>b>>c;
	if((a>b)&&(a>=b))
	{
		max=a;
	}
	else if((b>a)&&(b>c))
	{
		max=b;
	}
	else if((c>a)&&(c>b))
	{
		max=c;
	}
	cout<<"The Largest Number is = "<<max<<endl;
	
	return 0 ;
}
