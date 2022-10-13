//Program for finding the Average of an marks using an Array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int marks[5] , i ;
	float sum=0 , avg;
	cout<<"Enter marks of the Five Number "<< endl;
	for (i=0 ; i<5 ;i++)
	{
	    cin>> marks[i];
	}
	for(i=0 ; i<5 ; i++)
	{
		sum= sum+marks[i];
	}
	avg=sum/5;
	cout<< marks<<endl;
	cout<< avg<<endl;

	return 0 ;
}
