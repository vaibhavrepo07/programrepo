//Progarm for print cube root of number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; 
	float result ;
	
	cout<<"Enter a number"<<endl;
	cin>> n;
	
	result = pow(n, 1.0/3.0);
	cout<<"Cube of a number is "<<result <<endl;
	
	return 0;
	
}
