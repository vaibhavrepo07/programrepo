#include<bits/stdc++.h>
using namespace std;
int add(void);
int main()
{
	int ans;
	ans = add();
	cout<<"Addition is "<<ans;
	
	return 0;
}
    int add (void)
    {
    	int a,b;
    	cout<<"Enter First Number"<<endl;
    	cin>>a;
    	cout<<"Enter Second Number"<<endl;
    	cin>>b;
    	
    	return (a+b);
	}
