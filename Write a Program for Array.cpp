//Program for Array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5], i ;
	for(i=0 ;i<5; i++)     //This for loop is For Reading Purpose 
	{
		cin>> a[i];
	}
	for(i=0 ; i<5; i++)   //This for loop is for Printing Purpose 
	{
		cout<< a[i] <<endl;       // Base + index * size of datatype 
	}
	return 0 ;
}
