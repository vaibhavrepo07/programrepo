//Progarm simple intrest 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float amount , rate ,time ,si ;
	
	cout<<"Enter principal amount "<<endl;
	cin>> amount ;
	
	cout<<"Enter Rate of interest "<<endl;
	cin>> rate;
	
	cout<<"Enter Period of Time "<<endl;
	cin>>time ;
	
	si=(amount * rate * time )/100;
	cout<<"Simple Interest :"<< si<<endl;
	
	return 0;
	
}
