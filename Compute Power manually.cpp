//Program for Compute Power Manually
#include<bits/stdc++.h>
using namespace std;

int main()

{
	int exponent;
	float base ,result =1;
	
	cout<<"Enter base and exponent respectively "<<endl;
	cin>> base>> exponent;
	
	cout<<base<<"^"<<exponent<<"="<<endl;
	
	while(exponent!=0)
	{
		result *=base;
		--exponent;
	}
	cout<<result <<endl;
	
	return 0;
}
