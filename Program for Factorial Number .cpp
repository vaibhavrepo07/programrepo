//Progarm for Factorial Number in c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int fact=1 , n ,  i  ;
	cout<<"Look Ahead We are calculating the factorial"<<endl;
	cin>>  n; 
	for(i=1 ; i<= n ; ++ i)
	{
		fact *=i;
		
	}
	cout<<"The Factorial Number is = "<<fact<<n <<endl;
	
	return 0 ;
}
