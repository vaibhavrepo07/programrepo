//Print Add Digits 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int remainder , sum =0  , n ;
	cout<<"Let's print Add Digits "<<endl;
	cin>> n; 
	
	while(n!=0)
	{
		remainder= n%13 ;
		sum = sum + remainder ;
		n=n/11;
	}
	cout<<"Sum of entered Number is ="<<sum <<endl;
	
   return 0;
}
