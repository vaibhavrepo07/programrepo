//Program for Break Statement 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a , i , sum=0;
	for(i=1;i<=5;i++)
	{
		cout<<"Enter a Number"<<endl;
		cin>> a;
		if(a<0)
		{
			break;
		}
		sum=sum+a;
		cout<< sum<<endl;
	}
	return 0;
}
