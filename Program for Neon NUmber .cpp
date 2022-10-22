//Progarm for Neon Number 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  n , sq, sum=0;
	cout<<"Enter the Number "<<endl;
	cin>> n;
	
	sq = n*n ;  // find Square of the n
	//calculating the sum of square 
	while(sq>0)
	{
		sum = sum + sq % 10 ;
		sq = sq / 10 ;
	}
	if(sum == n) //check sum and number 
	cout<< n <<"is  a neon number "<<endl;
	else 
	cout<< n << "is not  a neon number "<<endl;
	
	return 0 ;
}
