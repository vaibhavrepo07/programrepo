//Progarm for Compute power using pow() Function
#include<bits/stdc++.h>
using namespace std;

int main()
{
	float base,exponent,result;
	
	cout<<"Enter base and exponent respectively"<<endl;
	cin>> base>>exponent;
	
	result=pow(base,exponent);
	
	cout<<base<<"^"<<exponent<<"="<<result<<endl;
	
	return 0;
	
	
}
