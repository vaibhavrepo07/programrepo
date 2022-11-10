#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x, n ,rev ,r;
	
	cin>>n;
	x=n;
	rev=0;
	while(n!=0)
	{
		r = n%10;
		rev = (rev*10)+r;
		n=n/10; 
	}
	cout<<"The Palindrome Number "<<rev<<endl;
	
	if(rev==x)
	cout<<"It's a Palindrome Number"<<endl;
	else
	cout<<"It not a Palindrome Number"<<endl;
	
	return 0;
}
