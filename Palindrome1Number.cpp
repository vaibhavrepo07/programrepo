#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, orig, rev=0;
	cout<<"Enter the Number of a Palindrome "<<endl;
	cin>>i;
	orig = i;
	for(i=1;i>0;i=i/10)
	rev = rev * 10 +(i%10);
	i=i/10;
	
	if(orig ==rev)
	cout<<"Palindrome Number "<<endl;
	else 
	cout<<"Not Palindrom Number "<<endl;
	
	return 0;
	
}
