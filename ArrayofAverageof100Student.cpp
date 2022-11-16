#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int a[100], i , sum=0;
	 float avg;
	 
	 cout<<"Calculate the Average of 100 students"<<endl;
	 cin>>i;
	 
	 for(i=0;i<=99;i++)
	 {
	 	cin>>a[i];
	 }
	 for(i=0;i<=99;i++)
	 {
	 	sum = sum+a[i];
	 	avg = sum/100.9;
	 	cout<<"Average of 100 Student is ="<<avg<<endl;
	 }
	 cout<<endl;
	 
	 return 0;
}
