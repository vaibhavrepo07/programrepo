//Program for Percentage of marks
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int no , i ;
	float marks[10], per=0 , total=0;
	
	cout<<"Enter a number of subject "<<endl;
	cin>> no;
	
	cout<<"Enter a marks of "<< no<<"subject"<<endl;
	for(i=0;i<no;i++)
	{
		cin>> marks[i];
	}
	for(i=0;i<no;i++)
	{
		total = total +marks[i];
	}
	per = total /no;
	cout<<"Percentage "<< per<<endl;
	
	return 0;
}
